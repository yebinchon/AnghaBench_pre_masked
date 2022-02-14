
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {void* encod; } ;
struct TYPE_12__ {TYPE_3__ md2; } ;
struct TYPE_10__ {int rate; int cas; } ;
struct TYPE_9__ {scalar_t__ txs; } ;
struct TYPE_14__ {scalar_t__ mode; int baud; int type; int num; TYPE_7__* board; TYPE_4__ opt; TYPE_2__ gopt; TYPE_1__ hopt; } ;
typedef TYPE_6__ ct_chan_t ;
struct TYPE_13__ {long s1; long s0; int bcr2; int cfg; } ;
struct TYPE_15__ {TYPE_5__ opt; } ;
typedef TYPE_7__ ct_board_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;





void FUNC_0 (ct_chan_t *VAR_13)
{
 ct_board_t *VAR_14 = VAR_13->board;
 long VAR_15;
 int VAR_16;

 if (VAR_13->hopt.txs == VAR_6) {

  if (VAR_13->mode != VAR_9)
   VAR_13->baud = 0;
 } else if (VAR_13->baud == 0) {

  if (VAR_13->mode == VAR_9)
   VAR_13->baud = 9600;
  else if (VAR_13->mode == VAR_12)
   VAR_13->baud = 64000;
 }
 switch (VAR_13->type) {
 case 130:
  if (VAR_14->opt.cfg == VAR_4)
   break;

 case 131:
  VAR_13->mode = VAR_10;
  VAR_13->hopt.txs = VAR_6;


  if (VAR_13->num) {
   VAR_15 = VAR_14->opt.s1;
   if (VAR_14->opt.cfg == VAR_5)
    VAR_15 &=~ VAR_14->opt.s0;
  } else
   VAR_15 = VAR_14->opt.s0;

  if (VAR_13->gopt.cas)
   VAR_15 &=~ (1L << 16);

  VAR_13->baud = 0;
  for (VAR_16=0; VAR_16<32; ++VAR_16)
   if ((VAR_15 >> VAR_16) & 1)
    VAR_13->baud += 64000;
  VAR_13->gopt.rate = VAR_13->baud / 1000;


  VAR_13->opt.md2.encod = VAR_7;
  VAR_13->board->opt.bcr2 &= VAR_13->num ?
   ~(VAR_3 | VAR_1) :
   ~(VAR_2 | VAR_0);
  break;

 case 128:
  if (VAR_14->opt.cfg == VAR_4)
   break;

 case 129:
  VAR_13->mode = VAR_11;
  VAR_13->hopt.txs = VAR_6;
  VAR_13->baud = VAR_13->gopt.rate * 1000L;


  if (VAR_13->opt.md2.encod != VAR_7 &&
      VAR_13->opt.md2.encod != VAR_8)
   VAR_13->opt.md2.encod = VAR_7;
  VAR_13->board->opt.bcr2 &= VAR_13->num ?
   ~(VAR_3 | VAR_1) :
   ~(VAR_2 | VAR_0);
  break;
 }
}
