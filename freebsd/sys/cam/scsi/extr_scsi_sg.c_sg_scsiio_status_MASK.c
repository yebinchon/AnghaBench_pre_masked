
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_short ;
struct TYPE_2__ {int status; } ;
struct ccb_scsiio {TYPE_1__ ccb_h; } ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
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

__attribute__((used)) static void
FUNC_0(struct ccb_scsiio *VAR_14, u_short *VAR_15, u_short *VAR_16)
{
 int VAR_17;

 VAR_17 = VAR_14->ccb_h.status;

 switch (VAR_17 & VAR_1) {
 case 135:
  *VAR_15 = VAR_7;
  *VAR_16 = 0;
  break;
 case 134:
  *VAR_15 = VAR_5;
  *VAR_16 = 0;
  break;
 case 136:
  *VAR_15 = VAR_2;
  *VAR_16 = 0;
  break;
 case 133:
  *VAR_15 = VAR_5;
  *VAR_16 = VAR_12;
  break;
 case 137:
  *VAR_15 = VAR_3;
  *VAR_16 = 0;
  break;
 case 129:
  *VAR_15 = VAR_6;
  *VAR_16 = 0;
  break;
 case 138:
  *VAR_15 = VAR_10;
  *VAR_16 = 0;
  break;
 case 130:
  *VAR_15 = VAR_5;
  *VAR_16 = 0;
  break;
 case 131:
  *VAR_15 = VAR_9;
  *VAR_16 = 0;
  break;
 case 128:
  *VAR_15 = VAR_8;
  *VAR_16 = 0;
  break;
 case 132:
  *VAR_15 = VAR_4;
  *VAR_16 = 0;
  break;
 default:
  *VAR_15 = VAR_5;
  *VAR_16 = VAR_11;
 }

 if (VAR_17 & VAR_0)
  *VAR_16 = VAR_13;
}
