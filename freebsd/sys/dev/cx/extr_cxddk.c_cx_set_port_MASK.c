
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int num; TYPE_1__* board; int type; } ;
typedef TYPE_2__ cx_chan_t ;
struct TYPE_4__ {scalar_t__ type; int if0type; int if8type; int bcr0b; int port; int bcr0; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;

void FUNC_2 (cx_chan_t *VAR_5, int VAR_6)
{
 if (VAR_5->board->type == VAR_2) {
  switch (VAR_5->num) {
  case 0:
   if ((VAR_5->board->if0type != 0) == (VAR_6 != 0))
    return;
   VAR_5->board->if0type = VAR_6;
   VAR_5->board->bcr0 &= ~VAR_1;
   if (VAR_5->board->if0type &&
       (VAR_5->type==VAR_3 || VAR_5->type==VAR_4))
    VAR_5->board->bcr0 |= VAR_0;
   FUNC_1 (FUNC_0(VAR_5->board->port), VAR_5->board->bcr0);
   break;
  case 8:
   if ((VAR_5->board->if8type != 0) == (VAR_6 != 0))
    return;
   VAR_5->board->if8type = VAR_6;
   VAR_5->board->bcr0b &= ~VAR_1;
   if (VAR_5->board->if8type &&
       (VAR_5->type==VAR_3 || VAR_5->type==VAR_4))
    VAR_5->board->bcr0b |= VAR_0;
   FUNC_1 (FUNC_0(VAR_5->board->port+0x10), VAR_5->board->bcr0b);
   break;
  }
 }
}
