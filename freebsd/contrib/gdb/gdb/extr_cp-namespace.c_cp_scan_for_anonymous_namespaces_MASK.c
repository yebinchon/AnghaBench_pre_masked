
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {int dummy; } ;


 unsigned int VAR_0 ;
 char* FUNC_0 (struct symbol const*) ;
 int FUNC_1 (char const*,unsigned int,unsigned int) ;
 unsigned int FUNC_2 (char const*) ;
 int FUNC_3 (char const*) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (char const*,char*,unsigned int) ;

void
FUNC_5 (const struct symbol *VAR_2)
{
  if (!VAR_1
      && FUNC_0 (VAR_2) != ((void*)0))
    {
      const char *VAR_3 = FUNC_0 (VAR_2);
      unsigned int VAR_4;
      unsigned int VAR_5;
      const char *VAR_6;




      if (!FUNC_3 (VAR_3))
 return;

      VAR_4 = 0;
      VAR_5 = FUNC_2 (VAR_3 + VAR_4);

      while (VAR_3[VAR_5] == ':')
 {
   if ((VAR_5 - VAR_4) == VAR_0
       && FUNC_4 (VAR_3 + VAR_4,
     "(anonymous namespace)",
     VAR_0) == 0)
     {




       FUNC_1 (VAR_3,
          VAR_4 == 0
          ? 0 : VAR_4 - 2,
          VAR_5);
     }

   VAR_4 = VAR_5 + 2;
   VAR_5 = (VAR_4
       + FUNC_2 (VAR_3
             + VAR_4));
 }
    }
}
