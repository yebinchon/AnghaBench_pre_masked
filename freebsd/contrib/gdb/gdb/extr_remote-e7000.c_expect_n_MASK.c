
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int VAR_2 ;
 int FUNC_6 (int) ;

__attribute__((used)) static int
FUNC_7 (char **VAR_3)
{
  char *(VAR_4[10]);
  int VAR_5;
  int VAR_6;
  char VAR_7[100];
  char *VAR_8 = VAR_7;


  for (VAR_5 = 0; VAR_3[VAR_5]; VAR_5++)
    {
      VAR_4[VAR_5] = VAR_3[VAR_5];
    }

  while (1)
    {
      int VAR_9;
      int VAR_10 = 0;

      VAR_6 = FUNC_6 (1);
      if (VAR_6 == -1)
 {
   FUNC_3 ("[waiting for e7000...]\n");
 }
      if (VAR_2)
 {
   FUNC_4 (VAR_0);
   VAR_2 = 0;
 }

      for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++)
 {
   if (VAR_6 == VAR_4[VAR_9][0])
     {
       VAR_4[VAR_9]++;
       if (VAR_4[VAR_9][0] == 0)
  {

    return VAR_9;
  }
       VAR_10 = 1;
     }
   else
     {
       VAR_4[VAR_9] = VAR_3[VAR_9];
     }
 }

      if (VAR_10)
 {

   *VAR_8++ = VAR_6;
 }
      else
 {
   if (VAR_8 != VAR_7)
     {
       *VAR_8++ = 0;
       FUNC_3 ("%s", VAR_8);
       VAR_8 = VAR_7;
     }
   if (VAR_6 != -1)
     {
       FUNC_5 (VAR_6);
       FUNC_0 (VAR_1);
     }
 }
    }
}
