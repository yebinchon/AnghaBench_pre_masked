
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,char) ;

__attribute__((used)) static void
FUNC_1 (char *VAR_0, char **VAR_1)
{
  char *VAR_2 = VAR_0;

  for (;;)
    {


      while (*VAR_2 == ' ' || *VAR_2 == '\t' || *VAR_2 == '\n')
 {
   VAR_2++;
 }


      if (*VAR_2 == '\0')
 break;


      *VAR_1++ = VAR_2;


      VAR_2 = FUNC_0 (VAR_2, ' ');
      if (VAR_2 == ((void*)0))
 VAR_2 = FUNC_0 (VAR_2, '\t');
      if (VAR_2 == ((void*)0))
 VAR_2 = FUNC_0 (VAR_2, '\n');


      if (VAR_2 == ((void*)0))
 break;


      *VAR_2++ = '\0';
    }


  *VAR_1 = ((void*)0);

}
