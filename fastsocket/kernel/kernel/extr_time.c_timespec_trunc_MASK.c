
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {unsigned int tv_nsec; } ;


 int FUNC_0 (int) ;

struct timespec FUNC_1(struct timespec VAR_0, unsigned VAR_1)
{





 if (VAR_1 <= FUNC_0(1) * 1000) {

 } else if (VAR_1 == 1000000000) {
  VAR_0.tv_nsec = 0;
 } else {
  VAR_0.tv_nsec -= VAR_0.tv_nsec % VAR_1;
 }
 return VAR_0;
}
