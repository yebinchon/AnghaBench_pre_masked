
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct timeval {int tv_usec; scalar_t__ tv_sec; } ;
struct timespec {int tv_nsec; scalar_t__ tv_sec; } ;
struct TYPE_4__ {int * m_owner; int m_lock; } ;
typedef TYPE_1__ kmutex_t ;
typedef int kcondvar_t ;
typedef int clock_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int * VAR_3 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (struct timeval*,int *) ;
 int VAR_4 ;
 int * FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *,int *,struct timespec*) ;

clock_t
FUNC_6(kcondvar_t *VAR_5, kmutex_t *VAR_6, clock_t VAR_7)
{
 int VAR_8;
 struct timespec VAR_9;
 struct timeval VAR_10;
 clock_t VAR_11;

 VAR_7 += FUNC_2();
top:
 VAR_11 = VAR_7 - FUNC_2();
 if (VAR_11 <= 0)
  return (-1);

 if (FUNC_3(&VAR_10, ((void*)0)) != 0)
  FUNC_1(!"gettimeofday() failed");

 VAR_9.tv_sec = VAR_10.tv_sec + VAR_11 / VAR_4;
 VAR_9.tv_nsec = VAR_10.tv_usec * 1000 + (VAR_11 % VAR_4) * (VAR_2 / VAR_4);
 FUNC_0(VAR_9.tv_nsec >= 0);

 if (VAR_9.tv_nsec >= VAR_2) {
  VAR_9.tv_sec++;
  VAR_9.tv_nsec -= VAR_2;
 }

 FUNC_0(FUNC_4(VAR_6) == VAR_3);
 VAR_6->m_owner = ((void*)0);
 VAR_8 = FUNC_5(VAR_5, &VAR_6->m_lock, &VAR_9);
 VAR_6->m_owner = VAR_3;

 if (VAR_8 == VAR_0)
  goto top;

 if (VAR_8 == VAR_1)
  return (-1);

 FUNC_0(VAR_8 == 0);

 return (1);
}
