
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {int p_treeflag; } ;


 struct proc* FUNC_0 (struct proc*,int ) ;
 int FUNC_1 (struct proc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int ) ;

void
FUNC_3(struct proc *VAR_5)
{
 struct proc *VAR_6;

 FUNC_2(&VAR_4, VAR_2);
 if ((VAR_5->p_treeflag & VAR_1) == 0)
  return;
 if ((VAR_5->p_treeflag & VAR_0) != 0) {
  VAR_6 = FUNC_0(VAR_5, VAR_3);
  if (VAR_6 != ((void*)0))
   VAR_6->p_treeflag |= VAR_0;
  VAR_5->p_treeflag &= ~VAR_0;
 }
 FUNC_1(VAR_5, VAR_3);
 VAR_5->p_treeflag &= ~VAR_1;
}
