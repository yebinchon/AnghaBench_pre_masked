
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef int rtx ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 char* FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char const*) ;

rtx
FUNC_6 (rtx VAR_3)
{
  const char *VAR_4;
  tree VAR_5;

  if (FUNC_0 (VAR_3) != VAR_1)
    return VAR_3;


  VAR_4 = FUNC_2 (VAR_3, 0);
  if (*VAR_4 == '.')
    {
      while (*VAR_4 == '.')
 VAR_4++;

      VAR_5 = FUNC_5 (VAR_4);
      VAR_3 = FUNC_4 (VAR_2, FUNC_1 (VAR_5));
    }

  return FUNC_3 (VAR_0, VAR_3);
}
