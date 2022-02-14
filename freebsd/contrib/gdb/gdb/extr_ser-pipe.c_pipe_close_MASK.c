
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serial {int fd; struct pipe_state* state; } ;
struct pipe_state {int pid; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct pipe_state*) ;

__attribute__((used)) static void
FUNC_3 (struct serial *VAR_1)
{
  struct pipe_state *VAR_2 = VAR_1->state;
  if (VAR_2 != ((void*)0))
    {
      int VAR_3 = VAR_2->pid;
      FUNC_0 (VAR_1->fd);
      VAR_1->fd = -1;
      FUNC_2 (VAR_2);
      VAR_1->state = ((void*)0);
      FUNC_1 (VAR_3, VAR_0);

    }
}
