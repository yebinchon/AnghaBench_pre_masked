
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int dummy; } ;


 scalar_t__ FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (char*,char*,int) ;
 int FUNC_2 (struct wpa_supplicant*,char*,char*,size_t) ;
 int FUNC_3 (struct wpa_supplicant*,char*) ;
 int FUNC_4 (struct wpa_supplicant*,char*,size_t) ;

__attribute__((used)) static int FUNC_5(struct wpa_supplicant *VAR_0, char *VAR_1,
    char *VAR_2, size_t VAR_3)
{
 if (FUNC_0(VAR_1, "show") == 0)
  return FUNC_4(VAR_0, VAR_2, VAR_3);
 if (FUNC_1(VAR_1, "add ", 4) == 0)
  return FUNC_2(VAR_0, VAR_1 + 4, VAR_2, VAR_3);
 if (FUNC_1(VAR_1, "done ", 5) == 0)
  return FUNC_3(VAR_0, VAR_1 + 4);
 return -1;
}
