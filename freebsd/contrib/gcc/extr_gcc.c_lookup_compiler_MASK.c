
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct compiler {char* suffix; char* spec; } ;


 struct compiler* VAR_0 ;
 int FUNC_0 (char*,char const*) ;
 int VAR_1 ;
 int FUNC_1 (char const*,char const*) ;
 int FUNC_2 (char const*,char const*) ;
 size_t FUNC_3 (char const*) ;
 int FUNC_4 (char const*,char*) ;

__attribute__((used)) static struct compiler *
FUNC_5 (const char *VAR_2, size_t VAR_3, const char *VAR_4)
{
  struct compiler *VAR_5;


  if (VAR_4 != 0 && VAR_4[0] == '*')
    return 0;


  if (VAR_4 != 0)
    {
      for (VAR_5 = VAR_0 + VAR_1 - 1; VAR_5 >= VAR_0; VAR_5--)
 if (VAR_5->suffix[0] == '@' && !FUNC_2 (VAR_5->suffix + 1, VAR_4))
   return VAR_5;

      FUNC_0 ("language %s not recognized", VAR_4);
      return 0;
    }


  for (VAR_5 = VAR_0 + VAR_1 - 1; VAR_5 >= VAR_0; VAR_5--)
    {
      if (
   (!FUNC_2 (VAR_5->suffix, "-") && !FUNC_2 (VAR_2, "-"))
   || (FUNC_3 (VAR_5->suffix) < VAR_3

       && !FUNC_2 (VAR_5->suffix,
     VAR_2 + VAR_3 - FUNC_3 (VAR_5->suffix))
  ))
 break;
    }
  if (VAR_5 >= VAR_0)
    {
      if (VAR_5->spec[0] != '@')

 return VAR_5;




      return FUNC_5 (((void*)0), 0, VAR_5->spec + 1);
    }
  return 0;
}
