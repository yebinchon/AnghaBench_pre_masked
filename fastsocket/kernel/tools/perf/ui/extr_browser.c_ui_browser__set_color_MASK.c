
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_browser {int current_color; } ;


 int FUNC_0 (int) ;

int FUNC_1(struct ui_browser *VAR_0, int VAR_1)
{
 int VAR_2 = VAR_0->current_color;
 VAR_0->current_color = VAR_1;
 FUNC_0(VAR_1);
 return VAR_2;
}
