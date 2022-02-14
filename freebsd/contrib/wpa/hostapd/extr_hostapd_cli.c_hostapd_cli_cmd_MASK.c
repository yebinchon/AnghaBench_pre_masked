
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_ctrl {int dummy; } ;
typedef int buf ;


 int FUNC_0 (char*,char const*,int,char*) ;
 int FUNC_1 (struct wpa_ctrl*,char*) ;
 scalar_t__ FUNC_2 (char*,int,char const*,int,char**) ;

__attribute__((used)) static int FUNC_3(struct wpa_ctrl *VAR_0, const char *VAR_1,
      int VAR_2, int VAR_3, char *VAR_4[])
{
 char VAR_5[4096];

 if (VAR_3 < VAR_2) {
  FUNC_0("Invalid %s command - at least %d argument%s required.\n",
         VAR_1, VAR_2, VAR_2 > 1 ? "s are" : " is");
  return -1;
 }
 if (FUNC_2(VAR_5, sizeof(VAR_5), VAR_1, VAR_3, VAR_4) < 0)
  return -1;
 return FUNC_1(VAR_0, VAR_5);
}
