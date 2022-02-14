
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* digest; } ;
struct TYPE_5__ {int (* md_ctrl ) (TYPE_2__*,int,int,void*) ;} ;
typedef TYPE_2__ EVP_MD_CTX ;


 int FUNC_0 (TYPE_2__*,int,int,void*) ;

int FUNC_1(EVP_MD_CTX *VAR_0, int VAR_1, int VAR_2, void *VAR_3)
{
    if (VAR_0->digest && VAR_0->digest->md_ctrl) {
        int VAR_4 = VAR_0->digest->md_ctrl(VAR_0, VAR_1, VAR_2, VAR_3);
        if (VAR_4 <= 0)
            return 0;
        return 1;
    }
    return 0;
}
