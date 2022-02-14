
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifmediareq {scalar_t__ ifm_current; scalar_t__ ifm_active; int ifm_status; int ifm_count; scalar_t__* ifm_ulist; } ;
struct ifaddrs {int ifa_name; } ;
typedef int opts ;
typedef int ifconfig_handle_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct ifmediareq*) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ,struct ifmediareq**) ;
 int FUNC_4 (scalar_t__,char*,int) ;
 char* FUNC_5 (struct ifmediareq*) ;
 char* FUNC_6 (scalar_t__) ;
 char* FUNC_7 (scalar_t__) ;
 int FUNC_8 (char*,...) ;

__attribute__((used)) static void
FUNC_9(ifconfig_handle_t *VAR_2, struct ifaddrs *VAR_3)
{
 int VAR_4;
 struct ifmediareq *VAR_5;
 char VAR_6[80];

 if (FUNC_3(VAR_2, VAR_3->ifa_name, &VAR_5) != 0) {
  if (FUNC_2(VAR_2) != VAR_1) {
   FUNC_0(1, "Failed to get media info");
  } else {
   return;
  }
 }

 FUNC_8("\tmedia: %s %s", FUNC_7(VAR_5->ifm_current),
     FUNC_6(VAR_5->ifm_current));
 if (VAR_5->ifm_active != VAR_5->ifm_current) {
  FUNC_8(" (%s", FUNC_6(VAR_5->ifm_active));
  FUNC_4(VAR_5->ifm_active, VAR_6,
      sizeof(VAR_6));
  if (VAR_6[0] != '\0') {
   FUNC_8(" <%s>)\n", VAR_6);
  } else {
   FUNC_8(")\n");
  }
 } else {
  FUNC_8("\n");
 }

 if (VAR_5->ifm_status & VAR_0) {
  FUNC_8("\tstatus: %s\n",
      FUNC_5(VAR_5));
 }

 FUNC_8("\tsupported media:\n");
 for (VAR_4 = 0; VAR_4 < VAR_5->ifm_count; VAR_4++) {
  FUNC_8("\t\tmedia %s",
      FUNC_6(VAR_5->ifm_ulist[VAR_4]));
  FUNC_4(VAR_5->ifm_ulist[VAR_4], VAR_6,
      sizeof(VAR_6));
  if (VAR_6[0] != '\0') {
   FUNC_8(" mediaopt %s\n", VAR_6);
  } else {
   FUNC_8("\n");
  }
 }
 FUNC_1(VAR_5);
}
