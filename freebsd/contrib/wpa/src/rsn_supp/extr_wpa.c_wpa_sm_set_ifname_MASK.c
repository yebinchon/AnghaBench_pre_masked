
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_sm {char const* ifname; char const* bridge_ifname; } ;



void FUNC_0(struct wpa_sm *VAR_0, const char *VAR_1,
         const char *VAR_2)
{
 if (VAR_0) {
  VAR_0->ifname = VAR_1;
  VAR_0->bridge_ifname = VAR_2;
 }
}
