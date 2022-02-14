
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regional {int dummy; } ;
struct config_strlist {char* str; struct config_strlist* next; } ;


 scalar_t__ FUNC_0 (struct regional*,int) ;

int
FUNC_1(struct regional* VAR_0,
 struct config_strlist** VAR_1, char* VAR_2)
{
 struct config_strlist *VAR_3;
 if(!VAR_2 || !VAR_1)
  return 0;
 VAR_3 = (struct config_strlist*)FUNC_0(VAR_0,
  sizeof(struct config_strlist));
 if(!VAR_3)
  return 0;
 VAR_3->str = VAR_2;
 VAR_3->next = *VAR_1;
 *VAR_1 = VAR_3;
 return 1;
}
