
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ port_t ;
struct TYPE_5__ {long oscfreq; int num; int type; TYPE_2__* board; void* port; } ;
typedef TYPE_1__ cx_chan_t ;
struct TYPE_6__ {int num; int irq; int dma; int bcr0; int bcr0b; scalar_t__ nsync; scalar_t__ nuniv; scalar_t__ nasync; TYPE_1__* chan; int name; scalar_t__ bcr1b; scalar_t__ bcr1; int if8type; int if0type; int type; int opt; scalar_t__ port; } ;
typedef TYPE_2__ cx_board_t ;


 int VAR_0 ;


 int VAR_1 ;
 void* FUNC_0 (scalar_t__) ;
 void* FUNC_1 (scalar_t__) ;
 void* FUNC_2 (scalar_t__) ;
 int VAR_2 ;

 int VAR_3 ;







 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (void*) ;
 int FUNC_4 (TYPE_2__*) ;
 int* VAR_6 ;
 int* VAR_7 ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,char*) ;

void FUNC_7 (cx_board_t *VAR_8, int VAR_9, port_t VAR_10, int VAR_11, int VAR_12,
 int VAR_13, int VAR_14, int VAR_15, int VAR_16, int VAR_17, int VAR_18, int VAR_19)
{
 cx_chan_t *VAR_20;
 char *VAR_21;
 int VAR_22;


 VAR_8->port = VAR_10;
 VAR_8->num = VAR_9;
 VAR_8->irq = VAR_11;
 VAR_8->dma = VAR_12;
 VAR_8->opt = VAR_4;

 VAR_8->type = VAR_1;
 VAR_8->if0type = VAR_8->if8type = VAR_5;


 VAR_8->bcr0 = VAR_8->bcr0b = VAR_0 | VAR_6[VAR_8->dma] | VAR_7[VAR_8->irq];


 VAR_8->bcr1 = VAR_8->bcr1b = 0;




 FUNC_6 (VAR_8->name, VAR_16 ? "m" : "");
 switch (VAR_14) {
 default: VAR_21 = ""; break;
 case 150: VAR_21 = "100"; break;
 case 149: VAR_21 = "400"; break;
 case 142: VAR_21 = "500"; break;
 case 145: VAR_21 = "410"; break;
 case 138: VAR_21 = "810"; break;
 case 144: VAR_21 = "410s"; break;
 case 137: VAR_21 = "810s"; break;
 case 143: VAR_21 = "440"; break;
 case 136: VAR_21 = "840"; break;
 case 148: VAR_21 = "401"; break;
 case 140: VAR_21 = "801"; break;
 case 147: VAR_21 = "401s"; break;
 case 139: VAR_21 = "801s"; break;
 case 146: VAR_21 = "404"; break;
 case 141: VAR_21 = "703"; break;
 }
 FUNC_5 (VAR_8->name, VAR_21);

 switch (VAR_15) {
 default:
 case 151:
  VAR_8->chan[0].oscfreq = VAR_8->chan[1].oscfreq =
  VAR_8->chan[2].oscfreq = VAR_8->chan[3].oscfreq =
  VAR_8->chan[4].oscfreq = VAR_8->chan[5].oscfreq =
  VAR_8->chan[6].oscfreq = VAR_8->chan[7].oscfreq =
   VAR_16 ? 33000000L : 20000000L;
  FUNC_5 (VAR_8->name, "a");
  break;
 case 152:
  VAR_8->chan[0].oscfreq = VAR_8->chan[1].oscfreq =
  VAR_8->chan[2].oscfreq = VAR_8->chan[3].oscfreq =
  VAR_8->chan[4].oscfreq = VAR_8->chan[5].oscfreq =
  VAR_8->chan[6].oscfreq = VAR_8->chan[7].oscfreq =
   VAR_16 ? 20000000L : 18432000L;
  FUNC_5 (VAR_8->name, "b");
  break;
 }



 if (VAR_13) {

  FUNC_5 (VAR_8->name, VAR_19 ? "/m" : "/");
  switch (VAR_17) {
  default: VAR_21 = ""; break;
  case 150: VAR_21 = "100"; break;
  case 149: VAR_21 = "400"; break;
  case 142: VAR_21 = "500"; break;
  case 145: VAR_21 = "410"; break;
  case 138: VAR_21 = "810"; break;
  case 144: VAR_21 = "410s"; break;
  case 137: VAR_21 = "810s"; break;
  case 143: VAR_21 = "440"; break;
  case 136: VAR_21 = "840"; break;
  case 148: VAR_21 = "401"; break;
  case 140: VAR_21 = "801"; break;
  case 147: VAR_21 = "401s"; break;
  case 139: VAR_21 = "801s"; break;
  case 146: VAR_21 = "404"; break;
  case 141: VAR_21 = "703"; break;
  }
  FUNC_5 (VAR_8->name, VAR_21);

  switch (VAR_18) {
  default:
  case 151:
   VAR_8->chan[8].oscfreq = VAR_8->chan[9].oscfreq =
   VAR_8->chan[10].oscfreq = VAR_8->chan[11].oscfreq =
   VAR_8->chan[12].oscfreq = VAR_8->chan[13].oscfreq =
   VAR_8->chan[14].oscfreq = VAR_8->chan[15].oscfreq =
    VAR_19 ? 33000000L : 20000000L;
   FUNC_5 (VAR_8->name, "a");
   break;
  case 152:
   VAR_8->chan[8].oscfreq = VAR_8->chan[9].oscfreq =
   VAR_8->chan[10].oscfreq = VAR_8->chan[11].oscfreq =
   VAR_8->chan[12].oscfreq = VAR_8->chan[13].oscfreq =
   VAR_8->chan[14].oscfreq = VAR_8->chan[15].oscfreq =
    VAR_19 ? 20000000L : 18432000L;
   FUNC_5 (VAR_8->name, "b");
   break;
  }
 }


 for (VAR_22=0; VAR_22<4; ++VAR_22) {
  VAR_8->chan[VAR_22+0].port = FUNC_0(VAR_10);
  VAR_8->chan[VAR_22+4].port = FUNC_3 (FUNC_2(VAR_10)) ?
   FUNC_2(VAR_10) : FUNC_1(VAR_10);
  VAR_8->chan[VAR_22+8].port = FUNC_0(VAR_10+0x10);
  VAR_8->chan[VAR_22+12].port = FUNC_1(VAR_10+0x10);
 }
 for (VAR_20=VAR_8->chan; VAR_20<VAR_8->chan+VAR_2; ++VAR_20) {
  VAR_20->board = VAR_8;
  VAR_20->num = VAR_20 - VAR_8->chan;
  VAR_20->type = VAR_3;
 }



 switch (VAR_14) {
 case 149:
  for (VAR_22=4; VAR_22<8; ++VAR_22)
   VAR_8->chan[VAR_22].type = 130;
  break;
 case 150:
  VAR_8->chan[0].type = 130;
  break;
 case 142:
  VAR_8->chan[0].type = 130;
  for (VAR_22=4; VAR_22<8; ++VAR_22)
   VAR_8->chan[VAR_22].type = 130;
  break;
 case 145:
  VAR_8->chan[0].type = 128;
  for (VAR_22=1; VAR_22<4; ++VAR_22)
   VAR_8->chan[VAR_22].type = 130;
  break;
 case 138:
  VAR_8->chan[0].type = 128;
  for (VAR_22=1; VAR_22<8; ++VAR_22)
   VAR_8->chan[VAR_22].type = 130;
  break;
 case 144:
  VAR_8->chan[0].type = 128;
  for (VAR_22=1; VAR_22<4; ++VAR_22)
   VAR_8->chan[VAR_22].type = 134;
  break;
 case 137:
  VAR_8->chan[0].type = 128;
  for (VAR_22=1; VAR_22<4; ++VAR_22)
   VAR_8->chan[VAR_22].type = 134;
  for (VAR_22=4; VAR_22<8; ++VAR_22)
   VAR_8->chan[VAR_22].type = 130;
  break;
 case 143:
  VAR_8->chan[0].type = 128;
  for (VAR_22=1; VAR_22<4; ++VAR_22)
   VAR_8->chan[VAR_22].type = 132;
  break;
 case 136:
  VAR_8->chan[0].type = 128;
  for (VAR_22=1; VAR_22<4; ++VAR_22)
   VAR_8->chan[VAR_22].type = 132;
  for (VAR_22=4; VAR_22<8; ++VAR_22)
   VAR_8->chan[VAR_22].type = 130;
  break;
 case 148:
  VAR_8->chan[0].type = 129;
  for (VAR_22=1; VAR_22<4; ++VAR_22)
   VAR_8->chan[VAR_22].type = 130;
  break;
 case 140:
  VAR_8->chan[0].type = 129;
  for (VAR_22=1; VAR_22<8; ++VAR_22)
   VAR_8->chan[VAR_22].type = 130;
  break;
 case 147:
  VAR_8->chan[0].type = 129;
  for (VAR_22=1; VAR_22<4; ++VAR_22)
   VAR_8->chan[VAR_22].type = 134;
  break;
 case 139:
  VAR_8->chan[0].type = 129;
  for (VAR_22=1; VAR_22<4; ++VAR_22)
   VAR_8->chan[VAR_22].type = 134;
  for (VAR_22=4; VAR_22<8; ++VAR_22)
   VAR_8->chan[VAR_22].type = 130;
  break;
 case 146:
  VAR_8->chan[0].type = 129;
  for (VAR_22=1; VAR_22<4; ++VAR_22)
   VAR_8->chan[VAR_22].type = 133;
  break;
 case 141:
  VAR_8->chan[0].type = 129;
  for (VAR_22=1; VAR_22<3; ++VAR_22)
   VAR_8->chan[VAR_22].type = 133;
  for (VAR_22=4; VAR_22<8; ++VAR_22)
   VAR_8->chan[VAR_22].type = 130;
  break;
 }



 if (VAR_13) {
  switch (VAR_17) {
  case 149:
   break;
  case 150:
   VAR_8->chan[8].type = 130;
   break;
  case 142:
   VAR_8->chan[8].type = 130;
   for (VAR_22=12; VAR_22<16; ++VAR_22)
    VAR_8->chan[VAR_22].type = 130;
   break;
  case 145:
   VAR_8->chan[8].type = 128;
   for (VAR_22=9; VAR_22<12; ++VAR_22)
    VAR_8->chan[VAR_22].type = 130;
   break;
  case 138:
   VAR_8->chan[8].type = 128;
   for (VAR_22=9; VAR_22<16; ++VAR_22)
    VAR_8->chan[VAR_22].type = 130;
   break;
  case 144:
   VAR_8->chan[8].type = 128;
   for (VAR_22=9; VAR_22<12; ++VAR_22)
    VAR_8->chan[VAR_22].type = 134;
   break;
  case 137:
   VAR_8->chan[8].type = 128;
   for (VAR_22=9; VAR_22<12; ++VAR_22)
    VAR_8->chan[VAR_22].type = 134;
   for (VAR_22=12; VAR_22<16; ++VAR_22)
    VAR_8->chan[VAR_22].type = 130;
   break;
  case 143:
   VAR_8->chan[8].type = 128;
   for (VAR_22=9; VAR_22<12; ++VAR_22)
    VAR_8->chan[VAR_22].type = 132;
   break;
  case 136:
   VAR_8->chan[8].type = 128;
   for (VAR_22=9; VAR_22<12; ++VAR_22)
    VAR_8->chan[VAR_22].type = 132;
   for (VAR_22=12; VAR_22<16; ++VAR_22)
    VAR_8->chan[VAR_22].type = 130;
   break;
  case 148:
   VAR_8->chan[8].type = 129;
   for (VAR_22=9; VAR_22<12; ++VAR_22)
    VAR_8->chan[VAR_22].type = 130;
   break;
  case 140:
   VAR_8->chan[8].type = 129;
   for (VAR_22=9; VAR_22<16; ++VAR_22)
    VAR_8->chan[VAR_22].type = 130;
   break;
  case 147:
   VAR_8->chan[8].type = 129;
   for (VAR_22=9; VAR_22<12; ++VAR_22)
    VAR_8->chan[VAR_22].type = 130;
   break;
  case 139:
   VAR_8->chan[8].type = 129;
   for (VAR_22=9; VAR_22<12; ++VAR_22)
    VAR_8->chan[VAR_22].type = 134;
   for (VAR_22=12; VAR_22<16; ++VAR_22)
    VAR_8->chan[VAR_22].type = 130;
   break;
  case 146:
   VAR_8->chan[8].type = 129;
   for (VAR_22=9; VAR_22<12; ++VAR_22)
    VAR_8->chan[VAR_22].type = 133;
   break;
  case 141:
   VAR_8->chan[8].type = 129;
   for (VAR_22=9; VAR_22<11; ++VAR_22)
    VAR_8->chan[VAR_22].type = 133;
   for (VAR_22=12; VAR_22<16; ++VAR_22)
    VAR_8->chan[VAR_22].type = 130;
   break;
  }
 }

 VAR_8->nuniv = VAR_8->nsync = VAR_8->nasync = 0;
 for (VAR_20=VAR_8->chan; VAR_20<VAR_8->chan+VAR_2; ++VAR_20)
  switch (VAR_20->type) {
  case 135: ++VAR_8->nasync; break;
  case 131:
  case 130:
  case 129:
  case 128: ++VAR_8->nuniv; break;
  case 134:
  case 132:
  case 133: ++VAR_8->nsync; break;
  }

 FUNC_4 (VAR_8);
}
