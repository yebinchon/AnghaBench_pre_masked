
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {long tv_sec; long tv_usec; } ;
typedef long int64_t ;


 long const VAR_0 ;

struct timeval
FUNC_0(const int64_t VAR_1)
{
        struct timeval VAR_2;
 long VAR_3;

 if (VAR_1 == 0) {
  VAR_2.tv_sec = 0;
  VAR_2.tv_usec = 0;
  return (VAR_2);
 }

        VAR_2.tv_sec = VAR_1 / VAR_0;
 VAR_3 = VAR_1 % VAR_0;
        if (VAR_3 < 0) {
                VAR_2.tv_sec--;
                VAR_3 += VAR_0;
        }
 VAR_2.tv_usec = VAR_3 / 1000;
        return (VAR_2);
}
