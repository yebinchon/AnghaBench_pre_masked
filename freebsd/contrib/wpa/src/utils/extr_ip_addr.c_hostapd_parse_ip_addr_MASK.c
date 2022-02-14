
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int v6; int v4; } ;
struct hostapd_ip_addr {int af; TYPE_1__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,int *) ;
 scalar_t__ FUNC_1 (int ,char const*,int *) ;

int FUNC_2(const char *VAR_2, struct hostapd_ip_addr *VAR_3)
{

 if (FUNC_0(VAR_2, &VAR_3->u.v4)) {
  VAR_3->af = VAR_0;
  return 0;
 }
 return -1;
}
