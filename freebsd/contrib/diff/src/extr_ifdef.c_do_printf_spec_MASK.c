
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct group {int dummy; } ;
struct file_data {int dummy; } ;
typedef long lin ;
typedef int FILE ;


 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (int *,char*,long) ;
 int FUNC_2 (char*) ;
 long FUNC_3 (struct group const*,char) ;
 int FUNC_4 (char*,char const*,size_t) ;
 int FUNC_5 (char,int *) ;
 char* FUNC_6 (char const*,char*) ;
 long FUNC_7 (struct file_data const*,long) ;
 char* FUNC_8 (size_t) ;

__attribute__((used)) static char const *
FUNC_9 (FILE *VAR_0, char const *VAR_1,
  struct file_data const *VAR_2, lin VAR_3,
  struct group const *VAR_4)
{
  char const *VAR_5 = VAR_1;
  char VAR_6;
  char VAR_7;



  VAR_5++;
  while ((VAR_6 = *VAR_5++) == '-' || VAR_6 == '\'' || VAR_6 == '0')
    continue;
  while (FUNC_0 (VAR_6))
    VAR_6 = *VAR_5++;
  if (VAR_6 == '.')
    while (FUNC_0 (VAR_6 = *VAR_5++))
      continue;
  VAR_7 = *VAR_5++;

  switch (VAR_6)
    {
    case 'c':
      if (VAR_7 != '\'')
 return 0;
      else
 {
   char VAR_8;
   VAR_5 = FUNC_6 (VAR_5, &VAR_8);
   if (!VAR_5)
     return 0;
   if (VAR_0)
     FUNC_5 (VAR_8, VAR_0);
 }
      break;

    case 'd': case 'o': case 'x': case 'X':
      {
 lin VAR_9;

 if (VAR_2)
   {
     if (VAR_7 != 'n')
       return 0;
     VAR_9 = FUNC_7 (VAR_2, VAR_3);
   }
 else
   {
     VAR_9 = FUNC_3 (VAR_4, VAR_7);
     if (VAR_9 < 0)
       return 0;
   }

 if (VAR_0)
   {


     long int VAR_10 = VAR_9;
     size_t VAR_11 = VAR_5 - VAR_1 - 2;



     char *VAR_12 = FUNC_8 (VAR_11 + 3);

     char *VAR_13 = VAR_12 + VAR_11;
     FUNC_4 (VAR_12, VAR_1, VAR_11);
     *VAR_13++ = 'l';
     *VAR_13++ = VAR_6;
     *VAR_13 = '\0';
     FUNC_1 (VAR_0, VAR_12, VAR_10);

     FUNC_2 (VAR_12);

   }
      }
      break;

    default:
      return 0;
    }

  return VAR_5;
}
