
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iter_donotq {int dummy; } ;
struct config_strlist {int str; struct config_strlist* next; } ;
struct config_file {struct config_strlist* donotqueryaddrs; } ;


 int FUNC_0 (struct iter_donotq*,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct iter_donotq* VAR_0, struct config_file* VAR_1)
{
 struct config_strlist* VAR_2;
 for(VAR_2 = VAR_1->donotqueryaddrs; VAR_2; VAR_2 = VAR_2->next) {
  FUNC_1(VAR_2->str);
  if(!FUNC_0(VAR_0, VAR_2->str))
   return 0;
 }
 return 1;
}
