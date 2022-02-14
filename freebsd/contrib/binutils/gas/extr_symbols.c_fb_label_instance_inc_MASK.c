
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 int* VAR_3 ;
 long VAR_4 ;
 long* VAR_5 ;
 int * VAR_6 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char*,long) ;

void
FUNC_2 (long VAR_7)
{
  long *VAR_8;

  if (VAR_7 < VAR_1)
    {
      ++VAR_6[VAR_7];
      return;
    }

  if (VAR_5 != ((void*)0))
    {
      for (VAR_8 = VAR_5 + VAR_1;
    VAR_8 < VAR_5 + VAR_2; ++VAR_8)
 {
   if (*VAR_8 == VAR_7)
     {
       ++VAR_3[VAR_8 - VAR_5];
       return;
     }
 }
    }



  if (VAR_5 == ((void*)0))
    {
      VAR_5 = (long *) FUNC_0 (VAR_0 * sizeof (long));
      VAR_3 = (long *) FUNC_0 (VAR_0 * sizeof (long));
      VAR_4 = VAR_0;
      VAR_2 = VAR_1;

    }
  else if (VAR_2 == VAR_4)
    {
      VAR_4 += VAR_0;
      VAR_5 = (long *) FUNC_1 ((char *) VAR_5,
         VAR_4 * sizeof (long));
      VAR_3 = (long *) FUNC_1 ((char *) VAR_3,
           VAR_4 * sizeof (long));
    }

  VAR_5[VAR_2] = VAR_7;
  VAR_3[VAR_2] = 1;
  ++VAR_2;
}
