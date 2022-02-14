
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int* VAR_3 ;
 int VAR_4 ;
 long* VAR_5 ;
 char* FUNC_0 (int) ;
 char* FUNC_1 (char*,int) ;

void
FUNC_2 (long VAR_6)
{
  long *VAR_7;

  for (VAR_7 = VAR_5; VAR_7 < VAR_5 + VAR_1; ++VAR_7)
    if (*VAR_7 == VAR_6)
      {
 ++VAR_3[VAR_7 - VAR_5];
 VAR_2[VAR_7 - VAR_5] = 1;
 return;
      }



  if (VAR_5 == ((void*)0))
    {
      VAR_5 = (long *) FUNC_0 (VAR_0 * sizeof (long));
      VAR_3 = (long *) FUNC_0 (VAR_0 * sizeof (long));
      VAR_2 = FUNC_0 (VAR_0);
      VAR_4 = VAR_0;
      VAR_1 = 0;
    }
  else if (VAR_1 == VAR_4)
    {
      VAR_4 += VAR_0;
      VAR_5 = (long *) FUNC_1 ((char *) VAR_5,
      VAR_4 * sizeof (long));
      VAR_3 = (long *) FUNC_1 ((char *) VAR_3,
       VAR_4 * sizeof (long));
      VAR_2 = FUNC_1 (VAR_2, VAR_4);
    }

  VAR_5[VAR_1] = VAR_6;
  VAR_3[VAR_1] = 1;
  VAR_2[VAR_1] = 1;
  ++VAR_1;
}
