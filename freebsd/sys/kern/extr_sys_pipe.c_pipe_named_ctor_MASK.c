
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct pipe {int pipe_state; } ;
struct pipepair {struct pipe pp_rpipe; } ;


 int VAR_0 ;
 int FUNC_0 (struct thread*,struct pipepair**) ;

void
FUNC_1(struct pipe **VAR_1, struct thread *VAR_2)
{
 struct pipepair *VAR_3;

 FUNC_0(VAR_2, &VAR_3);
 VAR_3->pp_rpipe.pipe_state |= VAR_0;
 *VAR_1 = &VAR_3->pp_rpipe;
}
