
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 int FUNC_0 (char const) ;
 char* FUNC_1 (int ,int) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ) ;
 char* FUNC_4 (char const**) ;
 int VAR_0 ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static void
FUNC_6 (rtx VAR_1)
{
  const char *VAR_2 = FUNC_1 (VAR_1, 0);
  const char *VAR_3 = FUNC_1 (VAR_1, 1);
  const char *VAR_4;

  FUNC_2 ("  switch (GET_CODE (", VAR_0);
  FUNC_5 (VAR_3);
  FUNC_2 ("))\n    {\n", VAR_0);

  while ((VAR_4 = FUNC_4 (&VAR_2)) != 0)
    {
      FUNC_2 ("    case ", VAR_0);
      while (VAR_4 < VAR_2)
 {
   FUNC_3 (FUNC_0 (*VAR_4));
   VAR_4++;
 }
      FUNC_2(":\n", VAR_0);
    }
}
