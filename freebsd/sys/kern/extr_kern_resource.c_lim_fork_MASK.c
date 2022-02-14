
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {scalar_t__ p_cpulimit; int p_limco; int p_mtx; int p_limit; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct proc*,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *,int ,int ,int ,struct proc*,int ) ;
 int VAR_3 ;
 int FUNC_4 (int ) ;

void
FUNC_5(struct proc *VAR_4, struct proc *VAR_5)
{

 FUNC_1(VAR_4, VAR_0);
 FUNC_1(VAR_5, VAR_0);

 VAR_5->p_limit = FUNC_4(VAR_4->p_limit);
 FUNC_2(&VAR_5->p_limco, &VAR_5->p_mtx, 0);
 if (VAR_4->p_cpulimit != VAR_1)
  FUNC_3(&VAR_5->p_limco, VAR_2, 0,
      VAR_3, VAR_5, FUNC_0(1));
}
