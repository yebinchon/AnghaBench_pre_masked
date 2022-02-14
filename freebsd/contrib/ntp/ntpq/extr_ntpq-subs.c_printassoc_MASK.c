
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
typedef scalar_t__ u_int ;
typedef int u_char ;
typedef int buf ;
struct TYPE_2__ {int status; int assid; } ;
typedef int FILE ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;




 int VAR_8 ;
 TYPE_1__* VAR_9 ;
 int FUNC_3 (int *,char*,...) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_4 (char*,int,char*,scalar_t__,int,int,char const*,char const*,char const*,char const*,char const*,int ) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void
FUNC_6(
 int VAR_12,
 FILE *VAR_13
 )
{
 register char *VAR_14;
 u_int VAR_15;
 u_char VAR_16;
 int VAR_17;
 u_long VAR_18;
 const char *VAR_19;
 const char *VAR_20;
 const char *VAR_21;
 const char *VAR_22 = "";
 const char *VAR_23;
 char VAR_24[128];

 if (VAR_10 == 0) {
  (void) FUNC_3(VAR_13, "No association ID's in list\n");
  return;
 }




 (void) FUNC_3(VAR_13,
      "ind assid status  conf reach auth condition  last_event cnt\n");
 (void) FUNC_3(VAR_13,
      "===========================================================\n");
 for (VAR_15 = 0; VAR_15 < VAR_10; VAR_15++) {
  VAR_16 = (u_char) FUNC_2(VAR_9[VAR_15].status);
  if (!VAR_12 && !(VAR_16 & (VAR_3|VAR_4)))
   continue;
  VAR_17 = FUNC_0(VAR_9[VAR_15].status);
  VAR_18 = FUNC_1(VAR_9[VAR_15].status);
  if (VAR_16 & VAR_3)
   VAR_19 = "yes";
  else
   VAR_19 = "no";
  if (VAR_16 & VAR_2) {
   VAR_20 = "none";
   if (VAR_16 & VAR_0)
    VAR_21 = "yes";
   else
    VAR_21 = "none";
  } else {
   if (VAR_16 & VAR_4)
    VAR_20 = "yes";
   else
    VAR_20 = "no";
   if (VAR_16 & VAR_0) {
    if (VAR_16 & VAR_1)
     VAR_21 = "ok ";
    else
     VAR_21 = "bad";
   } else {
    VAR_21 = "none";
   }
  }
  if (VAR_11 > VAR_5) {
   switch (VAR_16 & 0x7) {

   case 147:
    VAR_22 = "reject";
    break;

   case 146:
    VAR_22 = "falsetick";
    break;

   case 150:
    VAR_22 = "excess";
    break;

   case 145:
    VAR_22 = "outlier";
    break;

   case 144:
    VAR_22 = "candidate";
    break;

   case 149:
    VAR_22 = "backup";
    break;

   case 143:
    VAR_22 = "sys.peer";
    break;

   case 148:
    VAR_22 = "pps.peer";
    break;
   }
  } else {
   switch (VAR_16 & 0x3) {

   case 142:
    if (!(VAR_16 & VAR_7))
     VAR_22 = "insane";
    else if (!(VAR_16 & VAR_6))
     VAR_22 = "hi_disp";
    else
     VAR_22 = "";
    break;

   case 141:
    VAR_22 = "sel_cand";
    break;

   case 140:
    VAR_22 = "sync_cand";
    break;

   case 139:
    VAR_22 = "sys_peer";
    break;
   }
  }
  switch (VAR_8|VAR_17) {

  case 134:
   VAR_23 = "mobilize";
   break;

  case 136:
   VAR_23 = "demobilize";
   break;

  case 131:
   VAR_23 = "reachable";
   break;

  case 128:
   VAR_23 = "unreachable";
   break;

  case 129:
   VAR_23 = "restart";
   break;

  case 130:
   VAR_23 = "no_reply";
   break;

  case 132:
   VAR_23 = "rate_exceeded";
   break;

  case 135:
   VAR_23 = "access_denied";
   break;

  case 138:
   VAR_23 = "leap_armed";
   break;

  case 133:
   VAR_23 = "sys_peer";
   break;

  case 137:
   VAR_23 = "clock_alarm";
   break;

  default:
   VAR_23 = "";
   break;
  }
  FUNC_4(VAR_24, sizeof(VAR_24),
    "%3d %5u  %04x   %3.3s  %4s  %4.4s %9.9s %11s %2lu",
    VAR_15 + 1, VAR_9[VAR_15].assid,
    VAR_9[VAR_15].status, VAR_19, VAR_20, VAR_21,
    VAR_22, VAR_23, VAR_18);
  VAR_14 = VAR_24 + FUNC_5(VAR_24);
  while (VAR_14 > VAR_24 && ' ' == VAR_14[-1])
   --VAR_14;
  VAR_14[0] = '\0';
  FUNC_3(VAR_13, "%s\n", VAR_24);
 }
}
