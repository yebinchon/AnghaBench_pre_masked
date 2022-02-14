
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_usec; } ;


 int VAR_0 ;

__attribute__((used)) static inline int
FUNC_0(const struct timeval *VAR_1, const struct timeval *VAR_2)
{
 return (VAR_1->tv_usec & ~VAR_0) ==
     (VAR_2->tv_usec & ~VAR_0);
}
