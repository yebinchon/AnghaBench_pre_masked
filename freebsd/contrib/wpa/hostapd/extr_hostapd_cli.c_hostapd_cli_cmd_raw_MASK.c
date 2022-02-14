
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_ctrl {int dummy; } ;


 int FUNC_0 (struct wpa_ctrl*,char*,int ,int,char**) ;

__attribute__((used)) static int FUNC_1(struct wpa_ctrl *VAR_0, int VAR_1, char *VAR_2[])
{
 if (VAR_1 == 0)
  return -1;
 return FUNC_0(VAR_0, VAR_2[0], 0, VAR_1 - 1, &VAR_2[1]);
}
