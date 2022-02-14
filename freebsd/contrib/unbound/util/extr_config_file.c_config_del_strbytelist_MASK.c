
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_strbytelist {struct config_strbytelist* str2; struct config_strbytelist* str; struct config_strbytelist* next; } ;


 int FUNC_0 (struct config_strbytelist*) ;

void
FUNC_1(struct config_strbytelist* VAR_0)
{
 struct config_strbytelist* VAR_1;
 while(VAR_0) {
  VAR_1 = VAR_0->next;
  FUNC_0(VAR_0->str);
  FUNC_0(VAR_0->str2);
  FUNC_0(VAR_0);
  VAR_0 = VAR_1;
 }
}
