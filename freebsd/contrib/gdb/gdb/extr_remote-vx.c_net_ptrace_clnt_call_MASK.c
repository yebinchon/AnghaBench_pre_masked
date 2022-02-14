
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum ptracereq { ____Placeholder_ptracereq } ptracereq ;
typedef enum clnt_stat { ____Placeholder_clnt_stat } clnt_stat ;
typedef int Rptrace ;
typedef int Ptrace_return ;


 int VAR_0 ;
 int FUNC_0 (int,int ,int *,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_1 (enum ptracereq VAR_3, Rptrace *VAR_4,
        Ptrace_return *VAR_5)
{
  enum clnt_stat VAR_6;

  VAR_6 = FUNC_0 (VAR_3, VAR_2, VAR_4, VAR_1,
     VAR_5);

  if (VAR_6 != VAR_0)
    return -1;

  return 0;
}
