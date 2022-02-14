
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 scalar_t__ VAR_4 ;
 int* VAR_5 ;
 int* VAR_6 ;

long int
FUNC_0 (void)
{
  if (VAR_4 == VAR_1)
    {
      VAR_6[0] = ((VAR_6[0] * 1103515245) + 12345) & VAR_0;
      return VAR_6[0];
    }
  else
    {
      long int VAR_7;
      *VAR_3 += *VAR_5;

      VAR_7 = (*VAR_3 >> 1) & VAR_0;
      ++VAR_3;
      if (VAR_3 >= VAR_2)
 {
   VAR_3 = VAR_6;
   ++VAR_5;
 }
      else
 {
   ++VAR_5;
   if (VAR_5 >= VAR_2)
     VAR_5 = VAR_6;
 }
      return VAR_7;
    }
}
