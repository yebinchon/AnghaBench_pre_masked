
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char** VAR_2 ;
 size_t FUNC_0 (char const*) ;
 int FUNC_1 (char*,char const*,size_t const) ;

void
FUNC_2 (const char *VAR_3)
{
  const size_t VAR_4 = FUNC_0 (VAR_3);
  char **VAR_5;

  VAR_0;

  for (VAR_5 = VAR_2; *VAR_5; ++VAR_5)
    if (!FUNC_1 (*VAR_5, VAR_3, VAR_4) && (*VAR_5)[VAR_4] == '=')
      {

 char **VAR_6 = VAR_5;
 do
   VAR_6[0] = VAR_6[1];
 while (*VAR_6++);

      }

  VAR_1;
}
