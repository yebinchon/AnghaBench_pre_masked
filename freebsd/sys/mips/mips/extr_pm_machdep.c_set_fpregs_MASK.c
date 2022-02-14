
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {TYPE_1__* td_frame; } ;
struct fpreg {int dummy; } ;
struct TYPE_2__ {int f0; } ;


 struct thread* FUNC_0 (int ) ;
 int FUNC_1 (int ,struct thread*) ;
 int VAR_0 ;
 int FUNC_2 (int *,struct fpreg*,int) ;

int
FUNC_3(struct thread *VAR_1, struct fpreg *VAR_2)
{
 if (FUNC_0(VAR_0) == VAR_1)
  FUNC_1(VAR_0, (struct thread *)0);
 FUNC_2(&VAR_1->td_frame->f0, VAR_2, sizeof(struct fpreg));
 return 0;
}
