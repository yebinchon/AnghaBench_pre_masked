
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ consume; scalar_t__ clearto; scalar_t__ top; scalar_t__ bottom; scalar_t__ supply; scalar_t__ consumetime; scalar_t__ mark; } ;
typedef TYPE_1__ Ring ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,scalar_t__,int) ;
 int FUNC_2 (TYPE_1__*,scalar_t__,scalar_t__) ;

void
FUNC_3(Ring *VAR_1, int VAR_2)
{
    if (VAR_2 == 0)
 return;

    if (VAR_1->mark &&
  (FUNC_2(VAR_1, VAR_1->mark, VAR_1->consume) < VAR_2)) {
 VAR_1->mark = 0;
    }
    VAR_1->consume = FUNC_1(VAR_1, VAR_1->consume, VAR_2);
    VAR_1->consumetime = ++VAR_0;



    if (FUNC_0(VAR_1)) {
 VAR_1->consume = VAR_1->supply = VAR_1->bottom;
    }
}
