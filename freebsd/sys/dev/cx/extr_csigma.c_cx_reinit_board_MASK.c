
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int type; int hopt; int aopt; int opt; int txbaud; int rxbaud; void* mode; } ;
typedef TYPE_1__ cx_chan_t ;
struct TYPE_7__ {scalar_t__ fast; } ;
struct TYPE_6__ {scalar_t__ type; TYPE_1__* chan; int if8type; int if0type; int bcr0; TYPE_4__ opt; } ;
typedef TYPE_2__ cx_board_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 TYPE_4__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

void FUNC_0 (cx_board_t *VAR_13)
{
 cx_chan_t *VAR_14;

 VAR_13->opt = VAR_4;
 if (VAR_13->type == VAR_1) {
  VAR_13->bcr0 &= ~VAR_0;
  if (VAR_13->opt.fast)
   VAR_13->bcr0 |= VAR_0;
 } else
  VAR_13->if0type = VAR_13->if8type = VAR_6;
 for (VAR_14=VAR_13->chan; VAR_14<VAR_13->chan+VAR_3; ++VAR_14) {
  switch (VAR_14->type) {
  default:
  case 135:
   continue;
  case 131:
  case 130:
  case 129:
  case 128:
   VAR_14->mode = (VAR_10 == VAR_2) ?
    VAR_2 : VAR_8;
   break;
  case 134:
  case 132:
  case 133:
   VAR_14->mode = VAR_8;
   break;
  case 136:
   VAR_14->mode = VAR_2;
   break;
  }
  VAR_14->rxbaud = VAR_7;
  VAR_14->txbaud = VAR_9;
  VAR_14->opt = VAR_5;
  VAR_14->aopt = VAR_11;
  VAR_14->hopt = VAR_12;
 }
}
