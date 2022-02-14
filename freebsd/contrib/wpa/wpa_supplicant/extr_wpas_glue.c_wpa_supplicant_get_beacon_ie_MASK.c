
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int dummy; } ;


 int FUNC_0 (struct wpa_supplicant*) ;
 scalar_t__ FUNC_1 (struct wpa_supplicant*) ;

__attribute__((used)) static int FUNC_2(void *VAR_0)
{
 struct wpa_supplicant *VAR_1 = VAR_0;
 if (FUNC_0(VAR_1) == 0) {
  return 0;
 }



 if (FUNC_1(VAR_1) < 0)
  return -1;

 return FUNC_0(VAR_1);
}
