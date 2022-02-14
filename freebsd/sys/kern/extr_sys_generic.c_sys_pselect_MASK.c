
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ts ;
struct timeval {int dummy; } ;
struct timespec {int dummy; } ;
struct thread {int dummy; } ;
struct pselect_args {int ex; int ou; int in; int nd; int * sm; int * ts; } ;
typedef struct timespec sigset_t ;
typedef int set ;


 int VAR_0 ;
 int FUNC_0 (struct timeval*,struct timespec*) ;
 int FUNC_1 (int *,struct timespec*,int) ;
 int FUNC_2 (struct thread*,int ,int ,int ,int ,struct timeval*,struct timespec*,int ) ;

int
FUNC_3(struct thread *VAR_1, struct pselect_args *VAR_2)
{
 struct timespec VAR_3;
 struct timeval VAR_4, *VAR_5;
 sigset_t VAR_6, *VAR_7;
 int VAR_8;

 if (VAR_2->ts != ((void*)0)) {
  VAR_8 = FUNC_1(VAR_2->ts, &VAR_3, sizeof(VAR_3));
  if (VAR_8 != 0)
      return (VAR_8);
  FUNC_0(&VAR_4, &VAR_3);
  VAR_5 = &VAR_4;
 } else
  VAR_5 = ((void*)0);
 if (VAR_2->sm != ((void*)0)) {
  VAR_8 = FUNC_1(VAR_2->sm, &VAR_6, sizeof(VAR_6));
  if (VAR_8 != 0)
   return (VAR_8);
  VAR_7 = &VAR_6;
 } else
  VAR_7 = ((void*)0);
 return (FUNC_2(VAR_1, VAR_2->nd, VAR_2->in, VAR_2->ou, VAR_2->ex, VAR_5,
     VAR_7, VAR_0));
}
