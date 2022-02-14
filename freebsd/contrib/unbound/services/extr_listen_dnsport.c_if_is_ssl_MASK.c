
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_strlist {char const* str; struct config_strlist* next; } ;


 int FUNC_0 (char const*) ;
 char* FUNC_1 (char const*,char) ;

__attribute__((used)) static int
FUNC_2(const char* VAR_0, const char* VAR_1, int VAR_2,
 struct config_strlist* VAR_3)
{
 struct config_strlist* VAR_4;
 char* VAR_5 = FUNC_1(VAR_0, '@');
 if(!VAR_5 && FUNC_0(VAR_1) == VAR_2)
  return 1;
 if(VAR_5 && FUNC_0(VAR_5+1) == VAR_2)
  return 1;
 for(VAR_4 = VAR_3; VAR_4; VAR_4 = VAR_4->next) {
  if(VAR_5 && FUNC_0(VAR_5+1) == FUNC_0(VAR_4->str))
   return 1;
  if(!VAR_5 && FUNC_0(VAR_1) == FUNC_0(VAR_4->str))
   return 1;
 }
 return 0;
}
