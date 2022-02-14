
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {scalar_t__ p_pid; int p_flag; } ;
typedef scalar_t__ pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct proc*) ;
 int FUNC_1 (struct proc*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct proc*) ;
 struct proc* VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (int ,struct proc*) ;
 int FUNC_4 (int ,struct proc*) ;
 struct proc* FUNC_5 (scalar_t__) ;
 struct proc* FUNC_6 (scalar_t__) ;
 struct proc* FUNC_7 (scalar_t__) ;

int
FUNC_8(pid_t VAR_14, int VAR_15, struct proc **VAR_16)
{
 struct proc *VAR_17;
 int VAR_18;

 VAR_17 = VAR_12;
 if (VAR_17->p_pid == VAR_14) {
  FUNC_0(VAR_17);
 } else {
  VAR_17 = ((void*)0);
  if (VAR_14 <= VAR_9) {
   if ((VAR_15 & VAR_8) == 0)
    VAR_17 = FUNC_6(VAR_14);
   else
    VAR_17 = FUNC_5(VAR_14);
  } else if ((VAR_15 & VAR_6) == 0) {
   VAR_17 = FUNC_7(VAR_14);
  }
  if (VAR_17 == ((void*)0))
   return (VAR_1);
  if ((VAR_15 & VAR_3) != 0) {
   VAR_18 = FUNC_4(VAR_13, VAR_17);
   if (VAR_18 != 0)
    goto errout;
  }
 }
 if ((VAR_15 & VAR_2) != 0) {
  VAR_18 = FUNC_3(VAR_13, VAR_17);
  if (VAR_18 != 0)
   goto errout;
 }
 if ((VAR_15 & VAR_5) != 0 && VAR_12 != VAR_17) {
  VAR_18 = VAR_0;
  goto errout;
 }
 if ((VAR_15 & VAR_8) != 0 && (VAR_17->p_flag & VAR_11) != 0) {
  VAR_18 = VAR_1;
  goto errout;
 }
 if ((VAR_15 & VAR_7) != 0 && (VAR_17->p_flag & VAR_10) != 0) {




  VAR_18 = VAR_1;
  goto errout;
 }
 if ((VAR_15 & VAR_4) != 0) {
  FUNC_2(VAR_17);
  FUNC_1(VAR_17);
 }
 *VAR_16 = VAR_17;
 return (0);
errout:
 FUNC_1(VAR_17);
 return (VAR_18);
}
