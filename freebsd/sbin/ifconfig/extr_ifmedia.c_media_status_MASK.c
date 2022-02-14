
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifmediareq {int ifm_count; int* ifm_ulist; scalar_t__ ifm_current; scalar_t__ ifm_active; int ifm_status; int ifdr_reason; char* ifdr_msg; int ifdr_vendor; int ifdr_name; int ifm_name; } ;
struct ifdownreason {int ifm_count; int* ifm_ulist; scalar_t__ ifm_current; scalar_t__ ifm_active; int ifm_status; int ifdr_reason; char* ifdr_msg; int ifdr_vendor; int ifdr_name; int ifm_name; } ;
typedef int ifmr ;
typedef int ifdr ;
typedef int caddr_t ;




 int VAR_0 ;

 int VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int*) ;
 scalar_t__ FUNC_4 (int,int ,int ) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct ifmediareq*,int ,int) ;
 int VAR_6 ;
 int FUNC_7 (scalar_t__,int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (char) ;
 int FUNC_11 (int ,int ,int) ;
 scalar_t__ VAR_7 ;
 int FUNC_12 (char*,int ) ;

__attribute__((used)) static void
FUNC_13(int VAR_8)
{
 struct ifmediareq VAR_9;
 struct ifdownreason VAR_10;
 int *VAR_11, VAR_12;
 bool VAR_13, VAR_14;

 (void) FUNC_6(&VAR_9, 0, sizeof(VAR_9));
 (void) FUNC_11(VAR_9.ifm_name, VAR_6, sizeof(VAR_9.ifm_name));
 VAR_14 = 1;




 if (FUNC_4(VAR_8, VAR_5, (caddr_t)&VAR_9) < 0)
  VAR_14 = 0;
 if (!VAR_14 && FUNC_4(VAR_8, VAR_4, (caddr_t)&VAR_9) < 0) {



  return;
 }

 if (VAR_9.ifm_count == 0) {
  FUNC_12("%s: no media types?", VAR_6);
  return;
 }

 VAR_11 = (int *)FUNC_5(VAR_9.ifm_count * sizeof(int));
 if (VAR_11 == ((void*)0))
  FUNC_2(1, "malloc");
 VAR_9.ifm_ulist = VAR_11;

 if (VAR_14) {
  if (FUNC_4(VAR_8, VAR_5, (caddr_t)&VAR_9) < 0)
   FUNC_2(1, "SIOCGIFXMEDIA");
 } else {
  if (FUNC_4(VAR_8, VAR_4, (caddr_t)&VAR_9) < 0)
   FUNC_2(1, "SIOCGIFMEDIA");
 }

 FUNC_9("\tmedia: ");
 FUNC_7(VAR_9.ifm_current, 1);
 if (VAR_9.ifm_active != VAR_9.ifm_current) {
  FUNC_10(' ');
  FUNC_10('(');
  FUNC_7(VAR_9.ifm_active, 0);
  FUNC_10(')');
 }

 FUNC_10('\n');

 if (VAR_9.ifm_status & VAR_1) {
  VAR_13 = 0;
  FUNC_9("\tstatus: ");
  switch (FUNC_1(VAR_9.ifm_active)) {
  case 129:
  case 130:
   if (VAR_9.ifm_status & VAR_0)
    FUNC_9("active");
   else
    VAR_13 = 1;
   break;

  case 128:
   if (VAR_9.ifm_status & VAR_0) {

    if (FUNC_0(VAR_9.ifm_active) == VAR_2)
     FUNC_9("associated");
    else
     FUNC_9("running");
   } else
    VAR_13 = 1;
   break;
  }
  if (VAR_13) {
   FUNC_9("no carrier");
   FUNC_6(&VAR_10, 0, sizeof(VAR_10));
   FUNC_11(VAR_10.ifdr_name, VAR_6, sizeof(VAR_10.ifdr_name));
   if (FUNC_4(VAR_8, VAR_3, (caddr_t)&VAR_10) == 0) {
    switch (VAR_10.ifdr_reason) {
    case 132:
     FUNC_9(" (%s)", VAR_10.ifdr_msg);
     break;
    case 131:
     FUNC_9(" (vendor code %d)",
         VAR_10.ifdr_vendor);
     break;
    default:
     break;
    }
   }
  }
  FUNC_10('\n');
 }

 if (VAR_9.ifm_count > 0 && VAR_7) {
  FUNC_9("\tsupported media:\n");
  for (VAR_12 = 0; VAR_12 < VAR_9.ifm_count; VAR_12++) {
   FUNC_9("\t\t");
   FUNC_8(VAR_11[VAR_12]);
   FUNC_10('\n');
  }
 }

 FUNC_3(VAR_11);
}
