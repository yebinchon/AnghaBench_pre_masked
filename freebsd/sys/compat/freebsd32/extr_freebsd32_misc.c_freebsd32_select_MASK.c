
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tv32 ;
struct timeval32 {int dummy; } ;
struct timeval {int dummy; } ;
struct thread {int dummy; } ;
struct freebsd32_select_args {int ex; int ou; int in; int nd; int * tv; } ;
typedef int int32_t ;


 int FUNC_0 (struct timeval32,struct timeval,int ) ;
 int FUNC_1 (int *,struct timeval32*,int) ;
 int FUNC_2 (struct thread*,int ,int ,int ,int ,struct timeval*,int) ;
 int VAR_0 ;
 int VAR_1 ;

int
FUNC_3(struct thread *VAR_2, struct freebsd32_select_args *VAR_3)
{
 struct timeval32 VAR_4;
 struct timeval VAR_5, *VAR_6;
 int VAR_7;

 if (VAR_3->tv != ((void*)0)) {
  VAR_7 = FUNC_1(VAR_3->tv, &VAR_4, sizeof(VAR_4));
  if (VAR_7)
   return (VAR_7);
  FUNC_0(VAR_4, VAR_5, VAR_0);
  FUNC_0(VAR_4, VAR_5, VAR_1);
  VAR_6 = &VAR_5;
 } else
  VAR_6 = ((void*)0);



 return (FUNC_2(VAR_2, VAR_3->nd, VAR_3->in, VAR_3->ou, VAR_3->ex, VAR_6,
     sizeof(int32_t) * 8));
}
