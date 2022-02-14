
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {long tv_sec; long tv_nsec; } ;



int
FUNC_0(struct timespec VAR_0, struct timespec VAR_1) {
 long VAR_2 = VAR_0.tv_sec - VAR_1.tv_sec;

 if (VAR_2 == 0L)
  VAR_2 = VAR_0.tv_nsec - VAR_1.tv_nsec;
 return (VAR_2 < 0L ? (-1) : VAR_2 > 0L ? (1) : (0));
}
