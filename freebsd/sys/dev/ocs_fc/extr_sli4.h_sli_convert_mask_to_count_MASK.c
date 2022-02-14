
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline uint32_t
FUNC_1(uint32_t VAR_0, uint32_t VAR_1)
{
 uint32_t VAR_2 = 0;

 if (VAR_0) {
  VAR_2 = 1 << FUNC_0(VAR_1);
  VAR_2 *= 16;
 } else {
  VAR_2 = VAR_1;
 }

 return VAR_2;
}
