
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostapd_data {int dummy; } ;
struct hapd_interfaces {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct hostapd_data*,struct hostapd_data*,char*) ;
 struct hostapd_data* FUNC_1 (struct hapd_interfaces*,char*) ;
 char* FUNC_2 (char*,char) ;
 int FUNC_3 (int ,char*,char*) ;

__attribute__((used)) static int
FUNC_4(struct hapd_interfaces *VAR_1,
          char *VAR_2)
{
 char *VAR_3 = VAR_2, *VAR_4;
 struct hostapd_data *VAR_5, *VAR_6;



 VAR_4 = FUNC_2(VAR_3, ' ');
 if (!VAR_4) {
  FUNC_3(VAR_0, "DUP: no src ifname found in cmd: '%s'",
      VAR_2);
  return -1;
 }

 *VAR_4 = '\0';
 VAR_5 = FUNC_1(VAR_1, VAR_3);
 if (!VAR_5) {
  FUNC_3(VAR_0, "DUP: no src ifname found: '%s'",
      VAR_3);
  return -1;
 }

 VAR_3 = VAR_4 + 1;
 VAR_4 = FUNC_2(VAR_3, ' ');
 if (!VAR_4) {
  FUNC_3(VAR_0, "DUP: no dst ifname found in cmd: '%s'",
      VAR_2);
  return -1;
 }

 *VAR_4 = '\0';
 VAR_6 = FUNC_1(VAR_1, VAR_3);
 if (!VAR_6) {
  FUNC_3(VAR_0, "DUP: no dst ifname found: '%s'",
      VAR_3);
  return -1;
 }

 VAR_3 = VAR_4 + 1;
 return FUNC_0(VAR_5, VAR_6, VAR_3);
}
