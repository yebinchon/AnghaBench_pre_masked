
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;

__attribute__((used)) static inline unsigned long FUNC_0(unsigned long VAR_1,
        const void *VAR_2, int VAR_3)
{
 const unsigned char *VAR_4 = (const unsigned char *)VAR_2;
 unsigned long VAR_5 = VAR_1 & 0xffff;
 unsigned long VAR_6 = (VAR_1 >> 16) & 0xffff;

 while (VAR_3 > 0) {
  unsigned VAR_7 = VAR_3 < 5552 ? VAR_3 : 5552;
  VAR_3 -= VAR_7;

  while (VAR_7 >= 8) {
   VAR_5 += *VAR_4++; VAR_6 += VAR_5;
   VAR_5 += *VAR_4++; VAR_6 += VAR_5;
   VAR_5 += *VAR_4++; VAR_6 += VAR_5;
   VAR_5 += *VAR_4++; VAR_6 += VAR_5;
   VAR_5 += *VAR_4++; VAR_6 += VAR_5;
   VAR_5 += *VAR_4++; VAR_6 += VAR_5;
   VAR_5 += *VAR_4++; VAR_6 += VAR_5;
   VAR_5 += *VAR_4++; VAR_6 += VAR_5;
   VAR_7 -= 8;
  }

  while (VAR_7-- > 0) {
   VAR_5 += *VAR_4++; VAR_6 += VAR_5;
  }
  VAR_5 = VAR_5 % VAR_0;
  VAR_6 = VAR_6 % VAR_0;
 }
 return (VAR_6 << 16) + VAR_5;
}
