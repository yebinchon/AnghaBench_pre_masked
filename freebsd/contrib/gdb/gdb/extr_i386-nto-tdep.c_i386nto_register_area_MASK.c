
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned int FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1 (int VAR_7, int VAR_8, unsigned *VAR_9)
{
  int VAR_10;

  *VAR_9 = 0;
  if (VAR_8 == VAR_2)
    {
      if (VAR_7 == -1)
 return VAR_3 * 4;

      *VAR_9 = FUNC_0 (VAR_7);
      if (*VAR_9 == -1)
 return 0;
      return 4;
    }
  else if (VAR_8 == VAR_1)
    {
      unsigned VAR_11, VAR_12, VAR_13;

      if (VAR_6 && VAR_5 | VAR_4)
 {
   VAR_11 = 32;
   VAR_12 = 16;
   VAR_13 = 512;
 }
      else
 {
   VAR_11 = 28;
   VAR_12 = 10;
   VAR_13 = 128;
 }

      if (VAR_7 == -1)
 return VAR_13;

      *VAR_9 = (VAR_7 - VAR_0) * VAR_12 + VAR_11;
      return 10;




    }
  return -1;
}
