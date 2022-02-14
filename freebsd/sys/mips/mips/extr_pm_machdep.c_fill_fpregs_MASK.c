
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct thread {TYPE_1__* td_frame; } ;
struct fpreg {int * r_regs; } ;
struct TYPE_4__ {int fpu_id; } ;
struct TYPE_3__ {int f0; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct thread*) ;
 struct thread* FUNC_1 (int ) ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct fpreg*,int *,int) ;

int
FUNC_3(struct thread *VAR_3, struct fpreg *VAR_4)
{
 if (VAR_3 == FUNC_1(VAR_2))
  FUNC_0(VAR_3);
 FUNC_2(VAR_4, &VAR_3->td_frame->f0, sizeof(struct fpreg));
 VAR_4->r_regs[VAR_0] = VAR_1.fpu_id;
 return 0;
}
