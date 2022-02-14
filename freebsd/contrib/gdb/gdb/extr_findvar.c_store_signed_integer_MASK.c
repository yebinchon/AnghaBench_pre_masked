
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LONGEST ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

void
FUNC_0 (void *VAR_2, int VAR_3, LONGEST VAR_4)
{
  unsigned char *VAR_5;
  unsigned char *VAR_6 = (unsigned char *) VAR_2;
  unsigned char *VAR_7 = VAR_6 + VAR_3;



  if (VAR_1 == VAR_0)
    {
      for (VAR_5 = VAR_7 - 1; VAR_5 >= VAR_6; --VAR_5)
 {
   *VAR_5 = VAR_4 & 0xff;
   VAR_4 >>= 8;
 }
    }
  else
    {
      for (VAR_5 = VAR_6; VAR_5 < VAR_7; ++VAR_5)
 {
   *VAR_5 = VAR_4 & 0xff;
   VAR_4 >>= 8;
 }
    }
}
