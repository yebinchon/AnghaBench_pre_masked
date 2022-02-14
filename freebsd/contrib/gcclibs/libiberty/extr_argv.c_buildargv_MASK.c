
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char const VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (char**) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (char**,int) ;
 char* FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char const*) ;

char **FUNC_8 (const char *VAR_2)
{
  char *VAR_3;
  char *VAR_4;
  int VAR_5 = 0;
  int VAR_6 = 0;
  int VAR_7 = 0;
  int VAR_8 = 0;
  int VAR_9 = 0;
  char **VAR_10 = ((void*)0);
  char **VAR_11;

  if (VAR_2 != ((void*)0))
    {
      VAR_4 = (char *) FUNC_2 (FUNC_7 (VAR_2) + 1);


      do
 {

   while (FUNC_0 (*VAR_2))
     {
       VAR_2++;
     }
   if ((VAR_9 == 0) || (VAR_8 >= (VAR_9 - 1)))
     {

       if (VAR_10 == ((void*)0))
  {
    VAR_9 = VAR_1;
    VAR_11 = (char **) FUNC_4 (VAR_9 * sizeof (char *));
  }
       else
  {
    VAR_9 *= 2;
    VAR_11 = (char **) FUNC_5 (VAR_10, VAR_9 * sizeof (char *));
  }
       if (VAR_11 == ((void*)0))
  {
    if (VAR_10 != ((void*)0))
      {
        FUNC_3 (VAR_10);
        VAR_10 = ((void*)0);
      }
    break;
  }
       VAR_10 = VAR_11;
       VAR_10[VAR_8] = ((void*)0);
     }

   VAR_3 = VAR_4;
   while (*VAR_2 != VAR_0)
     {
       if (FUNC_1 (*VAR_2) && !VAR_5 && !VAR_6 && !VAR_7)
  {
    break;
  }
       else
  {
    if (VAR_7)
      {
        VAR_7 = 0;
        *VAR_3++ = *VAR_2;
      }
    else if (*VAR_2 == '\\')
      {
        VAR_7 = 1;
      }
    else if (VAR_5)
      {
        if (*VAR_2 == '\'')
   {
     VAR_5 = 0;
   }
        else
   {
     *VAR_3++ = *VAR_2;
   }
      }
    else if (VAR_6)
      {
        if (*VAR_2 == '"')
   {
     VAR_6 = 0;
   }
        else
   {
     *VAR_3++ = *VAR_2;
   }
      }
    else
      {
        if (*VAR_2 == '\'')
   {
     VAR_5 = 1;
   }
        else if (*VAR_2 == '"')
   {
     VAR_6 = 1;
   }
        else
   {
     *VAR_3++ = *VAR_2;
   }
      }
    VAR_2++;
  }
     }
   *VAR_3 = VAR_0;
   VAR_10[VAR_8] = FUNC_6 (VAR_4);
   if (VAR_10[VAR_8] == ((void*)0))
     {
       FUNC_3 (VAR_10);
       VAR_10 = ((void*)0);
       break;
     }
   VAR_8++;
   VAR_10[VAR_8] = ((void*)0);

   while (FUNC_1 (*VAR_2))
     {
       VAR_2++;
     }
 }
      while (*VAR_2 != VAR_0);
    }
  return (VAR_10);
}
