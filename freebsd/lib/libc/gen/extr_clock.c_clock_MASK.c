
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rusage {int ru_stime; int ru_utime; } ;
typedef int clock_t ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,struct rusage*) ;

clock_t
FUNC_2(void)
{
 struct rusage VAR_1;

 if (FUNC_1(VAR_0, &VAR_1))
  return ((clock_t) -1);
 return((clock_t)((FUNC_0(VAR_1.ru_utime) + FUNC_0(VAR_1.ru_stime))));
}
