
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {char const* ifname; } ;



__attribute__((used)) static const char * FUNC_0(void *VAR_0)
{
 struct wpa_supplicant *VAR_1 = VAR_0;
 if (VAR_1 == ((void*)0))
  return ((void*)0);
 return VAR_1->ifname;
}
