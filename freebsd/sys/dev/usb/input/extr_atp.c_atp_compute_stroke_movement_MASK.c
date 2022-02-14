
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int boolean_t ;
struct TYPE_5__ {int movement_dx; int instantaneous_dx; int movement_dy; int instantaneous_dy; int cum_movement_x; int cum_movement_y; scalar_t__ pending_dy; scalar_t__ pending_dx; } ;
typedef TYPE_1__ atp_stroke_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static boolean_t
FUNC_3(atp_stroke_t *VAR_2)
{






 if (FUNC_1(VAR_2))
  FUNC_2(VAR_2);
 else {

  VAR_2->pending_dx = 0;
  VAR_2->pending_dy = 0;
 }


 VAR_2->movement_dx = (VAR_2->instantaneous_dx) /
     (int)VAR_1;
 VAR_2->movement_dy = (VAR_2->instantaneous_dy) /
     (int)VAR_1;

 if ((FUNC_0(VAR_2->instantaneous_dx) >= VAR_0) ||
     (FUNC_0(VAR_2->instantaneous_dy) >= VAR_0)) {
  VAR_2->movement_dx <<= 1;
  VAR_2->movement_dy <<= 1;
 }

 VAR_2->cum_movement_x += VAR_2->movement_dx;
 VAR_2->cum_movement_y += VAR_2->movement_dy;

 return ((VAR_2->movement_dx != 0) || (VAR_2->movement_dy != 0));
}
