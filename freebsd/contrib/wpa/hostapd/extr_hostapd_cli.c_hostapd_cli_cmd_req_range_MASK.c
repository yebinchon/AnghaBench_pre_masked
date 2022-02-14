
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_ctrl {int dummy; } ;


 int FUNC_0 (struct wpa_ctrl*,char*,int,int,char**) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct wpa_ctrl *VAR_0, int VAR_1,
         char *VAR_2[])
{
 if (VAR_1 < 4) {
  FUNC_1("Invalid req_range command: needs at least 4 arguments - dest address, randomization interval, min AP count, and 1 to 16 AP addresses\n");
  return -1;
 }

 return FUNC_0(VAR_0, "REQ_RANGE", 4, VAR_1, VAR_2);
}
