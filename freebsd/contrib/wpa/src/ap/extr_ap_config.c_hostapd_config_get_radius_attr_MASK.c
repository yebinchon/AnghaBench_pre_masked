
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct hostapd_radius_attr {scalar_t__ type; struct hostapd_radius_attr* next; } ;



struct hostapd_radius_attr *
FUNC_0(struct hostapd_radius_attr *VAR_0, u8 VAR_1)
{
 for (; VAR_0; VAR_0 = VAR_0->next) {
  if (VAR_0->type == VAR_1)
   return VAR_0;
 }
 return ((void*)0);
}
