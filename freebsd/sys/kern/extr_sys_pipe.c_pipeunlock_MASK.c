
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pipe {int pipe_state; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct pipe*,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct pipe*) ;

__attribute__((used)) static __inline void
FUNC_3(struct pipe *VAR_3)
{

 FUNC_1(VAR_3, VAR_0);
 FUNC_0(VAR_3->pipe_state & VAR_1,
  ("Unlocked pipe passed to pipeunlock"));
 VAR_3->pipe_state &= ~VAR_1;
 if (VAR_3->pipe_state & VAR_2) {
  VAR_3->pipe_state &= ~VAR_2;
  FUNC_2(VAR_3);
 }
}
