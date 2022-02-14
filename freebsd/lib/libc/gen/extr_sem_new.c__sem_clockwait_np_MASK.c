
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct timespec {int tv_nsec; } ;
struct TYPE_6__ {int _count; } ;
struct TYPE_5__ {TYPE_2__ _kern; } ;
typedef TYPE_1__ sem_t ;
typedef int clockid_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int*,int,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_2__*,int ,int,struct timespec const*,struct timespec*) ;

int
FUNC_7(sem_t * __restrict VAR_2, clockid_t VAR_3, int VAR_4,
 const struct timespec *VAR_5, struct timespec *VAR_6)
{
 int VAR_7, VAR_8;

 if (FUNC_5(VAR_2) != 0)
  return (-1);

 VAR_8 = 0;
 FUNC_3();
 for (;;) {
  while (FUNC_0(VAR_7 = VAR_2->_kern._count) > 0) {
   if (FUNC_4(&VAR_2->_kern._count, VAR_7,
       VAR_7 - 1))
    return (0);
  }

  if (VAR_8) {
   FUNC_3();
   break;
  }





  if (VAR_5 != ((void*)0)) {
   if (VAR_5->tv_nsec >= 1000000000 || VAR_5->tv_nsec < 0) {
    VAR_1 = VAR_0;
    return (-1);
   }
  }
  FUNC_1(1);
  VAR_8 = FUNC_6(&VAR_2->_kern, VAR_3, VAR_4, VAR_5, VAR_6);
  FUNC_2(0);
 }
 return (VAR_8);
}
