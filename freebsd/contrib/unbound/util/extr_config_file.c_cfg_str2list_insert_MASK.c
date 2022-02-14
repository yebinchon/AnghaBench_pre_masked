
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_str2list {char* str; char* str2; struct config_str2list* next; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;

int
FUNC_2(struct config_str2list** VAR_0, char* VAR_1, char* VAR_2)
{
 struct config_str2list *VAR_3;
 if(!VAR_1 || !VAR_2 || !VAR_0) {
  FUNC_1(VAR_1);
  FUNC_1(VAR_2);
  return 0;
 }
 VAR_3 = (struct config_str2list*)FUNC_0(1, sizeof(struct config_str2list));
 if(!VAR_3) {
  FUNC_1(VAR_1);
  FUNC_1(VAR_2);
  return 0;
 }
 VAR_3->str = VAR_1;
 VAR_3->str2 = VAR_2;
 VAR_3->next = *VAR_0;
 *VAR_0 = VAR_3;
 return 1;
}
