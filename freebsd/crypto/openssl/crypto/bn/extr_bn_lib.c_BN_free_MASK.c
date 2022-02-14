
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int flags; } ;
typedef TYPE_1__ BIGNUM ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;

void FUNC_3(BIGNUM *VAR_2)
{
    if (VAR_2 == ((void*)0))
        return;
    if (!FUNC_0(VAR_2, VAR_1))
        FUNC_2(VAR_2, 0);
    if (VAR_2->flags & VAR_0)
        FUNC_1(VAR_2);
}
