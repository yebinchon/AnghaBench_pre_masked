
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (char const**) ;
 int VAR_0 ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static void
FUNC_5 (const char *VAR_1, const char *VAR_2)
{
  const char *VAR_3;

  while ((VAR_3 = FUNC_3 (&VAR_2)) != 0)
    {
      FUNC_1 ("GET_CODE (", VAR_0);
      FUNC_4 (VAR_1);
      FUNC_1 (") == ", VAR_0);
      while (VAR_3 < VAR_2)
 {
   FUNC_2 (FUNC_0 (*VAR_3));
   VAR_3++;
 }

      if (*VAR_2 == ',')
 FUNC_1 (" || ", VAR_0);
    }
}
