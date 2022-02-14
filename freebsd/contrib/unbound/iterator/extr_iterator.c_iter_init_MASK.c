
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module_env {int cfg; void** modinfo; } ;
struct iter_env {int num_queries_ratelimited; int queries_ratelimit_lock; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (struct iter_env*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (char*) ;

int
FUNC_5(struct module_env* VAR_0, int VAR_1)
{
 struct iter_env* VAR_2 = (struct iter_env*)FUNC_0(1,
  sizeof(struct iter_env));
 if(!VAR_2) {
  FUNC_4("malloc failure");
  return 0;
 }
 VAR_0->modinfo[VAR_1] = (void*)VAR_2;

 FUNC_2(&VAR_2->queries_ratelimit_lock);
 FUNC_3(&VAR_2->queries_ratelimit_lock,
   &VAR_2->num_queries_ratelimited,
  sizeof(VAR_2->num_queries_ratelimited));

 if(!FUNC_1(VAR_2, VAR_0->cfg)) {
  FUNC_4("iterator: could not apply configuration settings.");
  return 0;
 }

 return 1;
}
