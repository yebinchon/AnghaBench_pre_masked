
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int tv_nsec; scalar_t__ tv_sec; } ;
typedef TYPE_1__ timespec_t ;
struct TYPE_8__ {int * m_owner; int m_lock; } ;
typedef TYPE_2__ kmutex_t ;
typedef int kcondvar_t ;
typedef int hrtime_t ;
typedef int clock_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int * VAR_5 ;
 scalar_t__ FUNC_2 () ;
 int * FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *,int *,TYPE_1__*) ;

clock_t
FUNC_5(kcondvar_t *VAR_6, kmutex_t *VAR_7, hrtime_t VAR_8, hrtime_t VAR_9,
    int VAR_10)
{
 int VAR_11;
 timespec_t VAR_12;
 hrtime_t VAR_13;

 FUNC_0(VAR_10 == 0 || VAR_10 == VAR_0);

top:
 VAR_13 = VAR_8;
 if (VAR_10 & VAR_0)
  VAR_13 -= FUNC_2();

 if (VAR_13 <= 0)
  return (-1);

 FUNC_1(VAR_1, &VAR_12);
 VAR_12.tv_sec += VAR_13 / VAR_4;
 VAR_12.tv_nsec += VAR_13 % VAR_4;
 if (VAR_12.tv_nsec >= VAR_4) {
  VAR_12.tv_sec++;
  VAR_12.tv_nsec -= VAR_4;
 }

 FUNC_0(FUNC_3(VAR_7) == VAR_5);
 VAR_7->m_owner = ((void*)0);
 VAR_11 = FUNC_4(VAR_6, &VAR_7->m_lock, &VAR_12);
 VAR_7->m_owner = VAR_5;

 if (VAR_11 == VAR_3)
  return (-1);

 if (VAR_11 == VAR_2)
  goto top;

 FUNC_0(VAR_11 == 0);

 return (1);
}
