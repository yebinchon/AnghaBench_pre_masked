
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int td_proc; } ;
struct save87 {int dummy; } ;
struct fpreg {int dummy; } ;
struct TYPE_2__ {int sv_87; int sv_xmm; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct thread*) ;
 int FUNC_3 (int *,struct fpreg*,int) ;
 scalar_t__ VAR_0 ;
 struct thread* VAR_1 ;
 TYPE_1__* FUNC_4 (struct thread*) ;
 int FUNC_5 (int *,struct save87*) ;
 int FUNC_6 (struct thread*) ;

int
FUNC_7(struct thread *VAR_2, struct fpreg *VAR_3)
{

 FUNC_0(VAR_2 == VAR_1 || FUNC_2(VAR_2) ||
     FUNC_1(VAR_2->td_proc),
     ("not suspended thread %p", VAR_2));
 FUNC_6(VAR_2);
 if (VAR_0)
  FUNC_5(&FUNC_4(VAR_2)->sv_xmm,
      (struct save87 *)VAR_3);
 else
  FUNC_3(&FUNC_4(VAR_2)->sv_87, VAR_3,
      sizeof(*VAR_3));
 return (0);
}
