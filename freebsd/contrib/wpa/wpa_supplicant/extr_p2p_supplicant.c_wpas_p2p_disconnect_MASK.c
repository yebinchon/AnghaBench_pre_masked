
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct wpa_supplicant*,int ) ;

int FUNC_1(struct wpa_supplicant *VAR_1)
{

 if (VAR_1 == ((void*)0))
  return -1;

 return FUNC_0(VAR_1, VAR_0) < 0 ?
  -1 : 0;
}
