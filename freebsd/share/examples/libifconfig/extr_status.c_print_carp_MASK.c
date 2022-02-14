
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifaddrs {int ifa_name; } ;
struct carpreq {int carpr_count; size_t carpr_state; int carpr_vhid; int carpr_advbase; int carpr_advskew; } ;
typedef int ifconfig_handle_t ;


 int VAR_0 ;
 char** VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ,struct carpreq*,int) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(ifconfig_handle_t *VAR_2, struct ifaddrs *VAR_3)
{
 struct carpreq VAR_4[VAR_0];
 int VAR_5;

 if (FUNC_0(VAR_2, VAR_3->ifa_name, VAR_4, VAR_0)) {
  return;
 }
 for (VAR_5 = 0; VAR_5 < VAR_4[0].carpr_count; VAR_5++) {
  FUNC_1("\tcarp: %s vhid %d advbase %d advskew %d",
      VAR_1[VAR_4[VAR_5].carpr_state], VAR_4[VAR_5].carpr_vhid,
      VAR_4[VAR_5].carpr_advbase, VAR_4[VAR_5].carpr_advskew);
  FUNC_1("\n");
 }
}
