
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int dummy; } ;
struct save87 {int dummy; } ;
struct fpreg {int dummy; } ;
struct TYPE_2__ {int sv_87; int sv_xmm; } ;


 int FUNC_0 (struct fpreg*,int *,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 TYPE_1__* FUNC_3 (struct thread*) ;
 int FUNC_4 (struct save87*,int *) ;
 int FUNC_5 (struct thread*) ;

int
FUNC_6(struct thread *VAR_1, struct fpreg *VAR_2)
{

 FUNC_1();
 if (VAR_0)
  FUNC_4((struct save87 *)VAR_2,
      &FUNC_3(VAR_1)->sv_xmm);
 else
  FUNC_0(VAR_2, &FUNC_3(VAR_1)->sv_87,
      sizeof(*VAR_2));
 FUNC_5(VAR_1);
 FUNC_2();
 return (0);
}
