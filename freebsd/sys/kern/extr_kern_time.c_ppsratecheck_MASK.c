
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct timeval {int tv_sec; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

int
FUNC_0(struct timeval *VAR_2, int *VAR_3, int VAR_4)
{
 int VAR_5;






 VAR_5 = VAR_1;
 if (VAR_2->tv_sec == 0 || (u_int)(VAR_5 - VAR_2->tv_sec) >= VAR_0) {
  VAR_2->tv_sec = VAR_5;
  *VAR_3 = 1;
  return (VAR_4 != 0);
 } else {
  (*VAR_3)++;
  return (VAR_4 < 0 || *VAR_3 <= VAR_4);
 }
}
