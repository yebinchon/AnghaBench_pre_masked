
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rclex_keywords {int tok; int * name; } ;


 scalar_t__ FUNC_0 (char const) ;
 int VAR_0 ;
 struct rclex_keywords* VAR_1 ;
 int FUNC_1 (int *,char const*) ;

__attribute__((used)) static int
FUNC_2 (const char *VAR_2)
{
  if (VAR_2 && FUNC_0 (VAR_2[0]))
    {
      const struct rclex_keywords *VAR_3 = &VAR_1[0];

      do
        {
   if (! FUNC_1 (VAR_3->name, VAR_2))
     return VAR_3->tok;
   ++VAR_3;
        }
      while (VAR_3->name != ((void*)0));
    }
  return VAR_0;
}
