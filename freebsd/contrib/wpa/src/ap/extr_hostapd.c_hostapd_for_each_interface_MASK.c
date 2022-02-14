
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hapd_interfaces {size_t count; struct hostapd_iface** iface; } ;



int FUNC_0(struct hapd_interfaces *VAR_0,
          int (*VAR_1)(struct hostapd_iface *VAR_2,
      void *VAR_3), void *VAR_4)
{
 size_t VAR_5;
 int VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_0->count; VAR_5++) {
  VAR_6 = VAR_1(VAR_0->iface[VAR_5], VAR_4);
  if (VAR_6)
   return VAR_6;
 }

 return 0;
}
