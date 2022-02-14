
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int orphan_cmds; } ;
typedef TYPE_2__ config_tree ;
struct TYPE_6__ {double d; } ;
struct TYPE_8__ {int attr; TYPE_1__ value; struct TYPE_8__* link; } ;
typedef TYPE_3__ attr_val ;


 TYPE_3__* FUNC_0 (int ) ;
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
 int VAR_14 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ,char*,int,int,...) ;
 int FUNC_3 (int,int ,double,int *) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;

__attribute__((used)) static void
FUNC_4(
 config_tree *VAR_18
 )
{
 attr_val * VAR_19;
 int VAR_20;
 double VAR_21;
 int VAR_22 = VAR_15;
 int VAR_23 = VAR_16;
 int VAR_24 = VAR_17;


 VAR_19 = FUNC_0(VAR_18->orphan_cmds);
 for (; VAR_19 != ((void*)0); VAR_19 = VAR_19->link) {




  switch(VAR_19->attr) {
  default:
   break;

  case 139:
   VAR_21 = VAR_19->value.d;
   if (VAR_21 > 4) {
    FUNC_2(VAR_1,
     "Using maximum bcpollbstep ceiling %d, %d requested",
     4, (int)VAR_21);
    VAR_19->value.d = 4;
   } else if (VAR_21 < 0) {
    FUNC_2(VAR_1,
     "Using minimum bcpollbstep floor %d, %d requested",
     0, (int)VAR_21);
    VAR_19->value.d = 0;
   }
   break;

  case 137:
   VAR_21 = VAR_19->value.d;
   if (VAR_21 > VAR_14 - 1) {
    FUNC_2(VAR_1,
     "Using maximum tos ceiling %d, %d requested",
     VAR_14 - 1, (int)VAR_21);
    VAR_19->value.d = VAR_14 - 1;
   } else if (VAR_21 < 1) {
    FUNC_2(VAR_1,
     "Using minimum tos floor %d, %d requested",
     1, (int)VAR_21);
    VAR_19->value.d = 1;
   }
   break;

  case 132:
   VAR_21 = VAR_19->value.d;
   if ((int)VAR_19->value.d < 1)
    VAR_19->value.d = 1;
   VAR_23 = (int)VAR_19->value.d;
   break;

  case 134:
   VAR_21 = VAR_19->value.d;
   if ((int)VAR_19->value.d < 1)
    VAR_19->value.d = 1;
   VAR_22 = (int)VAR_19->value.d;
   break;

  case 130:
   VAR_21 = VAR_19->value.d;
   if ((int)VAR_19->value.d < 0)
    VAR_19->value.d = 0;
   VAR_24 = (int)VAR_19->value.d;
   break;
  }
 }

 if ( ! (VAR_24 < VAR_23 && VAR_23 <= VAR_22)) {
  FUNC_2(VAR_0,
   "tos error: must have minsane (%d) < minclock (%d) <= maxclock (%d)"
   " - daemon will not operate properly!",
   VAR_24, VAR_23, VAR_22);
 }


 VAR_19 = FUNC_0(VAR_18->orphan_cmds);
 for (; VAR_19 != ((void*)0); VAR_19 = VAR_19->link) {
  switch(VAR_19->attr) {

  default:
   FUNC_1("config-tos: attr-token=%d", VAR_19->attr);

  case 139:
   VAR_20 = VAR_2;
   break;

  case 137:
   VAR_20 = VAR_4;
   break;

  case 135:
   VAR_20 = VAR_6;
   break;

  case 136:
   VAR_20 = VAR_5;
   break;

  case 129:
   VAR_20 = VAR_12;
   break;

  case 128:
   VAR_20 = VAR_13;
   break;

  case 131:
   VAR_20 = VAR_10;
   break;

  case 133:
   VAR_20 = VAR_8;
   break;

  case 132:
   VAR_20 = VAR_9;
   break;

  case 134:
   VAR_20 = VAR_7;
   break;

  case 130:
   VAR_20 = VAR_11;
   break;

  case 138:
   VAR_20 = VAR_3;
   break;

  case 140:
   continue;
  }
  FUNC_3(VAR_20, 0, VAR_19->value.d, ((void*)0));
 }
}
