
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const) ;
 int VAR_1 ;
 char* VAR_2 ;
 char* FUNC_2 (int) ;
 char* FUNC_3 (char*,char*,char*,int *) ;
 char* VAR_3 ;
 scalar_t__ FUNC_4 (char const*) ;
 int FUNC_5 (char*,int,...) ;
 int FUNC_6 (char*,char const*) ;
 char* FUNC_7 (char const*,int ) ;
 int FUNC_8 (char*,char const*) ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (char*,char const*,int) ;
 int FUNC_11 (char*) ;
 char* FUNC_12 (char*) ;

int
FUNC_13 (const char *VAR_4, int VAR_5, const char *VAR_6,
       int VAR_7, int VAR_8,
       char **VAR_9)
{
  int VAR_10;
  char *VAR_11;
  const char *VAR_12;
  const char *VAR_13;
  int VAR_14;
  int VAR_15;

  if (!VAR_4)
    VAR_4 = ".";





  if (VAR_5 || FUNC_0 (VAR_6))
    {
      int VAR_16;

      if (FUNC_4 (VAR_6))
 {
   VAR_11 = FUNC_2 (FUNC_9 (VAR_6) + 1);
   FUNC_8 (VAR_11, VAR_6);
   VAR_10 = FUNC_5 (VAR_11, VAR_7, VAR_8);
   if (VAR_10 >= 0)
     goto done;
 }
      else
 {
   VAR_11 = ((void*)0);
   VAR_10 = -1;
 }

      for (VAR_16 = 0; VAR_6[VAR_16]; VAR_16++)
 if (FUNC_1 (VAR_6[VAR_16]))
   goto done;
    }


  while (VAR_6[0] == '.' && FUNC_1 (VAR_6[1]))
    VAR_6 += 2;

  VAR_15 = FUNC_9 (VAR_4) + FUNC_9 (VAR_6) + 2;
  VAR_11 = FUNC_2 (VAR_15);
  VAR_10 = -1;
  for (VAR_12 = VAR_4; VAR_12; VAR_12 = VAR_13 ? VAR_13 + 1 : 0)
    {
      VAR_13 = FUNC_7 (VAR_12, VAR_0);
      if (VAR_13)
 VAR_14 = VAR_13 - VAR_12;
      else
 VAR_14 = FUNC_9 (VAR_12);

      if (VAR_14 == 4 && VAR_12[0] == '$' && VAR_12[1] == 'c'
   && VAR_12[2] == 'w' && VAR_12[3] == 'd')
 {

   int VAR_17;


   VAR_14 = FUNC_9 (VAR_3);
   VAR_17 = VAR_14 + FUNC_9 (VAR_6) + 2;
   if (VAR_17 > VAR_15)
     {
       VAR_15 = VAR_17;
       VAR_11 = FUNC_2 (VAR_15);
     }
   FUNC_8 (VAR_11, VAR_3);
 }
      else
 {

   FUNC_10 (VAR_11, VAR_12, VAR_14);
   VAR_11[VAR_14] = 0;
 }


      while (VAR_14 > 0 && FUNC_1 (VAR_11[VAR_14 - 1]))
 VAR_11[--VAR_14] = 0;

      FUNC_6 (VAR_11 + VAR_14, VAR_2);
      FUNC_6 (VAR_11, VAR_6);

      if (FUNC_4 (VAR_11))
      {
        VAR_10 = FUNC_5 (VAR_11, VAR_7);
        if (VAR_10 >= 0)
          break;
      }
    }

done:
  if (VAR_9)
    {





      if (VAR_10 < 0)
 *VAR_9 = ((void*)0);
      else if (FUNC_0 (VAR_11))
 *VAR_9 = FUNC_12 (VAR_11);
      else
 {


   char *VAR_18 = FUNC_3 (VAR_3,
           FUNC_1 (VAR_3[FUNC_9 (VAR_3) - 1])
         ? "" : VAR_2,
         VAR_11, ((void*)0));
   *VAR_9 = FUNC_12 (VAR_18);
   FUNC_11 (VAR_18);
 }
    }

  return VAR_10;
}
