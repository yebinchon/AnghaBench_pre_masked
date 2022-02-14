
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 char VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char) ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_2 (char*,char*,char*,...) ;
 char* VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,char*) ;
 int VAR_6 ;
 int FUNC_4 (int (*) (char*),char*) ;
 int FUNC_5 (char*,int) ;
 char* FUNC_6 (char*,int) ;
 scalar_t__ FUNC_7 (char*,struct stat*) ;
 char* FUNC_8 (char*,char) ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*,char*,unsigned int) ;
 char* FUNC_12 (char*) ;
 int FUNC_13 (char*,char*) ;
 int FUNC_14 (char*) ;
 char* FUNC_15 (char*) ;

void
FUNC_16 (char *VAR_7, char **VAR_8, int VAR_9)
{
  char *VAR_10 = *VAR_8;
  int VAR_11 = 0;

  if (VAR_7 == 0)
    return;

  VAR_7 = FUNC_15 (VAR_7);
  FUNC_4 (FUNC_14, VAR_7);

  do
    {
      char *VAR_12 = VAR_7;
      char *VAR_13;
      struct stat VAR_14;

      {
 char *VAR_15 = ((void*)0);
 char *VAR_16 = ((void*)0);
 char *VAR_17 = ((void*)0);

 if (VAR_9)
   {
     VAR_15 = FUNC_8 (VAR_12, VAR_0);
     VAR_16 = FUNC_8 (VAR_12, ' ');
     VAR_17 = FUNC_8 (VAR_12, '\t');
   }

 if (VAR_15 == 0 && VAR_16 == 0 && VAR_17 == 0)
   VAR_13 = VAR_7 = VAR_12 + FUNC_10 (VAR_12);
 else
   {
     VAR_13 = 0;
     if (VAR_15 != 0 && (VAR_13 == 0 || VAR_15 < VAR_13))
       VAR_13 = VAR_15;
     if (VAR_16 != 0 && (VAR_13 == 0 || VAR_16 < VAR_13))
       VAR_13 = VAR_16;
     if (VAR_17 != 0 && (VAR_13 == 0 || VAR_17 < VAR_13))
       VAR_13 = VAR_17;
     VAR_7 = VAR_13 + 1;
     while (*VAR_7 == VAR_0
     || *VAR_7 == ' '
     || *VAR_7 == '\t')
       ++VAR_7;
   }
      }

      if (!(FUNC_1 (*VAR_12) && VAR_13 <= VAR_12 + 1)




   && FUNC_1 (VAR_13[-1]))

 --VAR_13;
      *VAR_13 = '\0';

      while (VAR_13 > VAR_12 && VAR_13[-1] == '.')
 {
   if (VAR_13 - VAR_12 == 1)
     {

       VAR_12 = VAR_4;
       goto append;
     }
   else if (VAR_13 > VAR_12 + 1 && FUNC_1 (VAR_13[-2]))
     {
       if (VAR_13 - VAR_12 == 2)
  {

    *--VAR_13 = '\0';
    goto append;
  }
       else
  {

    VAR_13 -= 2;
    *VAR_13 = '\0';
    continue;
  }
     }
   else
     break;
 }

      if (VAR_12[0] == '~')
 VAR_12 = FUNC_12 (VAR_12);




      else if (!FUNC_0 (VAR_12) && VAR_12[0] != '$')
 VAR_12 = FUNC_2 (VAR_4, VAR_1, VAR_12, ((void*)0));
      else
 VAR_12 = FUNC_6 (VAR_12, VAR_13 - VAR_12);
      FUNC_4 (FUNC_14, VAR_12);


      if (VAR_12[0] != '$')
 {
   if (FUNC_7 (VAR_12, &VAR_14) < 0)
     {
       int VAR_18 = VAR_5;
       FUNC_3 (VAR_6, "Warning: ");
       FUNC_5 (VAR_12, VAR_18);
     }
   else if ((VAR_14.st_mode & VAR_3) != VAR_2)
     FUNC_13 ("%s is not a directory.", VAR_12);
 }

    append:
      {
 unsigned int VAR_19 = FUNC_10 (VAR_12);

 VAR_13 = *VAR_8;
 while (1)
   {
     if (!FUNC_11 (VAR_13, VAR_12, VAR_19)
  && (VAR_13[VAR_19] == '\0' || VAR_13[VAR_19] == VAR_0))
       {

  if (VAR_13 > *VAR_8)
    VAR_13--;
  if (VAR_11 > VAR_13 - *VAR_8)
    goto skip_dup;
  FUNC_9 (VAR_13, &VAR_13[VAR_19 + 1]);
       }
     VAR_13 = FUNC_8 (VAR_13, VAR_0);
     if (VAR_13 != 0)
       ++VAR_13;
     else
       break;
   }
 if (VAR_13 == 0)
   {
     char VAR_20[2];

     VAR_20[0] = VAR_0;
     VAR_20[1] = '\0';



     if (VAR_11)
       {
  char *VAR_21, VAR_22;

  VAR_22 = VAR_10[VAR_11];
  VAR_10[VAR_11] = '\0';
  VAR_21 = FUNC_2 (VAR_10, VAR_20, VAR_12, ((void*)0));
  VAR_10[VAR_11] = VAR_22;
  *VAR_8 = FUNC_2 (VAR_21, "", &VAR_10[VAR_11], ((void*)0));
  VAR_11 = FUNC_10 (VAR_21);
  FUNC_14 (VAR_21);
       }
     else
       {
  *VAR_8 = FUNC_2 (VAR_12, (VAR_10[0] ? VAR_20 : VAR_10), VAR_10, ((void*)0));
  VAR_11 = FUNC_10 (VAR_12);
       }
     FUNC_14 (VAR_10);
     VAR_10 = *VAR_8;
   }
      }
    skip_dup:;
    }
  while (*VAR_7 != '\0');
}
