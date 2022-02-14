
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {int * p_pgrp; int p_stats; int p_threads; int p_pwait; int p_profmtx; int p_itimmtx; int p_statmtx; int p_slock; int p_mtx; } ;


 int FUNC_0 (int ,struct proc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,int *,int) ;
 int VAR_4 ;
 int FUNC_4 () ;

__attribute__((used)) static int
FUNC_5(void *VAR_5, int VAR_6, int VAR_7)
{
 struct proc *VAR_8;

 VAR_8 = (struct proc *)VAR_5;
 FUNC_3(&VAR_8->p_mtx, "process lock", ((void*)0), VAR_0 | VAR_1 | VAR_2);
 FUNC_3(&VAR_8->p_slock, "process slock", ((void*)0), VAR_3 | VAR_2);
 FUNC_3(&VAR_8->p_statmtx, "pstatl", ((void*)0), VAR_3 | VAR_2);
 FUNC_3(&VAR_8->p_itimmtx, "pitiml", ((void*)0), VAR_3 | VAR_2);
 FUNC_3(&VAR_8->p_profmtx, "pprofl", ((void*)0), VAR_3 | VAR_2);
 FUNC_2(&VAR_8->p_pwait, "ppwait");
 FUNC_1(&VAR_8->p_threads);
 FUNC_0(VAR_4, VAR_8);
 VAR_8->p_stats = FUNC_4();
 VAR_8->p_pgrp = ((void*)0);
 return (0);
}
