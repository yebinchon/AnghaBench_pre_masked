
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_stuff {scalar_t__ nrepeats; int ntypes; char** typevec; } ;
typedef int string ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char const**) ;
 int FUNC_1 (struct work_stuff*,char const**,int *) ;
 int FUNC_2 (char const**,int*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6 (struct work_stuff *VAR_5, const char **VAR_6,
               string *VAR_7)
{
  string VAR_8;
  int VAR_9 = 0;
  int VAR_10;
  int VAR_11;
  const char *VAR_12;
  char VAR_13;

  if (VAR_4)
    {
      FUNC_3 (VAR_7, "(");
      if (**VAR_6 == '\0')
 {
   FUNC_3 (VAR_7, "void");
 }
    }

  while ((**VAR_6 != '_' && **VAR_6 != '\0' && **VAR_6 != 'e')
  || VAR_5->nrepeats > 0)
    {
      if ((**VAR_6 == 'N') || (**VAR_6 == 'T'))
 {
   VAR_13 = *(*VAR_6)++;

   if (VAR_13 == 'N')
     {
       if (!FUNC_2 (VAR_6, &VAR_10))
  {
    return (0);
  }
     }
   else
     {
       VAR_10 = 1;
     }
          if ((VAR_2 || VAR_0 || VAR_1) && VAR_5 -> ntypes >= 10)
            {






              if ((VAR_11 = FUNC_0(VAR_6)) <= 0)
                {
                  return (0);
                }
            }
          else
     {
       if (!FUNC_2 (VAR_6, &VAR_11))
      {
           return (0);
      }
     }
   if (VAR_3 || VAR_0 || VAR_2 || VAR_1)
     {
       VAR_11--;
     }


   if ((VAR_11 < 0) || (VAR_11 >= VAR_5 -> ntypes))
     {
       return (0);
     }
   while (VAR_5->nrepeats > 0 || --VAR_10 >= 0)
     {
       VAR_12 = VAR_5 -> typevec[VAR_11];
       if (VAR_9 && VAR_4)
  {
    FUNC_3 (VAR_7, ", ");
  }
       if (!FUNC_1 (VAR_5, &VAR_12, &VAR_8))
  {
    return (0);
  }
       if (VAR_4)
  {
    FUNC_4 (VAR_7, &VAR_8);
  }
       FUNC_5 (&VAR_8);
       VAR_9 = 1;
     }
 }
      else
 {
   if (VAR_9 && VAR_4)
     FUNC_3 (VAR_7, ", ");
   if (!FUNC_1 (VAR_5, VAR_6, &VAR_8))
     return (0);
   if (VAR_4)
     FUNC_4 (VAR_7, &VAR_8);
   FUNC_5 (&VAR_8);
   VAR_9 = 1;
 }
    }

  if (**VAR_6 == 'e')
    {
      (*VAR_6)++;
      if (VAR_4)
 {
   if (VAR_9)
     {
       FUNC_3 (VAR_7, ",");
     }
   FUNC_3 (VAR_7, "...");
 }
    }

  if (VAR_4)
    {
      FUNC_3 (VAR_7, ")");
    }
  return (1);
}
