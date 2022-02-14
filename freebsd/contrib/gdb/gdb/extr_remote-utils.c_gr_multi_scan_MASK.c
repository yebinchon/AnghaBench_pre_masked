
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;

int
FUNC_4 (char *VAR_2[], int VAR_3)
{
  char *VAR_4 = ((void*)0);
  char *VAR_5 = VAR_4;
  int VAR_6;
  int VAR_7;
  int VAR_8;
  int VAR_9;
  int VAR_10;
  char **VAR_11;




  for (VAR_10 = VAR_9 = VAR_8 = 0;
       VAR_2[VAR_8] != ((void*)0);
       ++VAR_8, ++VAR_9)
    {
      int VAR_12 = FUNC_3 (VAR_2[VAR_8]);

      if (VAR_12 > VAR_10)
 VAR_10 = VAR_12;
    }


  if (VAR_9 == 0)
    return (-1);



  VAR_5 = VAR_4 = FUNC_0 (VAR_10 << 1);


  VAR_11 = (char **) FUNC_0 (VAR_9 * sizeof (*VAR_11));


  for (VAR_8 = 0; VAR_8 < VAR_9; ++VAR_8)
    VAR_11[VAR_8] = VAR_2[VAR_8];

  for (VAR_6 = FUNC_2 (); ; VAR_6 = FUNC_2 ())
    {
      VAR_0;
      VAR_7 = 0;

      for (VAR_8 = 0; VAR_8 < VAR_9; ++VAR_8)
 {
   if (VAR_6 == *VAR_11[VAR_8] || *VAR_11[VAR_8] == '?')
     {
       ++VAR_11[VAR_8];
       if (*VAR_11[VAR_8] == '\0')
  return (VAR_8);

       if (!VAR_7)
  *VAR_5++ = VAR_6;

       VAR_7 = 1;
     }
   else
     VAR_11[VAR_8] = VAR_2[VAR_8];
 }

      if (!VAR_7)
 {
   char *VAR_13;


   if (VAR_3)
     {
       for (VAR_13 = VAR_4; VAR_13 < VAR_5; ++VAR_13)
  FUNC_1 (*VAR_13, VAR_1);

       FUNC_1 (VAR_6, VAR_1);
     }

   VAR_5 = VAR_4;
 }
    }




}
