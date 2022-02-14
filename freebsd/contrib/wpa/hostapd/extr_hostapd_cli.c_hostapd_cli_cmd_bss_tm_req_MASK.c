
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_ctrl {int dummy; } ;
typedef int buf ;


 int FUNC_0 (char*,int,char*,char*) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct wpa_ctrl*,char*) ;

__attribute__((used)) static int FUNC_4(struct wpa_ctrl *VAR_0, int VAR_1,
          char *VAR_2[])
{
 char VAR_3[2000], *VAR_4;
 int VAR_5, VAR_6, VAR_7;

 if (VAR_1 < 1) {
  FUNC_2("Invalid 'bss_tm_req' command - at least one argument (STA addr) is needed\n");
  return -1;
 }

 VAR_5 = FUNC_0(VAR_3, sizeof(VAR_3), "BSS_TM_REQ %s", VAR_2[0]);
 if (FUNC_1(sizeof(VAR_3), VAR_5))
  return -1;

 VAR_7 = VAR_5;
 for (VAR_6 = 1; VAR_6 < VAR_1; VAR_6++) {
  VAR_4 = &VAR_3[VAR_7];
  VAR_5 = FUNC_0(VAR_4, sizeof(VAR_3) - VAR_7, " %s", VAR_2[VAR_6]);
  if (FUNC_1(sizeof(VAR_3) - VAR_7, VAR_5))
   return -1;
  VAR_7 += VAR_5;
 }
 return FUNC_3(VAR_0, VAR_3);
}
