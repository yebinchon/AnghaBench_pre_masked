
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static inline uint32_t FUNC_0(uint32_t VAR_0)
{
 int VAR_1;
 int VAR_2;
 int VAR_3;

 VAR_2 = 0;
 VAR_3 = 0;

 for (VAR_1 = 0; VAR_1 < 32; VAR_1++) {
  if ((1 << VAR_1) & VAR_0) {
   VAR_2++;
   VAR_3 = VAR_1;
  }
 }

 if (VAR_2 == 1)
  return VAR_3;

 return 0;
}
