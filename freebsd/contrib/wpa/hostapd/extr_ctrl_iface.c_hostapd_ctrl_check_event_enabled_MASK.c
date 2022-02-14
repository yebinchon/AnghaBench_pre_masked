
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_ctrl_dst {int events; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,int ) ;

__attribute__((used)) static int FUNC_1(struct wpa_ctrl_dst *VAR_2,
         const char *VAR_3)
{



 if (FUNC_0(VAR_3, VAR_0))
  return !!(VAR_2->events & VAR_1);
 return 1;
}
