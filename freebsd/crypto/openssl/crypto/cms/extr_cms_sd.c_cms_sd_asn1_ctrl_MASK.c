
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* pkey; } ;
struct TYPE_8__ {TYPE_1__* ameth; } ;
struct TYPE_7__ {int (* pkey_ctrl ) (TYPE_2__*,int ,int,TYPE_3__*) ;} ;
typedef TYPE_2__ EVP_PKEY ;
typedef TYPE_3__ CMS_SignerInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_2__*,int ,int,TYPE_3__*) ;

__attribute__((used)) static int FUNC_2(CMS_SignerInfo *VAR_4, int VAR_5)
{
    EVP_PKEY *VAR_6 = VAR_4->pkey;
    int VAR_7;
    if (!VAR_6->ameth || !VAR_6->ameth->pkey_ctrl)
        return 1;
    VAR_7 = VAR_6->ameth->pkey_ctrl(VAR_6, VAR_0, VAR_5, VAR_4);
    if (VAR_7 == -2) {
        FUNC_0(VAR_1, VAR_3);
        return 0;
    }
    if (VAR_7 <= 0) {
        FUNC_0(VAR_1, VAR_2);
        return 0;
    }
    return 1;
}
