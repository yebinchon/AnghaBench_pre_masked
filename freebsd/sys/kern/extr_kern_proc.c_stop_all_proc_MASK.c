
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {int p_flag; } ;


 int FUNC_0 (struct proc*,struct proc*,int ) ;
 int FUNC_1 (int *,struct proc*,int ) ;
 struct proc* FUNC_2 (struct proc*,int ) ;
 int FUNC_3 (struct proc*,int ) ;
 int VAR_0 ;
 int FUNC_4 (struct proc*) ;
 int FUNC_5 (struct proc*) ;
 int VAR_1 ;
 scalar_t__ FUNC_6 (struct proc*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (struct proc*) ;
 int FUNC_8 (struct proc*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct proc* VAR_10 ;
 int FUNC_9 (int ) ;
 int VAR_11 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct proc*,int ) ;

void
FUNC_13(void)
{
 struct proc *VAR_12, *VAR_13;
 int VAR_14, VAR_15;
 bool VAR_16, VAR_17, VAR_18, VAR_19;

 VAR_12 = VAR_10;
allproc_loop:
 FUNC_10(&VAR_9);
 VAR_15 = VAR_8;
 VAR_18 = VAR_17 = VAR_19 = VAR_16 = 0;
 FUNC_3(VAR_12, VAR_11);
 FUNC_1(&VAR_7, VAR_12, VAR_11);
 for (;;) {
  VAR_13 = FUNC_2(VAR_12, VAR_11);
  if (VAR_13 == ((void*)0))
   break;
  FUNC_3(VAR_12, VAR_11);
  FUNC_0(VAR_13, VAR_12, VAR_11);
  FUNC_4(VAR_13);
  if ((VAR_13->p_flag & (VAR_1 | VAR_3 | VAR_4)) != 0) {
   FUNC_5(VAR_13);
   continue;
  }
  if ((VAR_13->p_flag & VAR_5) != 0) {
   VAR_18 = 1;
   FUNC_5(VAR_13);
   continue;
  }
  if (FUNC_6(VAR_13) == VAR_2) {







   VAR_17 = 1;
   FUNC_5(VAR_13);
   continue;
  }
  FUNC_11(&VAR_9);
  FUNC_7(VAR_13);
  VAR_14 = FUNC_12(VAR_13, VAR_6);
  if (VAR_14 != 0)
   VAR_16 = 1;
  else
   VAR_19 = 1;
  FUNC_8(VAR_13);
  FUNC_5(VAR_13);
  FUNC_10(&VAR_9);
 }

 if (VAR_15 != VAR_8)
  VAR_16 = 1;
 FUNC_11(&VAR_9);
 if (VAR_16 || VAR_19 || VAR_18 || VAR_17) {
  FUNC_9(VAR_0);
  goto allproc_loop;
 }
}
