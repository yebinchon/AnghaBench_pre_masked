
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_ctrl_dst {int events; } ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 char* FUNC_1 (char const*,char) ;
 scalar_t__ FUNC_2 (char const*,char*) ;

__attribute__((used)) static int FUNC_3(struct wpa_ctrl_dst *VAR_1, const char *VAR_2)
{
 const char *VAR_3;
 int VAR_4;

 if (!VAR_2)
  return 0;

 VAR_3 = FUNC_1(VAR_2, '=');
 if (!VAR_3)
  return -1;
 VAR_3++;
 VAR_4 = FUNC_0(VAR_3);
 if (VAR_4 < 0 || VAR_4 > 1)
  return -1;

 if (FUNC_2(VAR_2, "probe_rx_events=")) {
  if (VAR_4)
   VAR_1->events |= VAR_0;
  else
   VAR_1->events &= ~VAR_0;
 }

 return 0;
}
