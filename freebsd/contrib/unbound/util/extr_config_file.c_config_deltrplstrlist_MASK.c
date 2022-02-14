
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_str3list {struct config_str3list* str3; struct config_str3list* str2; struct config_str3list* str; struct config_str3list* next; } ;


 int FUNC_0 (struct config_str3list*) ;

void
FUNC_1(struct config_str3list* VAR_0)
{
 struct config_str3list *VAR_1;
 while(VAR_0) {
  VAR_1 = VAR_0->next;
  FUNC_0(VAR_0->str);
  FUNC_0(VAR_0->str2);
  FUNC_0(VAR_0->str3);
  FUNC_0(VAR_0);
  VAR_0 = VAR_1;
 }
}
