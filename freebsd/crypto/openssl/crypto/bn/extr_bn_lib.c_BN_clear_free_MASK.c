
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * d; } ;
typedef TYPE_1__ BIGNUM ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int) ;

void FUNC_4(BIGNUM *VAR_2)
{
    if (VAR_2 == ((void*)0))
        return;
    if (VAR_2->d != ((void*)0) && !FUNC_0(VAR_2, VAR_1))
        FUNC_3(VAR_2, 1);
    if (FUNC_0(VAR_2, VAR_0)) {
        FUNC_1(VAR_2, sizeof(*VAR_2));
        FUNC_2(VAR_2);
    }
}
