
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int si_note; } ;
struct pipe {int pipe_state; TYPE_1__ pipe_sel; scalar_t__ pipe_sigio; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct pipe*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_3 (scalar_t__*,int ,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;

void
FUNC_5(struct pipe *VAR_5)
{

 FUNC_1(VAR_5, VAR_0);
 if (VAR_5->pipe_state & VAR_2) {
  FUNC_4(&VAR_5->pipe_sel, VAR_3);
  if (!FUNC_2(&VAR_5->pipe_sel))
   VAR_5->pipe_state &= ~VAR_2;
 }
 if ((VAR_5->pipe_state & VAR_1) && VAR_5->pipe_sigio)
  FUNC_3(&VAR_5->pipe_sigio, VAR_4, 0);
 FUNC_0(&VAR_5->pipe_sel.si_note, 0);
}
