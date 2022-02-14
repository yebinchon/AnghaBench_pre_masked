
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {int p_suspcount; int p_flag; int p_numthreads; int p_pptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct proc*,int ) ;
 int FUNC_2 (struct proc*) ;
 int FUNC_3 (struct proc*,int ) ;
 int FUNC_4 (struct proc*) ;
 int FUNC_5 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (struct proc*,int ) ;
 struct proc* VAR_6 ;

void
FUNC_7(struct proc *VAR_7)
{
 int VAR_8;

 FUNC_1(VAR_7, VAR_2);
 FUNC_3(VAR_7, VAR_2);
 VAR_8 = VAR_7->p_suspcount;
 if (VAR_7 == VAR_6)
  VAR_8++;
 if ((VAR_7->p_flag & VAR_3) && (VAR_8 == VAR_7->p_numthreads)) {
  FUNC_4(VAR_7);
  VAR_7->p_flag &= ~VAR_5;
  FUNC_0(VAR_7->p_pptr);
  FUNC_6(VAR_7, (VAR_7->p_flag & VAR_4) ?
   VAR_1 : VAR_0);
  FUNC_5(VAR_7->p_pptr);
  FUNC_2(VAR_7);
 }
}
