
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int64_t ;
struct timeval {int tv_usec; scalar_t__ tv_sec; } ;


 int VAR_0 ;
 int FUNC_0 (struct timeval*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct timeval*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;

u_int64_t
FUNC_4(void)
{
 u_int64_t VAR_2;

 if (VAR_1) {

  VAR_2 = FUNC_3();



 } else {
  struct timeval VAR_3, VAR_4;

  FUNC_1(&VAR_3);
  FUNC_0(&VAR_4);
  VAR_2 = (((u_int64_t)(VAR_3.tv_sec - VAR_4.tv_sec) * 1000000
      + VAR_3.tv_usec) << VAR_0);
 }
 return (VAR_2);
}
