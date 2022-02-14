
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dtrace_vstate_t ;
typedef int dtrace_predicate_t ;
typedef int dtrace_difo_t ;
typedef int dof_sec_t ;
typedef int dof_hdr_t ;
typedef int cred_t ;


 int * FUNC_0 (int *,int *,int *,int *) ;
 int * FUNC_1 (int *) ;

__attribute__((used)) static dtrace_predicate_t *
FUNC_2(dof_hdr_t *VAR_0, dof_sec_t *VAR_1, dtrace_vstate_t *VAR_2,
    cred_t *VAR_3)
{
 dtrace_difo_t *VAR_4;

 if ((VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3)) == ((void*)0))
  return (((void*)0));

 return (FUNC_1(VAR_4));
}
