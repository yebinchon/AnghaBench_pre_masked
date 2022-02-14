
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
struct timeval {unsigned long tv_sec; long tv_usec; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;

unsigned long
FUNC_0(const struct timeval *VAR_6)
{
 unsigned long VAR_7 = VAR_6->tv_sec;
 long VAR_8 = VAR_6->tv_usec;

 if (VAR_7 >= VAR_0){
  VAR_7 = VAR_0;
  VAR_8 = 0;
 }
 return (((u64)VAR_7 * VAR_1) +
  (((u64)VAR_8 * VAR_3 + VAR_5) >>
   (VAR_4 - VAR_2))) >> VAR_2;
}
