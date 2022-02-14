
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tv ;
struct timeval {int dummy; } ;
struct thread {int dummy; } ;
struct select_args {int ex; int ou; int in; int nd; int * tv; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct timeval*,int) ;
 int FUNC_1 (struct thread*,int ,int ,int ,int ,struct timeval*,int ) ;

int
FUNC_2(struct thread *VAR_1, struct select_args *VAR_2)
{
 struct timeval VAR_3, *VAR_4;
 int VAR_5;

 if (VAR_2->tv != ((void*)0)) {
  VAR_5 = FUNC_0(VAR_2->tv, &VAR_3, sizeof(VAR_3));
  if (VAR_5)
   return (VAR_5);
  VAR_4 = &VAR_3;
 } else
  VAR_4 = ((void*)0);

 return (FUNC_1(VAR_1, VAR_2->nd, VAR_2->in, VAR_2->ou, VAR_2->ex, VAR_4,
     VAR_0));
}
