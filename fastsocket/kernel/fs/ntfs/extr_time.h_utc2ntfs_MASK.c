
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int tv_nsec; scalar_t__ tv_sec; } ;
typedef int sle64 ;
typedef int s64 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline sle64 FUNC_1(const struct timespec VAR_1)
{




 return FUNC_0((s64)VAR_1.tv_sec * 10000000 + VAR_1.tv_nsec / 100 +
   VAR_0);
}
