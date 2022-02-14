
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct timespec {int tv_nsec; } ;
typedef TYPE_1__* sem_t ;
struct TYPE_5__ {scalar_t__ syssem; int count; int nwaiters; int semid; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int*,int ,struct timespec const*) ;
 int FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int*,int,int) ;
 int VAR_1 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,TYPE_1__**) ;
 int VAR_2 ;
 scalar_t__ FUNC_9 (TYPE_1__**) ;

int
FUNC_10(sem_t * __restrict VAR_3,
 const struct timespec * __restrict VAR_4)
{
 int VAR_5, VAR_6;

 if (FUNC_9(VAR_3) != 0)
  return (-1);

 if ((*VAR_3)->syssem != 0) {
  FUNC_0(1);
  VAR_6 = FUNC_6((*VAR_3)->semid);
  FUNC_1(VAR_6 == -1);
  return (VAR_6);
 }

 VAR_6 = 0;
 FUNC_2();
 for (;;) {
  while ((VAR_5 = (*VAR_3)->count) > 0) {
   if (FUNC_5(&(*VAR_3)->count, VAR_5, VAR_5 - 1))
    return (0);
  }
  if (VAR_6) {
   FUNC_2();
   break;
  }
  if (VAR_4) {
   if (VAR_4->tv_nsec >= 1000000000 || VAR_4->tv_nsec < 0) {
    VAR_1 = VAR_0;
    return (-1);
   }
  }
  FUNC_4(&(*VAR_3)->nwaiters, 1);
  FUNC_8(VAR_2, VAR_3);
  FUNC_0(1);
  VAR_6 = FUNC_3(&(*VAR_3)->count, 0, VAR_4);
  FUNC_1(0);
  FUNC_7(0);
  FUNC_4(&(*VAR_3)->nwaiters, -1);
 }
 return (VAR_6);
}
