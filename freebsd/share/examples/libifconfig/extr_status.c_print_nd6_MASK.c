
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct in6_ndireq {TYPE_1__ ndi; } ;
struct ifaddrs {int ifa_name; } ;
typedef int ifconfig_handle_t ;


 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (int *,int ,struct in6_ndireq*) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static void
FUNC_3(ifconfig_handle_t *VAR_0, struct ifaddrs *VAR_1)
{
 struct in6_ndireq VAR_2;

 if (FUNC_1(VAR_0, VAR_1->ifa_name, &VAR_2) == 0) {
  FUNC_2("\tnd6 options=%x\n", VAR_2.ndi.flags);
 } else {
  FUNC_0(1, "Failed to get nd6 options");
 }
}
