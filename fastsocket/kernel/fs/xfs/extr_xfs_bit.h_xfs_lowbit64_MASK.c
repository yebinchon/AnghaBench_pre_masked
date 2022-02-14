
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __uint64_t ;
typedef scalar_t__ __uint32_t ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline int FUNC_1(__uint64_t VAR_0)
{
 __uint32_t VAR_1 = (__uint32_t)VAR_0;
 int VAR_2 = 0;

 if (VAR_1) {
  VAR_2 = FUNC_0(VAR_1);
 } else {
  VAR_1 = (__uint32_t)(VAR_0 >> 32);
  if (VAR_1 && (VAR_2 = FUNC_0(VAR_1)))
  VAR_2 += 32;
 }
 return VAR_2 - 1;
}
