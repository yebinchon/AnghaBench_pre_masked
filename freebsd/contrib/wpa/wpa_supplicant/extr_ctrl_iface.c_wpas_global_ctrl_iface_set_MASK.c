
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_global {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 char* FUNC_2 (char*,char) ;
 int FUNC_3 (struct wpa_global*,int) ;
 int FUNC_4 (int ,char*,char*,char*) ;

__attribute__((used)) static int FUNC_5(struct wpa_global *VAR_1, char *VAR_2)
{
 char *VAR_3;

 VAR_3 = FUNC_2(VAR_2, ' ');
 if (VAR_3 == ((void*)0))
  return -1;
 *VAR_3++ = '\0';

 FUNC_4(VAR_0, "GLOBAL_CTRL_IFACE SET '%s'='%s'", VAR_2, VAR_3);
 VAR_3[-1] = ' ';

 return -1;
}
