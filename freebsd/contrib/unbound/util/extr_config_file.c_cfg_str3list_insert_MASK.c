
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_str3list {char* str; char* str2; char* str3; struct config_str3list* next; } ;


 scalar_t__ FUNC_0 (int,int) ;

int
FUNC_1(struct config_str3list** VAR_0, char* VAR_1, char* VAR_2,
 char* VAR_3)
{
 struct config_str3list *VAR_4;
 if(!VAR_1 || !VAR_2 || !VAR_3 || !VAR_0)
  return 0;
 VAR_4 = (struct config_str3list*)FUNC_0(1, sizeof(struct config_str3list));
 if(!VAR_4)
  return 0;
 VAR_4->str = VAR_1;
 VAR_4->str2 = VAR_2;
 VAR_4->str3 = VAR_3;
 VAR_4->next = *VAR_0;
 *VAR_0 = VAR_4;
 return 1;
}
