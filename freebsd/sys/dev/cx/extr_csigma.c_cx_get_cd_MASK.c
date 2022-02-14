
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ mode; int num; TYPE_1__* board; int type; int port; } ;
typedef TYPE_2__ cx_chan_t ;
struct TYPE_4__ {scalar_t__ type; int port; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;

int FUNC_6 (cx_chan_t *VAR_5)
{
 unsigned char VAR_6;

 if (VAR_5->board->type == VAR_0 ||
     VAR_5->board->type == VAR_1 ||
     VAR_5->mode == VAR_3) {
  FUNC_5 (FUNC_1(VAR_5->port), VAR_5->num & 3);
  return (FUNC_3 (FUNC_2(VAR_5->port)) & VAR_2 ? 1 : 0);
 }




 switch (VAR_5->num) {
 default:
  return (1);

 case 1: case 2: case 3:
  if (VAR_5->type == VAR_4)
   return (1);
 case 0:
  VAR_6 = FUNC_4 (FUNC_0(VAR_5->board->port)) >> 8;
  break;

 case 9: case 10: case 11:
  if (VAR_5->type == VAR_4)
   return (1);
 case 8:
  VAR_6 = FUNC_4 (FUNC_0(VAR_5->board->port+0x10)) >> 8;
  break;
 }
 return (~VAR_6 >> 4 >> (VAR_5->num & 3) & 1);
}
