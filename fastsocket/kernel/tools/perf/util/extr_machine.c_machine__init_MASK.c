
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int dummy; } ;
struct TYPE_2__ {struct machine* machine; } ;
struct machine {int * root_dir; scalar_t__ pid; TYPE_1__ kmaps; int * last_match; int dead_threads; int threads; int kernel_dsos; int user_dsos; int rb_node; } ;
typedef scalar_t__ pid_t ;
typedef int comm ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 struct thread* FUNC_2 (struct machine*,scalar_t__) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char*,int,char*,scalar_t__) ;
 int * FUNC_5 (char const*) ;
 int FUNC_6 (struct thread*,char*) ;

int FUNC_7(struct machine *VAR_3, const char *VAR_4, pid_t VAR_5)
{
 FUNC_3(&VAR_3->kmaps);
 FUNC_1(&VAR_3->rb_node);
 FUNC_0(&VAR_3->user_dsos);
 FUNC_0(&VAR_3->kernel_dsos);

 VAR_3->threads = VAR_2;
 FUNC_0(&VAR_3->dead_threads);
 VAR_3->last_match = ((void*)0);

 VAR_3->kmaps.machine = VAR_3;
 VAR_3->pid = VAR_5;

 VAR_3->root_dir = FUNC_5(VAR_4);
 if (VAR_3->root_dir == ((void*)0))
  return -VAR_0;

 if (VAR_5 != VAR_1) {
  struct thread *VAR_6 = FUNC_2(VAR_3, VAR_5);
  char VAR_7[64];

  if (VAR_6 == ((void*)0))
   return -VAR_0;

  FUNC_4(VAR_7, sizeof(VAR_7), "[guest/%d]", VAR_5);
  FUNC_6(VAR_6, VAR_7);
 }

 return 0;
}
