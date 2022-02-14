
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int stack; int pool; } ;
typedef TYPE_1__ BN_CTX ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 TYPE_1__* FUNC_3 (int) ;

BN_CTX *FUNC_4(void)
{
    BN_CTX *VAR_2;

    if ((VAR_2 = FUNC_3(sizeof(*VAR_2))) == ((void*)0)) {
        FUNC_2(VAR_0, VAR_1);
        return ((void*)0);
    }

    FUNC_0(&VAR_2->pool);
    FUNC_1(&VAR_2->stack);
    return VAR_2;
}
