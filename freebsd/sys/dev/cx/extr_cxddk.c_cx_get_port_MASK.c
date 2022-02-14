
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int num; int type; TYPE_1__* board; } ;
typedef TYPE_2__ cx_chan_t ;
struct TYPE_4__ {scalar_t__ type; int if0type; int if8type; } ;


 scalar_t__ VAR_0 ;



int FUNC_0 (cx_chan_t *VAR_1)
{
 int VAR_2;

 if (VAR_1->board->type == VAR_0) {
  switch (VAR_1->num) {
  case 0:
   VAR_2 = VAR_1->board->if0type; break;
  case 8:
   VAR_2 = VAR_1->board->if8type; break;
  default:
   return -1;
  }

  if (VAR_2)
   switch (VAR_1->type) {
   case 128: return 1;
   case 129: return 2;
   default: return -1;
   }
  else
   return 0;
 } else
  return -1;
}
