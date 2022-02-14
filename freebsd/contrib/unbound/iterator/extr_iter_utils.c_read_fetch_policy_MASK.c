
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iter_env {int max_dependency_depth; int* target_fetch_policy; } ;


 scalar_t__ FUNC_0 (size_t,int) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (struct iter_env*,char const*) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static int
FUNC_4(struct iter_env* VAR_0, const char* VAR_1)
{
 int VAR_2 = FUNC_1(VAR_1);
 if(VAR_2 < 1) {
  FUNC_3("Cannot parse target fetch policy: \"%s\"", VAR_1);
  return 0;
 }
 VAR_0->max_dependency_depth = VAR_2 - 1;
 VAR_0->target_fetch_policy = (int*)FUNC_0(
  (size_t)VAR_0->max_dependency_depth+1, sizeof(int));
 if(!VAR_0->target_fetch_policy) {
  FUNC_3("alloc fetch policy: out of memory");
  return 0;
 }
 FUNC_2(VAR_0, VAR_1);
 return 1;
}
