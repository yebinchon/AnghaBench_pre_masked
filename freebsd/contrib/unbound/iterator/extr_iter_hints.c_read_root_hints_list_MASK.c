
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iter_hints {int dummy; } ;
struct config_strlist {char* str; struct config_strlist* next; } ;
struct config_file {scalar_t__* chrootdir; struct config_strlist* root_hints; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct iter_hints*,char*) ;
 int FUNC_2 (scalar_t__*) ;
 scalar_t__ FUNC_3 (char*,scalar_t__*,int ) ;

__attribute__((used)) static int
FUNC_4(struct iter_hints* VAR_0, struct config_file* VAR_1)
{
 struct config_strlist* VAR_2;
 for(VAR_2 = VAR_1->root_hints; VAR_2; VAR_2 = VAR_2->next) {
  FUNC_0(VAR_2->str);
  if(VAR_2->str && VAR_2->str[0]) {
   char* VAR_3 = VAR_2->str;
   if(VAR_1->chrootdir && VAR_1->chrootdir[0] &&
    FUNC_3(VAR_2->str, VAR_1->chrootdir,
    FUNC_2(VAR_1->chrootdir)) == 0)
    VAR_3 += FUNC_2(VAR_1->chrootdir);
   if(!FUNC_1(VAR_0, VAR_3))
    return 0;
  }
 }
 return 1;
}
