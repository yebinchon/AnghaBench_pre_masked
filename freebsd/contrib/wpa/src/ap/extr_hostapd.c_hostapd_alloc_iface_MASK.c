
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostapd_iface {int sta_seen; } ;


 int FUNC_0 (int *) ;
 struct hostapd_iface* FUNC_1 (int) ;

struct hostapd_iface * FUNC_2(void)
{
 struct hostapd_iface *VAR_0;

 VAR_0 = FUNC_1(sizeof(*VAR_0));
 if (!VAR_0)
  return ((void*)0);

 FUNC_0(&VAR_0->sta_seen);

 return VAR_0;
}
