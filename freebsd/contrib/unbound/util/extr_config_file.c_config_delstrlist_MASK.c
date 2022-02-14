
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_strlist {struct config_strlist* str; struct config_strlist* next; } ;


 int FUNC_0 (struct config_strlist*) ;

void
FUNC_1(struct config_strlist* VAR_0)
{
 struct config_strlist *VAR_1;
 while(VAR_0) {
  VAR_1 = VAR_0->next;
  FUNC_0(VAR_0->str);
  FUNC_0(VAR_0);
  VAR_0 = VAR_1;
 }
}
