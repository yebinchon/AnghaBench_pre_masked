
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * pmeth_engine; int type; } ;
typedef TYPE_1__ EVP_PKEY ;
typedef int ENGINE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int ) ;

int FUNC_4(EVP_PKEY *VAR_3, ENGINE *VAR_4)
{
    if (VAR_4 != ((void*)0)) {
        if (!FUNC_2(VAR_4)) {
            FUNC_3(VAR_1, VAR_0);
            return 0;
        }
        if (FUNC_1(VAR_4, VAR_3->type) == ((void*)0)) {
            FUNC_0(VAR_4);
            FUNC_3(VAR_1, VAR_2);
            return 0;
        }
    }
    FUNC_0(VAR_3->pmeth_engine);
    VAR_3->pmeth_engine = VAR_4;
    return 1;
}
