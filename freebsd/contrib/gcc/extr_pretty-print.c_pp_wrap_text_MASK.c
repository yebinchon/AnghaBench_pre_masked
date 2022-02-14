
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pretty_printer ;


 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (int *,char const*,char const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6 (pretty_printer *VAR_0, const char *VAR_1, const char *VAR_2)
{
  bool VAR_3 = FUNC_2 (VAR_0);

  while (VAR_1 != VAR_2)
    {

      {
 const char *VAR_4 = VAR_1;
 while (VAR_4 != VAR_2 && !FUNC_0 (*VAR_4) && *VAR_4 != '\n')
   ++VAR_4;
 if (VAR_3
            && VAR_4 - VAR_1 >= FUNC_4 (VAR_0))
   FUNC_3 (VAR_0);
 FUNC_1 (VAR_0, VAR_1, VAR_4);
 VAR_1 = VAR_4;
      }

      if (VAR_1 != VAR_2 && FUNC_0 (*VAR_1))
 {
   FUNC_5 (VAR_0);
   ++VAR_1;
 }
      if (VAR_1 != VAR_2 && *VAR_1 == '\n')
 {
   FUNC_3 (VAR_0);
   ++VAR_1;
 }
    }
}
