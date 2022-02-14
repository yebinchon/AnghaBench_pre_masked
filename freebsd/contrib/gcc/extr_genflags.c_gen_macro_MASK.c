
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char FUNC_0 (char const) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int,...) ;
 int FUNC_4 (char) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_5 (const char *VAR_1, int VAR_2, int VAR_3)
{
  int VAR_4;

  FUNC_2 (VAR_2 <= VAR_3);
  FUNC_2 (VAR_2);


  FUNC_1 ("#define GEN_", VAR_0);
  for (VAR_4 = 0; VAR_1[VAR_4]; VAR_4++)
    FUNC_4 (FUNC_0 (VAR_1[VAR_4]));

  FUNC_4('(');
  for (VAR_4 = 0; VAR_4 < VAR_3 - 1; VAR_4++)
    FUNC_3 ("%c, ", VAR_4 + 'A');
  FUNC_3 ("%c) gen_%s (", VAR_4 + 'A', VAR_1);

  for (VAR_4 = 0; VAR_4 < VAR_2 - 1; VAR_4++)
    FUNC_3 ("(%c), ", VAR_4 + 'A');
  FUNC_3 ("(%c))\n", VAR_4 + 'A');
}
