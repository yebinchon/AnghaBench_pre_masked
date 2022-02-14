
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_ctrl {int dummy; } ;
typedef int cmd ;
typedef int addr ;


 int FUNC_0 (char*,int,char*,char*) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (struct wpa_ctrl*,char*,char*,int,int ) ;

__attribute__((used)) static int FUNC_4(struct wpa_ctrl *VAR_0, int VAR_1,
        char *VAR_2[])
{
 char VAR_3[32], VAR_4[64];

 if (FUNC_3(VAR_0, "STA-FIRST", VAR_3, sizeof(VAR_3), 0))
  return 0;
 do {
  if (FUNC_1(VAR_3, "") != 0)
   FUNC_2("%s\n", VAR_3);
  FUNC_0(VAR_4, sizeof(VAR_4), "STA-NEXT %s", VAR_3);
 } while (FUNC_3(VAR_0, VAR_4, VAR_3, sizeof(VAR_3), 0) == 0);

 return 0;
}
