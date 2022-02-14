
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lagg_reqport {char* rp_ifname; } ;
struct ifaddrs {int ifa_name; } ;
typedef int ifconfig_handle_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ,struct lagg_reqport*) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static void
FUNC_4(ifconfig_handle_t *VAR_2, struct ifaddrs *VAR_3)
{
 struct lagg_reqport VAR_4;

 if (FUNC_2(VAR_2, VAR_3->ifa_name, &VAR_4) < 0) {
  if ((FUNC_1(VAR_2) == VAR_0) ||
      (FUNC_1(VAR_2) == VAR_1)) {
   return;
  } else {
   FUNC_0(1, "Failed to get lagg port status");
  }
 }

 FUNC_3("\tlaggdev: %s\n", VAR_4.rp_ifname);
}
