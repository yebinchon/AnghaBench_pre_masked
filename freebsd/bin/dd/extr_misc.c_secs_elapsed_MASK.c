
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timespec {int tv_sec; int tv_nsec; } ;
struct TYPE_3__ {int tv_sec; int tv_nsec; } ;
struct TYPE_4__ {TYPE_1__ start; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,struct timespec*) ;
 scalar_t__ FUNC_1 (int ,struct timespec*) ;
 int FUNC_2 (int,char*) ;
 TYPE_2__ VAR_1 ;

double
FUNC_3(void)
{
 struct timespec VAR_2, VAR_3;
 double VAR_4, VAR_5;

 if (FUNC_1(VAR_0, &VAR_2))
  FUNC_2(1, "clock_gettime");
 if (FUNC_0(VAR_0, &VAR_3))
  FUNC_2(1, "clock_getres");
 VAR_4 = (VAR_2.tv_sec - VAR_1.start.tv_sec) + (VAR_2.tv_nsec - VAR_1.start.tv_nsec) * 1e-9;

 VAR_5 = VAR_3.tv_sec + VAR_3.tv_nsec * 1e-9;
 if (VAR_4 < VAR_5)
  VAR_4 = VAR_5;

 return (VAR_4);
}
