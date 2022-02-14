
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ts32 ;
struct timespec32 {int dummy; } ;
struct timespec {int dummy; } ;
struct thread {int dummy; } ;
struct freebsd32_ppoll_args {int nfds; int fds; int * set; int * ts; } ;
typedef struct timespec32 sigset_t ;
typedef int set ;


 int FUNC_0 (struct timespec32,struct timespec,int ) ;
 int FUNC_1 (int *,struct timespec32*,int) ;
 int FUNC_2 (struct thread*,int ,int ,struct timespec*,struct timespec32*) ;
 int VAR_0 ;
 int VAR_1 ;

int
FUNC_3(struct thread *VAR_2, struct freebsd32_ppoll_args *VAR_3)
{
 struct timespec32 VAR_4;
 struct timespec VAR_5, *VAR_6;
 sigset_t VAR_7, *VAR_8;
 int VAR_9;

 if (VAR_3->ts != ((void*)0)) {
  VAR_9 = FUNC_1(VAR_3->ts, &VAR_4, sizeof(VAR_4));
  if (VAR_9 != 0)
   return (VAR_9);
  FUNC_0(VAR_4, VAR_5, VAR_1);
  FUNC_0(VAR_4, VAR_5, VAR_0);
  VAR_6 = &VAR_5;
 } else
  VAR_6 = ((void*)0);
 if (VAR_3->set != ((void*)0)) {
  VAR_9 = FUNC_1(VAR_3->set, &VAR_7, sizeof(VAR_7));
  if (VAR_9 != 0)
   return (VAR_9);
  VAR_8 = &VAR_7;
 } else
  VAR_8 = ((void*)0);

 return (FUNC_2(VAR_2, VAR_3->fds, VAR_3->nfds, VAR_6, VAR_8));
}
