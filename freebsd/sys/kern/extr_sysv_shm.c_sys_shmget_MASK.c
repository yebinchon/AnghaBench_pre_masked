
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {TYPE_1__* td_ucred; } ;
struct shmget_args {int shmflg; scalar_t__ key; } ;
struct TYPE_2__ {int cr_prison; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int * FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (struct thread*,struct shmget_args*,int) ;
 int FUNC_5 (struct thread*,struct shmget_args*,int,int) ;

int
FUNC_6(struct thread *VAR_5, struct shmget_args *VAR_6)
{
 int VAR_7, VAR_8;
 int VAR_9;

 if (FUNC_2(VAR_5->td_ucred) == ((void*)0))
  return (VAR_2);
 VAR_8 = VAR_6->shmflg & VAR_0;
 FUNC_0();
 if (VAR_6->key == VAR_4) {
  VAR_9 = FUNC_4(VAR_5, VAR_6, VAR_8);
 } else {
  VAR_7 = FUNC_3(VAR_5->td_ucred->cr_prison,
      VAR_6->key);
  if (VAR_7 >= 0)
   VAR_9 = FUNC_5(VAR_5, VAR_6, VAR_8, VAR_7);
  else if ((VAR_6->shmflg & VAR_3) == 0)
   VAR_9 = VAR_1;
  else
   VAR_9 = FUNC_4(VAR_5, VAR_6, VAR_8);
 }
 FUNC_1();
 return (VAR_9);
}
