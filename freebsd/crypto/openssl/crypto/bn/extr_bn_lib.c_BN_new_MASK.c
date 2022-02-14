
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; } ;
typedef TYPE_1__ BIGNUM ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;

BIGNUM *FUNC_3(void)
{
    BIGNUM *VAR_3;

    if ((VAR_3 = FUNC_1(sizeof(*VAR_3))) == ((void*)0)) {
        FUNC_0(VAR_1, VAR_2);
        return ((void*)0);
    }
    VAR_3->flags = VAR_0;
    FUNC_2(VAR_3);
    return VAR_3;
}
