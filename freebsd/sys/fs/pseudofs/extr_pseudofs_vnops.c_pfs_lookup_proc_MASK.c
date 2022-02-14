
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {int p_flag; } ;
typedef int pid_t ;


 int FUNC_0 (struct proc*) ;
 int VAR_0 ;
 int FUNC_1 (struct proc*) ;
 struct proc* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(pid_t VAR_1, struct proc **VAR_2)
{
 struct proc *VAR_3;

 VAR_3 = FUNC_2(VAR_1);
 if (VAR_3 == ((void*)0))
  return (0);
 if ((VAR_3->p_flag & VAR_0) != 0) {
  FUNC_0(VAR_3);
  return (0);
 }
 FUNC_1(VAR_3);
 FUNC_0(VAR_3);
 *VAR_2 = VAR_3;
 return (1);
}
