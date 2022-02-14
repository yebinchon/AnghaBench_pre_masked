
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int boolean_t ;
struct TYPE_3__ {int cum_movement_y; int cum_movement_x; } ;
typedef TYPE_1__ atp_stroke_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;

__attribute__((used)) static boolean_t
FUNC_1(const atp_stroke_t *VAR_1)
{
 if (FUNC_0(VAR_1->cum_movement_y) < VAR_0)
  return (0);
 if (VAR_1->cum_movement_x == 0)
  return (1);
 return (FUNC_0(VAR_1->cum_movement_y / VAR_1->cum_movement_x) >= 4);
}
