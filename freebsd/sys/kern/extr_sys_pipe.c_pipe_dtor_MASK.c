
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pipe {int pipe_state; int pipe_sigio; struct pipe* pipe_peer; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct pipe*) ;

void
FUNC_2(struct pipe *VAR_1)
{
 struct pipe *VAR_2;

 VAR_2 = (VAR_1->pipe_state & VAR_0) != 0 ? VAR_1->pipe_peer : ((void*)0);
 FUNC_0(&VAR_1->pipe_sigio);
 FUNC_1(VAR_1);
 if (VAR_2 != ((void*)0)) {
  FUNC_0(&VAR_2->pipe_sigio);
  FUNC_1(VAR_2);
 }
}
