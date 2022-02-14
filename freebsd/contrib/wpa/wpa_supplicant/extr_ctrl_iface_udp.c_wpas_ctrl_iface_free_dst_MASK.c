
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_ctrl_dst {struct wpa_ctrl_dst* next; } ;


 int FUNC_0 (struct wpa_ctrl_dst*) ;

__attribute__((used)) static void FUNC_1(struct wpa_ctrl_dst *VAR_0)
{
 struct wpa_ctrl_dst *VAR_1;

 while (VAR_0) {
  VAR_1 = VAR_0;
  VAR_0 = VAR_0->next;
  FUNC_0(VAR_1);
 }
}
