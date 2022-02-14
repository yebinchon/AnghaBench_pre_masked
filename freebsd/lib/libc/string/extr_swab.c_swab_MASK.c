
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 int VAR_0 ;

void
FUNC_0(const void * __restrict VAR_1, void * __restrict VAR_2, ssize_t VAR_3)
{
 unsigned long VAR_4;
 int VAR_5;
 char *VAR_6, *VAR_7;

 if (VAR_3 <= 0)
  return;
 VAR_5 = VAR_3 >> 1;
 VAR_6 = (char *)VAR_1;
 VAR_7 = (char *)VAR_2;


 for (; VAR_5 & 0x7; --VAR_5)
  VAR_4 = *VAR_6++,*VAR_7++ = *VAR_6++,*VAR_7++ = VAR_4;
 for (VAR_5 >>= 3; VAR_5 > 0; --VAR_5) {
  VAR_4 = *VAR_6++,*VAR_7++ = *VAR_6++,*VAR_7++ = VAR_4; VAR_4 = *VAR_6++,*VAR_7++ = *VAR_6++,*VAR_7++ = VAR_4; VAR_4 = *VAR_6++,*VAR_7++ = *VAR_6++,*VAR_7++ = VAR_4; VAR_4 = *VAR_6++,*VAR_7++ = *VAR_6++,*VAR_7++ = VAR_4;
  VAR_4 = *VAR_6++,*VAR_7++ = *VAR_6++,*VAR_7++ = VAR_4; VAR_4 = *VAR_6++,*VAR_7++ = *VAR_6++,*VAR_7++ = VAR_4; VAR_4 = *VAR_6++,*VAR_7++ = *VAR_6++,*VAR_7++ = VAR_4; VAR_4 = *VAR_6++,*VAR_7++ = *VAR_6++,*VAR_7++ = VAR_4;
 }
}
