
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
struct timespec {unsigned long tv_sec; int tv_nsec; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;

unsigned long
FUNC_0(const struct timespec *VAR_6)
{
 unsigned long VAR_7 = VAR_6->tv_sec;
 long VAR_8 = VAR_6->tv_nsec + VAR_5 - 1;

 if (VAR_7 >= VAR_0){
  VAR_7 = VAR_0;
  VAR_8 = 0;
 }
 return (((u64)VAR_7 * VAR_3) +
  (((u64)VAR_8 * VAR_1) >>
   (VAR_2 - VAR_4))) >> VAR_4;

}
