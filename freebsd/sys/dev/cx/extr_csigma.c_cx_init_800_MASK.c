
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ port_t ;
struct TYPE_5__ {int num; long oscfreq; int type; TYPE_2__* board; void* port; } ;
typedef TYPE_1__ cx_chan_t ;
struct TYPE_6__ {int num; int irq; int dma; int bcr0; int bcr0b; scalar_t__ nsync; scalar_t__ nuniv; scalar_t__ nasync; TYPE_1__* chan; int name; scalar_t__ bcr1b; scalar_t__ bcr1; int type; int opt; scalar_t__ port; } ;
typedef TYPE_2__ cx_board_t ;


 int VAR_0 ;
 void* FUNC_0 (scalar_t__) ;
 void* FUNC_1 (scalar_t__) ;
 void* FUNC_2 (scalar_t__) ;
 int VAR_1 ;

 int VAR_2 ;







 int VAR_3 ;
 scalar_t__ FUNC_3 (void*) ;
 int FUNC_4 (TYPE_2__*) ;
 int* VAR_4 ;
 int* VAR_5 ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,char*) ;

void FUNC_7 (cx_board_t *VAR_6, int VAR_7, port_t VAR_8, int VAR_9, int VAR_10,
 int VAR_11)
{
 cx_chan_t *VAR_12;
 int VAR_13;


 VAR_6->port = VAR_8;
 VAR_6->num = VAR_7;
 VAR_6->irq = VAR_9;
 VAR_6->dma = VAR_10;
 VAR_6->opt = VAR_3;
 VAR_6->type = VAR_0;


 VAR_6->bcr0 = VAR_6->bcr0b = VAR_4[VAR_6->dma] | VAR_5[VAR_6->irq];


 VAR_6->bcr1 = VAR_6->bcr1b = 0;

 FUNC_6 (VAR_6->name, "800");
 if (VAR_11)
  FUNC_5 (VAR_6->name, "/800");


 for (VAR_13=0; VAR_13<4; ++VAR_13) {
  VAR_6->chan[VAR_13+0].port = FUNC_0(VAR_8);
  VAR_6->chan[VAR_13+4].port = FUNC_3 (FUNC_2(VAR_8)) ?
   FUNC_2(VAR_8) : FUNC_1(VAR_8);
  VAR_6->chan[VAR_13+8].port = FUNC_0(VAR_8+0x10);
  VAR_6->chan[VAR_13+12].port = FUNC_1(VAR_8+0x10);
 }
 for (VAR_12=VAR_6->chan; VAR_12<VAR_6->chan+VAR_1; ++VAR_12) {
  VAR_12->board = VAR_6;
  VAR_12->num = VAR_12 - VAR_6->chan;
  VAR_12->oscfreq = 33000000L;
  VAR_12->type = (VAR_12->num < 8 || VAR_11) ? 130 : VAR_2;
 }

 VAR_6->nuniv = VAR_6->nsync = VAR_6->nasync = 0;
 for (VAR_12=VAR_6->chan; VAR_12<VAR_6->chan+VAR_1; ++VAR_12)
  switch (VAR_12->type) {
  case 135: ++VAR_6->nasync; break;
  case 131:
  case 130:
  case 129:
  case 128: ++VAR_6->nuniv; break;
  case 134:
  case 132:
  case 133: ++VAR_6->nsync; break;
  }

 FUNC_4 (VAR_6);
}
