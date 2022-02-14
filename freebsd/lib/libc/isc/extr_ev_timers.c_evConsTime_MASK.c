
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct timespec {long tv_nsec; int tv_sec; } ;



struct timespec
FUNC_0(time_t VAR_0, long VAR_1) {
 struct timespec VAR_2;

 VAR_2.tv_sec = VAR_0;
 VAR_2.tv_nsec = VAR_1;
 return (VAR_2);
}
