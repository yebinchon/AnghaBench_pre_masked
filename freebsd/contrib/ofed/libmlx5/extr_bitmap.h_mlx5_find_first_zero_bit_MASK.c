
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int FUNC_0 (unsigned long) ;

__attribute__((used)) static inline uint32_t FUNC_1(const unsigned long *VAR_1,
      uint32_t VAR_2)
{
 const unsigned long *VAR_3 = VAR_1;
 uint32_t VAR_4 = 0;
 unsigned long VAR_5;

 while (VAR_2 & ~(VAR_0 - 1)) {
  VAR_5 = *(VAR_3++);
  if (~VAR_5)
   goto found;
  VAR_4 += VAR_0;
  VAR_2 -= VAR_0;
 }
 if (!VAR_2)
  return VAR_4;

 VAR_5 = (*VAR_3) | (~0UL << VAR_2);
 if (VAR_5 == (uint32_t)~0UL)
  return VAR_4 + VAR_2;
found:
 return VAR_4 + FUNC_0(VAR_5);
}
