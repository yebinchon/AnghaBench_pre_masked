
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_in6 {int sin6_addr; } ;
struct TYPE_2__ {int ifru_lifetime; int ifru_flags6; } ;
struct in6_ifreq {TYPE_1__ ifr_ifru; struct sockaddr_in6 ifr_addr; int ifr_name; } ;
struct ifconfig_inet6_addr {int vhid; int lifetime; struct sockaddr_in6* sin6; int flags; int prefixlen; struct sockaddr_in6* dstin6; } ;
struct ifaddrs {int ifa_flags; scalar_t__ ifa_data; scalar_t__ ifa_netmask; scalar_t__ ifa_dstaddr; scalar_t__ ifa_addr; } ;
struct if_data {int ifi_vhid; } ;
typedef int ifconfig_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ifconfig_inet6_addr*,int) ;
 scalar_t__ FUNC_1 (int *,int ,int ,struct in6_ifreq*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int ,char const*,int) ;

int
FUNC_5(ifconfig_handle_t *VAR_4,
    const char *VAR_5, struct ifaddrs *VAR_6, struct ifconfig_inet6_addr *VAR_7)
{
 struct sockaddr_in6 *VAR_8;
 struct in6_ifreq VAR_9;

 FUNC_0(VAR_7, sizeof(*VAR_7));


 VAR_7->sin6 = (struct sockaddr_in6 *)VAR_6->ifa_addr;


 if (VAR_6->ifa_flags & VAR_1) {
  VAR_7->dstin6 = (struct sockaddr_in6 *)VAR_6->ifa_dstaddr;
 }


 VAR_8 = (struct sockaddr_in6 *)VAR_6->ifa_netmask;
 VAR_7->prefixlen = FUNC_2(&VAR_8->sin6_addr);


 FUNC_4(VAR_9, VAR_5, sizeof(VAR_9));
 VAR_9 = *VAR_7->sin6;
 if (FUNC_1(VAR_4, VAR_0, VAR_2, &VAR_9) < 0) {
  return (-1);
 }
 VAR_7->flags = VAR_9;


 FUNC_3(&VAR_7->lifetime, 0, sizeof(VAR_7->lifetime));
 VAR_9 = *VAR_7->sin6;
 if (FUNC_1(VAR_4, VAR_0, VAR_3, &VAR_9) < 0) {
  return (-1);
 }
 VAR_7->lifetime = VAR_9;


 if (VAR_6->ifa_data && VAR_6->ifa_data) {
  VAR_7->vhid = ((struct if_data *)VAR_6->ifa_data)->ifi_vhid;
 }

 return (0);
}
