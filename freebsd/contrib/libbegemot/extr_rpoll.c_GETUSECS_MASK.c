
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tval_t ;
struct timeval {int tv_usec; scalar_t__ tv_sec; } ;


 int FUNC_0 (struct timeval*,int *) ;

__attribute__((used)) static inline tval_t
FUNC_1(void) {
 struct timeval VAR_0;

 (void)FUNC_0(&VAR_0, ((void*)0));
 return (tval_t)VAR_0.tv_sec * 1000000 + VAR_0.tv_usec;
}
