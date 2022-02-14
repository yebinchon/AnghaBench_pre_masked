
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long VAR_0 ;
 int VAR_1 ;
 long* VAR_2 ;
 long* VAR_3 ;
 long* VAR_4 ;

__attribute__((used)) static long
FUNC_0 (long VAR_5)
{
  long *VAR_6;

  if (VAR_5 < VAR_0)
    {
      return (VAR_4[VAR_5]);
    }

  if (VAR_3 != ((void*)0))
    {
      for (VAR_6 = VAR_3 + VAR_0;
    VAR_6 < VAR_3 + VAR_1; ++VAR_6)
 {
   if (*VAR_6 == VAR_5)
     {
       return (VAR_2[VAR_6 - VAR_3]);
     }
 }
    }



  return 0;
}
