
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* ameth; } ;
struct TYPE_5__ {int (* pkey_ctrl ) (TYPE_2__*,int ,int ,int*) ;} ;
typedef TYPE_2__ EVP_PKEY ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,int ,int*) ;

int FUNC_1(EVP_PKEY *VAR_2)
{
    if (VAR_2->ameth && VAR_2->ameth->pkey_ctrl) {
        int VAR_3, VAR_4;
        VAR_3 = VAR_2->ameth->pkey_ctrl(VAR_2, VAR_0, 0, &VAR_4);
        if (VAR_3 > 0)
            return VAR_4;
    }
    return VAR_1;
}
