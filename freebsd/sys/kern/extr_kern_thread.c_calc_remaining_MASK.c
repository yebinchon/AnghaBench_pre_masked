
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {int p_numthreads; int p_boundary_count; int p_suspcount; } ;


 int VAR_0 ;
 int FUNC_0 (struct proc*,int ) ;
 int FUNC_1 (struct proc*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static int
FUNC_3(struct proc *VAR_5, int VAR_6)
{
 int VAR_7;

 FUNC_0(VAR_5, VAR_0);
 FUNC_1(VAR_5, VAR_0);
 if (VAR_6 == VAR_3)
  VAR_7 = VAR_5->p_numthreads;
 else if (VAR_6 == VAR_2)
  VAR_7 = VAR_5->p_numthreads - VAR_5->p_boundary_count;
 else if (VAR_6 == VAR_4 || VAR_6 == VAR_1)
  VAR_7 = VAR_5->p_numthreads - VAR_5->p_suspcount;
 else
  FUNC_2("calc_remaining: wrong mode %d", VAR_6);
 return (VAR_7);
}
