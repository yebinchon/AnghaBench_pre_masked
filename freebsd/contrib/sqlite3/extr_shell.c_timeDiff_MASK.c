
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {double tv_usec; scalar_t__ tv_sec; } ;



__attribute__((used)) static double FUNC_0(struct timeval *VAR_0, struct timeval *VAR_1){
  return (VAR_1->tv_usec - VAR_0->tv_usec)*0.000001 +
         (double)(VAR_1->tv_sec - VAR_0->tv_sec);
}
