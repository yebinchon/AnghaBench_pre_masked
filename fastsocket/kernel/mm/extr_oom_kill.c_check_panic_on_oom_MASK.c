
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nodemask_t ;
typedef int gfp_t ;
typedef enum oom_constraint { ____Placeholder_oom_constraint } oom_constraint ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int,int *,int const*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_5(enum oom_constraint VAR_3, gfp_t VAR_4,
    int VAR_5, const nodemask_t *VAR_6)
{
 if (FUNC_1(!VAR_1))
  return;
 if (VAR_1 != 2) {





  if (VAR_3 != VAR_0)
   return;
 }
 FUNC_3(&VAR_2);
 FUNC_0(((void*)0), VAR_4, VAR_5, ((void*)0), VAR_6);
 FUNC_4(&VAR_2);
 FUNC_2("Out of memory: %s panic_on_oom is enabled\n",
  VAR_1 == 2 ? "compulsory" : "system-wide");
}
