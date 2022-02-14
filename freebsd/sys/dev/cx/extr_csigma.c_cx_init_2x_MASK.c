
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ port_t ;
struct TYPE_6__ {int num; long oscfreq; void* type; TYPE_2__* board; void* port; } ;
typedef TYPE_1__ cx_chan_t ;
struct TYPE_8__ {scalar_t__ fast; } ;
struct TYPE_7__ {int num; int irq; int dma; scalar_t__ type; int bcr0; int nuniv; int name; TYPE_1__* chan; scalar_t__ nasync; scalar_t__ nsync; scalar_t__ bcr1; TYPE_5__ opt; scalar_t__ port; } ;
typedef TYPE_2__ cx_board_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (scalar_t__) ;
 void* FUNC_1 (scalar_t__) ;
 int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 TYPE_5__ VAR_8 ;
 int FUNC_2 (TYPE_2__*) ;
 int* VAR_9 ;
 int* VAR_10 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*) ;

void FUNC_5 (cx_board_t *VAR_11, int VAR_12, port_t VAR_13, int VAR_14, int VAR_15,
 int VAR_16, int VAR_17)
{
 cx_chan_t *VAR_18;
 int VAR_19;


 VAR_11->port = VAR_13;
 VAR_11->num = VAR_12;
 VAR_11->irq = VAR_14;
 VAR_11->dma = VAR_15;
 VAR_11->opt = VAR_8;

 VAR_11->type = VAR_3;


 VAR_11->bcr0 = VAR_1 | VAR_9[VAR_11->dma] | VAR_10[VAR_11->irq];
 if (VAR_11->type == VAR_3 && VAR_11->opt.fast)
  VAR_11->bcr0 |= VAR_0;


 VAR_11->bcr1 = 0;


 for (VAR_19=0; VAR_19<4; ++VAR_19) {
  VAR_11->chan[VAR_19+0].port = FUNC_0(VAR_13);
  VAR_11->chan[VAR_19+4].port = FUNC_1(VAR_13);
  VAR_11->chan[VAR_19+8].port = FUNC_0(VAR_13+0x10);
  VAR_11->chan[VAR_19+12].port = FUNC_1(VAR_13+0x10);
 }
 for (VAR_18=VAR_11->chan; VAR_18<VAR_11->chan+VAR_5; ++VAR_18) {
  VAR_18->board = VAR_11;
  VAR_18->num = VAR_18 - VAR_11->chan;
  VAR_18->type = VAR_6;
  VAR_18->oscfreq = (VAR_17 & VAR_2) ? 33000000L : 20000000L;
 }


 FUNC_4 (VAR_11->name, "22");
 VAR_11->chan[0].type = VAR_7;
 VAR_11->chan[1].type = VAR_7;
 VAR_11->nsync = VAR_11->nasync = 0;
 VAR_11->nuniv = 2;
 if (VAR_16 == VAR_4) {
  FUNC_4 (VAR_11->name, "24");
  VAR_11->chan[2].type = VAR_7;
  VAR_11->chan[3].type = VAR_7;
  VAR_11->nuniv += 2;
 }
 FUNC_3 (VAR_11->name, (VAR_17 & VAR_2) ? "c" : "a");
 FUNC_2 (VAR_11);
}
