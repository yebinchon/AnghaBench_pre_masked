
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_strlist {char const* str; struct config_strlist* next; } ;
struct config_file {struct config_strlist* local_zones_nodefault; } ;


 size_t FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char const*,size_t) ;

__attribute__((used)) static int
FUNC_2(struct config_file* VAR_0, const char* VAR_1)
{
 struct config_strlist* VAR_2;
 size_t VAR_3 = FUNC_0(VAR_1);
 if(VAR_3 == 0) return 0;
 if(VAR_1[VAR_3-1] == '.') VAR_3--;

 for(VAR_2 = VAR_0->local_zones_nodefault; VAR_2; VAR_2 = VAR_2->next) {

  if(FUNC_1(VAR_2->str, VAR_1, VAR_3) == 0 &&
   (FUNC_0(VAR_2->str) == VAR_3 || (FUNC_0(VAR_2->str)==VAR_3+1 &&
   VAR_2->str[VAR_3] == '.')))
   return 1;
 }
 return 0;
}
