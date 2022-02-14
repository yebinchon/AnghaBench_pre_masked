
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static inline uint8_t FUNC_0(void *VAR_0, int VAR_1)
{
 int VAR_2;
 uint8_t *VAR_3 = VAR_0;
 uint8_t VAR_4 = 0;

 for (VAR_2 = 0; VAR_2 < VAR_1; ++VAR_2)
  VAR_4 ^= VAR_3[VAR_2];

 return ~VAR_4;
}
