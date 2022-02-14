
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ts ;
struct timespec {int dummy; } ;
struct thread {int dummy; } ;
struct ppoll_args {int nfds; int fds; int * set; int * ts; } ;
typedef struct timespec sigset_t ;
typedef int set ;


 int FUNC_0 (int *,struct timespec*,int) ;
 int FUNC_1 (struct thread*,int ,int ,struct timespec*,struct timespec*) ;

int
FUNC_2(struct thread *VAR_0, struct ppoll_args *VAR_1)
{
 struct timespec VAR_2, *VAR_3;
 sigset_t VAR_4, *VAR_5;
 int VAR_6;

 if (VAR_1->ts != ((void*)0)) {
  VAR_6 = FUNC_0(VAR_1->ts, &VAR_2, sizeof(VAR_2));
  if (VAR_6)
   return (VAR_6);
  VAR_3 = &VAR_2;
 } else
  VAR_3 = ((void*)0);
 if (VAR_1->set != ((void*)0)) {
  VAR_6 = FUNC_0(VAR_1->set, &VAR_4, sizeof(VAR_4));
  if (VAR_6)
   return (VAR_6);
  VAR_5 = &VAR_4;
 } else
  VAR_5 = ((void*)0);





 return (FUNC_1(VAR_0, VAR_1->fds, VAR_1->nfds, VAR_3, VAR_5));
}
