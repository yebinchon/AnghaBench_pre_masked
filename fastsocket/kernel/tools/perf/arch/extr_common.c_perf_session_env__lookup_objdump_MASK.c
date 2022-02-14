
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_session_env {int * arch; } ;


 int VAR_0 ;
 int FUNC_0 (struct perf_session_env*,char*,int *) ;

int FUNC_1(struct perf_session_env *VAR_1)
{




 if (VAR_1->arch == ((void*)0))
  return 0;

 return FUNC_0(VAR_1, "objdump",
            &VAR_0);
}
