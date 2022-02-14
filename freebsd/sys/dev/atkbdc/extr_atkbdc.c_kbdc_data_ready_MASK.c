
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int aux; int kbd; } ;
typedef int KBDC ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;

int
FUNC_3(KBDC VAR_1)
{
    return (FUNC_0(&FUNC_1(VAR_1)->kbd) || FUNC_0(&FUNC_1(VAR_1)->aux)
 || (FUNC_2(FUNC_1(VAR_1)) & VAR_0));
}
