
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct sockaddr {int dummy; } ;
struct ip {int ip_p; int ip_len; } ;
typedef int socklen_t ;
struct TYPE_4__ {char* name; int aliasOverhead; int ifMTU; scalar_t__ logDropped; scalar_t__ dropIgnoredIncoming; scalar_t__ assignAliasAddr; int ifName; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;



 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct ip*) ;
 int FUNC_3 (int ,struct ip*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct ip*,int ,char*) ;
 int FUNC_6 (char*) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_7 (int) ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 TYPE_2__* VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (int,char*,int,int ,struct sockaddr*,int*) ;
 int FUNC_11 (int,char*,int,int ,struct sockaddr*,int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (char*,char*) ;
 scalar_t__ VAR_19 ;

__attribute__((used)) static void FUNC_14 (int VAR_20, int VAR_21)
{
 int VAR_22;
 int VAR_23;
 char VAR_24[VAR_7];
 struct sockaddr_in VAR_25;
 int VAR_26;
 int VAR_27;
 socklen_t VAR_28;
 struct ip* VAR_29;
 char VAR_30[80];
 int VAR_31;

 if (VAR_16->assignAliasAddr) {
  do {
   VAR_31 = FUNC_4 (VAR_16->ifName);
   if (VAR_11 == 0 || VAR_12 == 0)
    break;
   if (VAR_31 == VAR_2)
    FUNC_12(1);
  } while (VAR_31 == VAR_2);
  if (VAR_31 != 0)
   FUNC_7(1);
  VAR_16->assignAliasAddr = 0;
 }



 VAR_28 = sizeof VAR_25;
 VAR_23 = FUNC_10 (VAR_20,
         VAR_24,
         sizeof VAR_24,
         0,
         (struct sockaddr*) &VAR_25,
         &VAR_28);

 if (VAR_23 == -1) {

  if (VAR_13 != VAR_3)
   FUNC_6 ("read from divert socket failed");

  return;
 }



 VAR_29 = (struct ip*) VAR_24;
 if (VAR_21 == VAR_0) {
  if (VAR_25.sin_addr.s_addr == VAR_5)
   VAR_21 = VAR_9;
  else
   VAR_21 = VAR_6;
 }

 if (VAR_19) {



  FUNC_9 (VAR_21 == VAR_9 ? "Out " : "In  ");
  if (VAR_18 > 1)
   FUNC_9 ("{%s}", VAR_16->name);

  switch (VAR_29->ip_p) {
  case 129:
   FUNC_9 ("[TCP]  ");
   break;

  case 128:
   FUNC_9 ("[UDP]  ");
   break;

  case 130:
   FUNC_9 ("[ICMP] ");
   break;

  default:
   FUNC_9 ("[%d]    ", VAR_29->ip_p);
   break;
  }



  FUNC_2 (VAR_29);
 }

 if (VAR_21 == VAR_9) {



  FUNC_1 (VAR_17, VAR_24, VAR_7);
 }
 else {




  VAR_27 = FUNC_0 (VAR_17, VAR_24, VAR_7);
  if (VAR_27 == VAR_10 &&
      VAR_16->dropIgnoredIncoming) {

   if (VAR_19)
    FUNC_9 (" dropped.\n");

   if (VAR_16->logDropped)
    FUNC_5 (VAR_29, VAR_8, "denied");

   return;
  }
 }



 VAR_22 = FUNC_8 (VAR_29->ip_len);



 if (VAR_21 == VAR_9 &&
     VAR_22 - VAR_23 > VAR_16->aliasOverhead)
  VAR_16->aliasOverhead = VAR_22 - VAR_23;

 if (VAR_19) {




  FUNC_9 (" aliased to\n");
  FUNC_9 ("           ");
  FUNC_2 (VAR_29);
  FUNC_9 ("\n");
 }




 VAR_26 = FUNC_11 (VAR_20,
          VAR_24,
       VAR_22,
       0,
       (struct sockaddr*) &VAR_25,
       sizeof VAR_25);

 if (VAR_26 != VAR_22) {

  if (VAR_13 == VAR_4) {

   if (VAR_21 == VAR_9 &&
       VAR_16->ifMTU != -1)
    FUNC_3 (VAR_14,
        (struct ip*) VAR_24,
        VAR_16->ifMTU - VAR_16->aliasOverhead);
  }
  else if (VAR_13 == VAR_1 && VAR_15) {

   FUNC_13 (VAR_30, "failed to write packet back");
   FUNC_6 (VAR_30);
  }
 }
}
