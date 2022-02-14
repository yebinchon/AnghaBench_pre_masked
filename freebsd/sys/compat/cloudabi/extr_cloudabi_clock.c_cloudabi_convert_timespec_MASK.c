
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {scalar_t__ tv_sec; int tv_nsec; } ;
typedef int cloudabi_timestamp_t ;


 int VAR_0 ;
 int VAR_1 ;

int
FUNC_0(const struct timespec *VAR_2, cloudabi_timestamp_t *VAR_3)
{
 cloudabi_timestamp_t VAR_4, VAR_5;

 if (VAR_2->tv_sec < 0) {

  *VAR_3 = 0;
  return (VAR_0);
 }
 VAR_4 = VAR_2->tv_sec;
 VAR_5 = VAR_2->tv_nsec;
 if (VAR_4 > VAR_1 / 1000000000 ||
     (VAR_4 == VAR_1 / 1000000000 && VAR_5 > VAR_1 % 1000000000)) {

  *VAR_3 = VAR_1;
  return (VAR_0);
 }
 *VAR_3 = VAR_4 * 1000000000 + VAR_5;
 return (0);
}
