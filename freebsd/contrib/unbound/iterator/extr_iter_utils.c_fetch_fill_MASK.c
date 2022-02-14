
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iter_env {int max_dependency_depth; int * target_fetch_policy; } ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char**,int) ;

__attribute__((used)) static void
FUNC_2(struct iter_env* VAR_0, const char* VAR_1)
{
 char* VAR_2 = (char*)VAR_1, *VAR_3;
 int VAR_4;
 for(VAR_4=0; VAR_4<VAR_0->max_dependency_depth+1; VAR_4++) {
  VAR_0->target_fetch_policy[VAR_4] = FUNC_1(VAR_2, &VAR_3, 10);
  if(VAR_2 == VAR_3)
   FUNC_0("cannot parse fetch policy number %s", VAR_2);
  VAR_2 = VAR_3;
 }
}
