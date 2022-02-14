
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int td_ucred; } ;
struct TYPE_2__ {int si_note; } ;
struct pipe {int pipe_state; TYPE_1__ pipe_sel; } ;
struct pipepair {struct pipe pp_wpipe; struct pipe pp_rpipe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pipe*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,struct pipepair*) ;
 int FUNC_3 (struct pipepair*) ;
 int FUNC_4 (struct pipe*,int) ;
 int VAR_2 ;
 struct pipepair* FUNC_5 (int ,int ) ;

__attribute__((used)) static void
FUNC_6(struct thread *VAR_3, struct pipepair **VAR_4)
{
 struct pipepair *VAR_5;
 struct pipe *VAR_6, *VAR_7;

 *VAR_4 = VAR_5 = FUNC_5(VAR_2, VAR_0);
 VAR_6 = &VAR_5->pp_rpipe;
 VAR_7 = &VAR_5->pp_wpipe;

 FUNC_1(&VAR_6->pipe_sel.si_note, FUNC_0(VAR_6));
 FUNC_1(&VAR_7->pipe_sel.si_note, FUNC_0(VAR_7));


 FUNC_4(VAR_6, 1);
 FUNC_4(VAR_7, 0);

 VAR_6->pipe_state |= VAR_1;
 VAR_7->pipe_state |= VAR_1;
}
