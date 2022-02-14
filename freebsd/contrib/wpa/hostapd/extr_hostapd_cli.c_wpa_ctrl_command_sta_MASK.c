
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_ctrl {int dummy; } ;
typedef int buf ;


 int * VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,char*,size_t) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (struct wpa_ctrl*,char const*,int ,char*,size_t*,int ) ;

__attribute__((used)) static int FUNC_5(struct wpa_ctrl *VAR_2, const char *VAR_3,
    char *VAR_4, size_t VAR_5, int VAR_6)
{
 char VAR_7[4096], *VAR_8;
 size_t VAR_9;
 int VAR_10;

 if (VAR_0 == ((void*)0)) {
  FUNC_2("Not connected to hostapd - command dropped.\n");
  return -1;
 }
 VAR_9 = sizeof(VAR_7) - 1;
 VAR_10 = FUNC_4(VAR_2, VAR_3, FUNC_3(VAR_3), VAR_7, &VAR_9,
          VAR_1);
 if (VAR_10 == -2) {
  FUNC_2("'%s' command timed out.\n", VAR_3);
  return -2;
 } else if (VAR_10 < 0) {
  FUNC_2("'%s' command failed.\n", VAR_3);
  return -1;
 }

 VAR_7[VAR_9] = '\0';
 if (FUNC_0(VAR_7, "FAIL", 4) == 0)
  return -1;
 if (VAR_6)
  FUNC_2("%s", VAR_7);

 VAR_8 = VAR_7;
 while (*VAR_8 != '\0' && *VAR_8 != '\n')
  VAR_8++;
 *VAR_8 = '\0';
 FUNC_1(VAR_4, VAR_7, VAR_5);
 return 0;
}
