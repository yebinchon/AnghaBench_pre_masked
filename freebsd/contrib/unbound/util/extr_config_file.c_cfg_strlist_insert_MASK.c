
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_strlist {char* str; struct config_strlist* next; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;

int
FUNC_2(struct config_strlist** VAR_0, char* VAR_1)
{
 struct config_strlist *VAR_2;
 if(!VAR_1 || !VAR_0) {
  FUNC_1(VAR_1);
  return 0;
 }
 VAR_2 = (struct config_strlist*)FUNC_0(1, sizeof(struct config_strlist));
 if(!VAR_2) {
  FUNC_1(VAR_1);
  return 0;
 }
 VAR_2->str = VAR_1;
 VAR_2->next = *VAR_0;
 *VAR_0 = VAR_2;
 return 1;
}
