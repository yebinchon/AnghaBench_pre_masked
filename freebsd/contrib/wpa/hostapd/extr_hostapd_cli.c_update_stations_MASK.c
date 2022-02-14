
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_ctrl {int dummy; } ;
typedef int cmd ;
typedef int addr ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (char*,int,char*,char*) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (struct wpa_ctrl*,char*,char*,int,int ) ;

__attribute__((used)) static void FUNC_5(struct wpa_ctrl *VAR_2)
{
 char VAR_3[32], VAR_4[64];

 if (!VAR_2 || !VAR_0)
  return;

 FUNC_1(&VAR_1);

 if (FUNC_4(VAR_2, "STA-FIRST", VAR_3, sizeof(VAR_3), 0))
  return;
 do {
  if (FUNC_3(VAR_3, "") != 0)
   FUNC_0(&VAR_1, VAR_3);
  FUNC_2(VAR_4, sizeof(VAR_4), "STA-NEXT %s", VAR_3);
 } while (FUNC_4(VAR_2, VAR_4, VAR_3, sizeof(VAR_3), 0) == 0);
}
