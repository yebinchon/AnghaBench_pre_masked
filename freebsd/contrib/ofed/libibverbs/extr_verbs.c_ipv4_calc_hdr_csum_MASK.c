
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
typedef int __sum16 ;



__attribute__((used)) static inline __sum16 FUNC_0(uint16_t *VAR_0, unsigned int VAR_1)
{
 unsigned int VAR_2 = 0;
 uint32_t VAR_3 = 0;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
  VAR_3 += *(VAR_0++);

 VAR_3 = (VAR_3 & 0xffff) + (VAR_3 >> 16);

 return (__sum16)~VAR_3;
}
