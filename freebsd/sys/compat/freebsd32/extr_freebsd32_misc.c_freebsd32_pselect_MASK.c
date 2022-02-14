
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ts32 ;
struct timeval {int dummy; } ;
struct timespec32 {int dummy; } ;
struct timespec {int dummy; } ;
struct thread {int dummy; } ;
struct freebsd32_pselect_args {int ex; int ou; int in; int nd; int * sm; int * ts; } ;
typedef struct timespec32 sigset_t ;
typedef int set ;
typedef int int32_t ;


 int FUNC_0 (struct timespec32,struct timespec,int ) ;
 int FUNC_1 (struct timeval*,struct timespec*) ;
 int FUNC_2 (int *,struct timespec32*,int) ;
 int FUNC_3 (struct thread*,int ,int ,int ,int ,struct timeval*,struct timespec32*,int) ;
 int VAR_0 ;
 int VAR_1 ;

int
FUNC_4(struct thread *VAR_2, struct freebsd32_pselect_args *VAR_3)
{
 struct timespec32 VAR_4;
 struct timespec VAR_5;
 struct timeval VAR_6, *VAR_7;
 sigset_t VAR_8, *VAR_9;
 int VAR_10;

 if (VAR_3->ts != ((void*)0)) {
  VAR_10 = FUNC_2(VAR_3->ts, &VAR_4, sizeof(VAR_4));
  if (VAR_10 != 0)
   return (VAR_10);
  FUNC_0(VAR_4, VAR_5, VAR_1);
  FUNC_0(VAR_4, VAR_5, VAR_0);
  FUNC_1(&VAR_6, &VAR_5);
  VAR_7 = &VAR_6;
 } else
  VAR_7 = ((void*)0);
 if (VAR_3->sm != ((void*)0)) {
  VAR_10 = FUNC_2(VAR_3->sm, &VAR_8, sizeof(VAR_8));
  if (VAR_10 != 0)
   return (VAR_10);
  VAR_9 = &VAR_8;
 } else
  VAR_9 = ((void*)0);



 VAR_10 = FUNC_3(VAR_2, VAR_3->nd, VAR_3->in, VAR_3->ou, VAR_3->ex, VAR_7,
     VAR_9, sizeof(int32_t) * 8);
 return (VAR_10);
}
