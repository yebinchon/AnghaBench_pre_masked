
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_ssid {int dummy; } ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (size_t) ;
 int FUNC_2 (char*,char const*,size_t) ;
 size_t FUNC_3 (char const*) ;
 int FUNC_4 (struct wpa_ssid*,char const*,char*,int ) ;

int FUNC_5(struct wpa_ssid *VAR_0, const char *VAR_1,
     const char *VAR_2)
{
 size_t VAR_3;
 char *VAR_4;
 int VAR_5;

 VAR_3 = FUNC_3(VAR_2);
 VAR_4 = FUNC_1(VAR_3 + 3);
 if (VAR_4 == ((void*)0))
  return -1;
 VAR_4[0] = '"';
 FUNC_2(VAR_4 + 1, VAR_2, VAR_3);
 VAR_4[VAR_3 + 1] = '"';
 VAR_4[VAR_3 + 2] = '\0';
 VAR_5 = FUNC_4(VAR_0, VAR_1, VAR_4, 0);
 FUNC_0(VAR_4);
 return VAR_5;
}
