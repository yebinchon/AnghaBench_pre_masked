
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;


 int FUNC_0 (struct timeval*) ;

__attribute__((used)) static __inline uint64_t FUNC_1(void)
{
 struct timeval VAR_0;

 FUNC_0(&VAR_0);

 return ((uint64_t)(((uint64_t)VAR_0.tv_sec) * 1000000 + VAR_0.tv_usec));
}
