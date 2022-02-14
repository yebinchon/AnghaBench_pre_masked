
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ operation; TYPE_1__* pmeth; } ;
struct TYPE_5__ {int (* paramgen ) (TYPE_2__*,int *) ;} ;
typedef TYPE_2__ EVP_PKEY_CTX ;
typedef int EVP_PKEY ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_2__*,int *) ;

int FUNC_4(EVP_PKEY_CTX *VAR_5, EVP_PKEY **VAR_6)
{
    int VAR_7;
    if (!VAR_5 || !VAR_5->pmeth || !VAR_5->pmeth->paramgen) {
        FUNC_2(VAR_1,
               VAR_3);
        return -2;
    }

    if (VAR_5->operation != VAR_2) {
        FUNC_2(VAR_1, VAR_4);
        return -1;
    }

    if (VAR_6 == ((void*)0))
        return -1;

    if (*VAR_6 == ((void*)0))
        *VAR_6 = FUNC_1();

    if (*VAR_6 == ((void*)0)) {
        FUNC_2(VAR_1, VAR_0);
        return -1;
    }

    VAR_7 = VAR_5->pmeth->paramgen(VAR_5, *VAR_6);
    if (VAR_7 <= 0) {
        FUNC_0(*VAR_6);
        *VAR_6 = ((void*)0);
    }
    return VAR_7;
}
