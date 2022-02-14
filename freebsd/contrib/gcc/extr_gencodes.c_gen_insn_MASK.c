
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 char* FUNC_0 (int ,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char const*,...) ;

__attribute__((used)) static void
FUNC_3 (rtx VAR_0, int VAR_1)
{
  const char *VAR_2 = FUNC_0 (VAR_0, 0);
  int VAR_3 = FUNC_1 (FUNC_0 (VAR_0, 2));




  if (VAR_2[0] != 0 && VAR_2[0] != '*')
    {
      if (VAR_3 == 0)
 FUNC_2 ("#define CODE_FOR_%s CODE_FOR_nothing\n", VAR_2);
      else
 FUNC_2 ("  CODE_FOR_%s = %d,\n", VAR_2, VAR_1);
    }
}
