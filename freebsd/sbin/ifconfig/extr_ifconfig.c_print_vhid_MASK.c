
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifaddrs {struct if_data* ifa_data; } ;
struct if_data {scalar_t__ ifi_vhid; } ;


 int FUNC_0 (char*,scalar_t__) ;

void
FUNC_1(const struct ifaddrs *VAR_0, const char *VAR_1)
{
 struct if_data *VAR_2;

 if (VAR_0->ifa_data == ((void*)0))
  return;

 VAR_2 = VAR_0->ifa_data;
 if (VAR_2->ifi_vhid == 0)
  return;

 FUNC_0(" vhid %d", VAR_2->ifi_vhid);
}
