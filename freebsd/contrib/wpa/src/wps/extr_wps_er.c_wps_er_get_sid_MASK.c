
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int txt ;
struct wps_er_ap {int location; int addr; int sid; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 char* FUNC_1 (char*,char*) ;
 int FUNC_2 (int ,char*,int) ;
 scalar_t__ FUNC_3 (char*,int ) ;
 int FUNC_4 (int ,char*,int ,int ,...) ;

__attribute__((used)) static int FUNC_5(struct wps_er_ap *VAR_1, char *VAR_2)
{
 char *VAR_3;
 char VAR_4[100];

 if (!VAR_2) {
  FUNC_4(VAR_0, "WPS ER: No SID received from %s (%s)",
      FUNC_0(VAR_1->addr), VAR_1->location);
  return -1;
 }

 VAR_3 = FUNC_1(VAR_2, "uuid:");
 if (!VAR_3) {
  FUNC_4(VAR_0, "WPS ER: Invalid SID received from "
      "%s (%s): '%s'", FUNC_0(VAR_1->addr), VAR_1->location,
      VAR_2);
  return -1;
 }

 VAR_3 += 5;
 if (FUNC_3(VAR_3, VAR_1->sid) < 0) {
  FUNC_4(VAR_0, "WPS ER: Invalid SID received from "
      "%s (%s): '%s'", FUNC_0(VAR_1->addr), VAR_1->location,
      VAR_2);
  return -1;
 }

 FUNC_2(VAR_1->sid, VAR_4, sizeof(VAR_4));
 FUNC_4(VAR_0, "WPS ER: SID for subscription with %s (%s): %s",
     FUNC_0(VAR_1->addr), VAR_1->location, VAR_4);

 return 0;
}
