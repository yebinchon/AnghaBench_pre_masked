
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_config {int dummy; } ;


 struct wpa_config* FUNC_0 (int *,int *) ;

struct wpa_config * FUNC_1(const char *VAR_0, struct wpa_config *VAR_1)
{
 struct wpa_config *VAR_2;

 if (VAR_0 == ((void*)0))
  return ((void*)0);
 if (VAR_1)
  VAR_2 = VAR_1;
 else
  VAR_2 = FUNC_0(((void*)0), ((void*)0));
 if (VAR_2 == ((void*)0))
  return ((void*)0);

 return VAR_2;
}
