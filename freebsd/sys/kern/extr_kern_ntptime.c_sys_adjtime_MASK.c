
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;
struct thread {int dummy; } ;
struct adjtime_args {int olddelta; scalar_t__ delta; } ;
typedef int olddelta ;
typedef int delta ;


 int FUNC_0 (scalar_t__,struct timeval*,int) ;
 int FUNC_1 (struct timeval*,int ,int) ;
 int FUNC_2 (struct thread*,struct timeval*,struct timeval*) ;

int
FUNC_3(struct thread *VAR_0, struct adjtime_args *VAR_1)
{
 struct timeval VAR_2, VAR_3, *VAR_4;
 int VAR_5;

 if (VAR_1->delta) {
  VAR_5 = FUNC_0(VAR_1->delta, &VAR_2, sizeof(VAR_2));
  if (VAR_5)
   return (VAR_5);
  VAR_4 = &VAR_2;
 } else
  VAR_4 = ((void*)0);
 VAR_5 = FUNC_2(VAR_0, VAR_4, &VAR_3);
 if (VAR_1->olddelta && VAR_5 == 0)
  VAR_5 = FUNC_1(&VAR_3, VAR_1->olddelta, sizeof(VAR_3));
 return (VAR_5);
}
