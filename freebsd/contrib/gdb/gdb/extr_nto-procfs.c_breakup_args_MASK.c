
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,char) ;

__attribute__((used)) static void
FUNC_1 (char *VAR_0, char **VAR_1)
{
  char *VAR_2, *VAR_3 = VAR_0;
  char VAR_4 = 0;

  for (;;)
    {

      VAR_4 = 0;
      while (*VAR_3 == ' ' || *VAR_3 == '\t' || *VAR_3 == '\n')
 VAR_3++;


      if (*VAR_3 == '\0')
 break;


      if (*VAR_3 == '"')
 {
   VAR_3++;
   VAR_4 = FUNC_0 (VAR_3, '"') ? 1 : 0;
 }

      *VAR_1++ = VAR_3;


      VAR_2 = VAR_3;
      if (VAR_4)
 VAR_3 = FUNC_0 (VAR_2, '"');
      if ((VAR_3 == ((void*)0)) || (!VAR_4))
 VAR_3 = FUNC_0 (VAR_2, ' ');
      if (VAR_3 == ((void*)0))
 VAR_3 = FUNC_0 (VAR_2, '\t');
      if (VAR_3 == ((void*)0))
 VAR_3 = FUNC_0 (VAR_2, '\n');


      if (VAR_3 == ((void*)0))
 {
   VAR_2 = VAR_3;
   break;
 }


      *VAR_3++ = '\0';
    }


  *VAR_1 = ((void*)0);
}
