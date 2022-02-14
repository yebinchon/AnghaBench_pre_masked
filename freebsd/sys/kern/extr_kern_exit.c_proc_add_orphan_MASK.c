
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {int p_flag; int p_treeflag; int p_orphans; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,struct proc*,int ) ;
 int FUNC_4 (int *,struct proc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int *,int ) ;

void
FUNC_6(struct proc *VAR_6, struct proc *VAR_7)
{

 FUNC_5(&VAR_5, VAR_3);
 FUNC_0((VAR_6->p_flag & VAR_0) != 0,
     ("proc_add_orphan: not traced"));

 if (FUNC_1(&VAR_7->p_orphans)) {
  VAR_6->p_treeflag |= VAR_1;
  FUNC_4(&VAR_7->p_orphans, VAR_6, VAR_4);
 } else {
  FUNC_3(FUNC_2(&VAR_7->p_orphans),
      VAR_6, VAR_4);
 }
 VAR_6->p_treeflag |= VAR_2;
}
