
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {double tv_sec; double tv_usec; } ;
struct cpu_usage_timer {double ticksBegin; int timeBegin; int kerneltimeBegin; int usertimeBegin; int thread; } ;
typedef double clock_t ;
typedef int FILETIME ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int *,int *,int *,int *) ;
 double FUNC_1 () ;
 int FUNC_2 (struct timeval*,int *) ;
 int FUNC_3 (struct timeval*,int *,struct timeval*) ;
 double FUNC_4 (int *,int *) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void
FUNC_6(struct cpu_usage_timer *VAR_1, double *VAR_2,
    double *VAR_3, double *VAR_4)
{





 clock_t VAR_5;

 struct timeval VAR_6, VAR_7;
 double VAR_8, VAR_9;
 VAR_5 = FUNC_1();
 VAR_9 = (VAR_5 - VAR_1->ticksBegin) / (double)VAR_0;

 FUNC_2(&VAR_6, ((void*)0));
 FUNC_3(&VAR_6, &VAR_1->timeBegin, &VAR_7);
 VAR_8 = VAR_7.tv_sec + (VAR_7.tv_usec / 1.0e6);

 *VAR_2 = VAR_8;
 *VAR_3 = VAR_9;
 *VAR_4 = VAR_9 / VAR_8;
}
