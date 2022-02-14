
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const) ;
 char* FUNC_2 (scalar_t__) ;
 char const* VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ,char const*) ;
 int VAR_3 ;
 char* FUNC_5 (char* const,int) ;
 scalar_t__ FUNC_6 (char const*) ;

__attribute__((used)) static char *
FUNC_7 (const char *VAR_4, const char *VAR_5)
{

  const char *const VAR_6 = (VAR_4) ? VAR_4 : VAR_2;
  char *const VAR_7 = FUNC_2 (FUNC_6 (VAR_6) + FUNC_6 (VAR_5) + 2);
  char *VAR_8 = VAR_7;
  char *VAR_9, *VAR_10;




  {
    const char *VAR_11;

    if (! FUNC_0 (VAR_5))
      {
 VAR_11 = VAR_6;
 while ((*VAR_8++ = *VAR_11++))
   continue;
 *(VAR_8-1) = VAR_0;
      }
    VAR_11 = VAR_5;
    while ((*VAR_8++ = *VAR_11++))
      continue;
  }




  VAR_9 = VAR_10 = VAR_7;
  *VAR_9++ = *VAR_10++;




  for (;;)
    {
      if (!VAR_10[0])
 break;
      else if (FUNC_1 (VAR_10[0]) && FUNC_1 (VAR_9[-1]))
 {
   VAR_10++;
   continue;
 }
      else if (VAR_10[0] == '.' && FUNC_1 (VAR_9[-1]))
 {
   if (!VAR_10[1])
     break;
   else if (FUNC_1 (VAR_10[1]))
     {
       VAR_10 += 2;
       continue;
     }
   else if ((VAR_10[1] == '.') && (VAR_10[2] == 0
                                || FUNC_1 (VAR_10[2])))
     {
       VAR_10 += (FUNC_1 (VAR_10[2])) ? 3 : 2;
       VAR_9 -= 2;
       while (VAR_9 >= VAR_7 && ! FUNC_1 (*VAR_9))
        VAR_9--;
       if (VAR_9 < VAR_7)
  {




    FUNC_4 ("%s: invalid file name: %s\n",
     VAR_3, VAR_5);
    FUNC_3 (VAR_1);
  }
       *++VAR_9 = '\0';
       continue;
     }
 }
      *VAR_9++ = *VAR_10++;
    }




  *VAR_9 = '\0';
  if (FUNC_1 (VAR_9[-1]))
    *--VAR_9 = '\0';




  return FUNC_5 (VAR_7, VAR_9 - VAR_7);
}
