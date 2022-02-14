
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {scalar_t__ tv_sec; int tv_usec; } ;
struct thread {int dummy; } ;
struct socket {int dummy; } ;
typedef int sbintime_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int*,int) ;
 int FUNC_1 (struct thread*,int *) ;
 int FUNC_2 (struct thread*) ;
 int FUNC_3 (struct thread*) ;
 int FUNC_4 (struct thread*,int,int) ;
 int FUNC_5 (struct socket*,int,int *,struct thread*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_6 (struct timeval*) ;
 int FUNC_7 (struct timeval) ;

int
FUNC_8(struct socket *VAR_6, int VAR_7, struct timeval *VAR_8, struct thread *VAR_9)
{
 struct timeval VAR_10;
 sbintime_t VAR_11, VAR_12, VAR_13;
 int VAR_14;

 VAR_12 = 0;
 if (VAR_8 != ((void*)0)) {
  VAR_10 = *VAR_8;
  if (VAR_10.tv_sec < 0 || VAR_10.tv_usec < 0 ||
      VAR_10.tv_usec >= 1000000)
   return (VAR_0);
  if (!FUNC_6(&VAR_10))
   VAR_11 = 0;
  else if (VAR_10.tv_sec <= VAR_2) {
   VAR_13 = FUNC_7(VAR_10);
   VAR_12 = VAR_13;
   VAR_12 >>= VAR_4;
   if (FUNC_0(&VAR_11, VAR_13))
    VAR_11 += VAR_5;
   if (VAR_11 <= VAR_3 - VAR_13)
    VAR_11 += VAR_13;
   else
    VAR_11 = -1;
  } else
   VAR_11 = -1;
 } else
  VAR_11 = -1;
 FUNC_3(VAR_9);



 for (;;) {
  FUNC_1(VAR_9, ((void*)0));
  VAR_14 = FUNC_5(VAR_6, VAR_7, ((void*)0), VAR_9);

  if (VAR_14)
   return (0);
  VAR_14 = FUNC_4(VAR_9, VAR_11, VAR_12);
  if (VAR_14)
   break;
 }
 FUNC_2(VAR_9);

 if (VAR_14 == VAR_1)
  VAR_14 = 0;
 return (VAR_14);
}
