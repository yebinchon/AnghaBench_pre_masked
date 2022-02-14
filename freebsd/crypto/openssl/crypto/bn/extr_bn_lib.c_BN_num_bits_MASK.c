
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int top; int flags; int * d; } ;
typedef TYPE_1__ BIGNUM ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__ const*) ;
 int FUNC_3 (TYPE_1__ const*) ;

int FUNC_4(const BIGNUM *VAR_2)
{
    int VAR_3 = VAR_2->top - 1;
    FUNC_2(VAR_2);

    if (VAR_2->flags & VAR_1) {
        return FUNC_3(VAR_2);
    }

    if (FUNC_0(VAR_2))
        return 0;

    return ((VAR_3 * VAR_0) + FUNC_1(VAR_2->d[VAR_3]));
}
