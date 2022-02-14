
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {long tv_sec; long tv_usec; } ;


 int FUNC_0 (char*,long) ;
 int FUNC_1 (struct timeval*,long) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3(
  long VAR_1
  )
{
 struct timeval VAR_2;

 if (VAR_0)
     return;

 VAR_2.tv_sec = VAR_1 / 1000000;
 VAR_2.tv_usec = VAR_1 % 1000000;

 FUNC_0("adj_time: %ld us ", (long int)VAR_1);
 if (FUNC_1(&VAR_2, 0L) == -1)
     FUNC_2("adjtime()");
}
