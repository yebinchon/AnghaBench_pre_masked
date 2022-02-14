
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lockdep_map {char* name; struct lock_class_key* key; int cpu; int * class_cache; } ;
struct lock_class_key {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (char*,struct lock_class_key*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct lockdep_map*,int,int) ;
 int FUNC_4 (struct lock_class_key*) ;
 scalar_t__ FUNC_5 (int) ;

void FUNC_6(struct lockdep_map *VAR_1, const char *VAR_2,
        struct lock_class_key *VAR_3, int VAR_4)
{
 VAR_1->class_cache = ((void*)0);




 if (FUNC_0(!VAR_2)) {
  VAR_1->name = "NULL";
  return;
 }

 VAR_1->name = VAR_2;

 if (FUNC_0(!VAR_3))
  return;



 if (!FUNC_4(VAR_3)) {
  FUNC_1("BUG: key %p not in .data!\n", VAR_3);
  FUNC_0(1);
  return;
 }
 VAR_1->key = VAR_3;

 if (FUNC_5(!VAR_0))
  return;

 if (VAR_4)
  FUNC_3(VAR_1, VAR_4, 1);
}
