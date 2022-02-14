
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ cfg; scalar_t__ clk1; scalar_t__ clk0; } ;
struct TYPE_9__ {int gmd0; int gmd1; int gmd2; int port; TYPE_4__* chan; TYPE_2__ opt; } ;
typedef TYPE_3__ ct_board_t ;
struct TYPE_7__ {int rate; scalar_t__ pce2; scalar_t__ pce; } ;
struct TYPE_10__ {int lx; TYPE_1__ gopt; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (int ,int) ;

void FUNC_8 (ct_board_t *VAR_15)
{
 VAR_15->gmd0 = VAR_7;
 if (VAR_15->chan[0].gopt.pce) {
  if (VAR_15->chan[0].gopt.pce2) VAR_15->gmd0 |= VAR_11;
  else VAR_15->gmd0 |= VAR_12;
 }
 if (VAR_15->opt.clk0)
  VAR_15->gmd0 |= VAR_13;

 VAR_15->gmd1 = 0;
 if (VAR_15->chan[1].gopt.pce) {
  if (VAR_15->chan[1].gopt.pce2) VAR_15->gmd1 |= VAR_11;
  else VAR_15->gmd1 |= VAR_12;
 }
 if (VAR_15->opt.clk1)
  VAR_15->gmd1 |= VAR_13;

 switch (VAR_15->chan[0].gopt.rate) {
 case 2048: VAR_15->gmd0 |= VAR_7; break;
 case 1024: VAR_15->gmd0 |= VAR_5; break;
 case 512: VAR_15->gmd0 |= VAR_9; break;
 case 256: VAR_15->gmd0 |= VAR_8; break;
 case 128: VAR_15->gmd0 |= VAR_6; break;
 case 64: VAR_15->gmd0 |= VAR_10; break;
 }
 switch (VAR_15->chan[1].gopt.rate) {
 case 2048: VAR_15->gmd1 |= VAR_7; break;
 case 1024: VAR_15->gmd1 |= VAR_5; break;
 case 512: VAR_15->gmd1 |= VAR_9; break;
 case 256: VAR_15->gmd1 |= VAR_8; break;

 case 128: VAR_15->gmd1 |= VAR_6; break;
 case 64: VAR_15->gmd1 |= VAR_10; break;
 }

 FUNC_7 (FUNC_2(VAR_15->port), VAR_15->gmd0);
 FUNC_7 (FUNC_3(VAR_15->port), VAR_15->gmd1 | VAR_1 | VAR_2);

 VAR_15->gmd2 &= VAR_3;
 if (VAR_15->opt.cfg == VAR_0) VAR_15->gmd2 |= VAR_4;
 FUNC_7 (FUNC_4(VAR_15->port), VAR_15->gmd2);


 if ((VAR_15->chan + 0)->lx & VAR_14) {
  FUNC_6 (VAR_15->chan + 0);
  FUNC_5 (VAR_15->chan + 0);
 } else {
  FUNC_6 (VAR_15->chan + 0);
 }
 if ((VAR_15->chan + 1)->lx & VAR_14) {
  FUNC_6 (VAR_15->chan + 1);
  FUNC_5 (VAR_15->chan + 1);
 } else {
  FUNC_6 (VAR_15->chan + 1);
 }


 FUNC_7 (FUNC_0(VAR_15->port), 0xff);
 FUNC_7 (FUNC_1(VAR_15->port), 0xff);
}
