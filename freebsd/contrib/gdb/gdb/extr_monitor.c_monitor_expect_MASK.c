
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*,char*,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (char*,char*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int VAR_3 ;

int
FUNC_6 (char *VAR_4, char *VAR_5, int VAR_6)
{
  char *VAR_7 = VAR_4;
  int VAR_8 = VAR_6;
  int VAR_9;

  if (VAR_2)
    {
      char *VAR_10 = (char *) FUNC_0 ((FUNC_5 (VAR_4) * 4) + 1);
      FUNC_3 (VAR_10, VAR_4, 0);
      FUNC_1 (VAR_0, "MON Expecting '%s'\n", VAR_10);
    }

  VAR_1++;
  while (1)
    {
      if (VAR_5)
 {
   if (VAR_6 < 2)
     {
       *VAR_5 = '\000';
       VAR_1--;
       return -1;
     }

   VAR_9 = FUNC_4 (VAR_3);
   if (VAR_9 == '\000')
     continue;
   *VAR_5++ = VAR_9;
   VAR_6--;
 }
      else
 VAR_9 = FUNC_4 (VAR_3);



      if (*VAR_7 == '\003' || VAR_9 == *VAR_7)
 {
   VAR_7++;
   if (*VAR_7 == '\0')
     {
       VAR_1--;

       if (VAR_5)
  {
    *VAR_5++ = '\000';
    return VAR_8 - VAR_6;
  }
       else
  return 0;
     }
 }
      else
 {
   int VAR_11;

   for (VAR_11 = (VAR_7 - VAR_4) - 1; VAR_11 >= 0; VAR_11--)
     if (VAR_4[VAR_11] == VAR_9)
       {



  if (! FUNC_2 (VAR_4, VAR_7 - VAR_11, VAR_11))
    {
      VAR_7 = VAR_4 + VAR_11 + 1;
      break;
    }
       }
   if (VAR_11 < 0)
     VAR_7 = VAR_4;
 }
    }
}
