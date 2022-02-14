
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;

int
FUNC_1(unsigned char *VAR_1, size_t VAR_2, size_t *VAR_3)
{
 int VAR_4;

 *VAR_3 = 0;

 while (*VAR_3 < VAR_2) {
  VAR_4 = FUNC_0();
  if (VAR_4 == VAR_0)
   break;

  if (VAR_4 == '}') {

   if ((VAR_4 = FUNC_0()) == VAR_0)
    return (1);
   VAR_4 ^= 0x20;
  }
  *(VAR_1++) = VAR_4 & 0xff;
  (*VAR_3)++;
 }

 return (0);
}
