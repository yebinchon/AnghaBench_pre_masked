
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_browser {struct rb_node* top; struct rb_root* entries; } ;
struct rb_root {int dummy; } ;
struct rb_node {int dummy; } ;
typedef scalar_t__ off_t ;





 struct rb_node* FUNC_0 (struct rb_root*) ;
 struct rb_node* FUNC_1 (struct rb_root*) ;
 struct rb_node* FUNC_2 (struct rb_node*) ;
 struct rb_node* FUNC_3 (struct rb_node*) ;

void FUNC_4(struct ui_browser *VAR_0, off_t VAR_1, int VAR_2)
{
 struct rb_root *VAR_3 = VAR_0->entries;
 struct rb_node *VAR_4;

 switch (VAR_2) {
 case 128:
  VAR_4 = FUNC_0(VAR_3);
  break;
 case 130:
  VAR_4 = VAR_0->top;
  break;
 case 129:
  VAR_4 = FUNC_1(VAR_3);
  break;
 default:
  return;
 }

 if (VAR_1 > 0) {
  while (VAR_1-- != 0)
   VAR_4 = FUNC_2(VAR_4);
 } else {
  while (VAR_1++ != 0)
   VAR_4 = FUNC_3(VAR_4);
 }

 VAR_0->top = VAR_4;
}
