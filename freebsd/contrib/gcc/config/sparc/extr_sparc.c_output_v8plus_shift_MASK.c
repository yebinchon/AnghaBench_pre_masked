
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int *) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 char const* FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,char const*) ;
 int VAR_1 ;

const char *
FUNC_7 (rtx *VAR_2, rtx VAR_3, const char *VAR_4)
{
  static char VAR_5[60];



  if (VAR_1 != 2)
    VAR_2[3] = VAR_2[0];


  if (FUNC_1 (VAR_2[2]) == VAR_0)
    VAR_2[2] = FUNC_0 (FUNC_2 (VAR_2[2]) & 0x3f);

  if (FUNC_1 (VAR_2[1]) == VAR_0)
    {
      FUNC_3 ("mov\t%1, %3", VAR_2);
    }
  else
    {
      FUNC_3 ("sllx\t%H1, 32, %3", VAR_2);
      if (FUNC_4 (VAR_2[1], VAR_3) <= 0)
 FUNC_3 ("srl\t%L1, 0, %L1", VAR_2);
      FUNC_3 ("or\t%L1, %3, %3", VAR_2);
    }

  FUNC_6(VAR_5, VAR_4);

  if (VAR_1 != 2)
    return FUNC_5 (VAR_5, "\t%0, %2, %L0\n\tsrlx\t%L0, 32, %H0");
  else
    return FUNC_5 (VAR_5, "\t%3, %2, %3\n\tsrlx\t%3, 32, %H0\n\tmov\t%3, %L0");
}
