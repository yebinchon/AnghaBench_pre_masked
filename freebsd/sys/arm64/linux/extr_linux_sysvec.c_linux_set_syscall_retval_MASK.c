
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {TYPE_1__* td_frame; int * td_retval; } ;
struct TYPE_2__ {int * tf_x; } ;


 int FUNC_0 (struct thread*,int) ;

__attribute__((used)) static void
FUNC_1(struct thread *VAR_0, int VAR_1)
{

 VAR_0->td_retval[1] = VAR_0->td_frame->tf_x[1];
 FUNC_0(VAR_0, VAR_1);
}
