
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exclude {int dummy; } ;
struct dirent {char* d_name; } ;
typedef int off_t ;
typedef int DIR ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct dirent*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct exclude*,char*,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char const*,char*) ;
 scalar_t__ FUNC_6 (int) ;
 int * FUNC_7 (char const*) ;
 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 struct dirent* FUNC_8 (int *) ;
 char* FUNC_9 (char*,int) ;
 char* FUNC_10 (char*,char*) ;

char *
FUNC_11 (const char *VAR_2, off_t VAR_3, struct exclude *VAR_4,
  struct exclude *VAR_5)
{
  DIR *VAR_6;
  struct dirent *VAR_7;
  char *VAR_8;
  char *VAR_9;

  VAR_6 = FUNC_7 (VAR_2);
  if (VAR_6 == ((void*)0))
    return ((void*)0);



  if (VAR_3 <= 0)
    VAR_3 = 1;

  VAR_8 = (char *) FUNC_6 (VAR_3);
  if (VAR_8 == ((void*)0))
    {
      FUNC_2 (VAR_6);
      return ((void*)0);
    }
  VAR_9 = VAR_8;

  while ((VAR_7 = FUNC_8 (VAR_6)) != ((void*)0))
    {

      if (VAR_7->d_name[0] != '.'
   || (VAR_7->d_name[1] != '\0'
       && (VAR_7->d_name[1] != '.' || VAR_7->d_name[2] != '\0')))
 {
   off_t VAR_10 = (VAR_9 - VAR_8) + FUNC_1 (VAR_7) + 2;

   if ((VAR_4 || VAR_5)
       && !FUNC_5 (VAR_2, VAR_7->d_name))
     {
       if (VAR_4
    && !FUNC_3 (VAR_4, VAR_0, 0))
  continue;
       if (VAR_5
    && FUNC_3 (VAR_5, VAR_0, 0))
  continue;
     }

   if (VAR_10 > VAR_3)
     {
       char *VAR_11;

       while (VAR_10 > VAR_3)
  VAR_3 += 1024;

       VAR_11 = FUNC_9 (VAR_8, VAR_3);
       if (VAR_11 == ((void*)0))
  {
    FUNC_2 (VAR_6);
    return ((void*)0);
  }
       VAR_9 += VAR_11 - VAR_8;
       VAR_8 = VAR_11;
     }
   VAR_9 = FUNC_10 (VAR_9, VAR_7->d_name) + 1;
 }
    }
  *VAR_9 = '\0';
  if (FUNC_0 (VAR_6))
    {
      FUNC_4 (VAR_8);
      return ((void*)0);
    }
  if (VAR_0)
    {
      FUNC_4 (VAR_0);
      VAR_0 = ((void*)0);
      VAR_1 = 0;
    }
  return VAR_8;
}
