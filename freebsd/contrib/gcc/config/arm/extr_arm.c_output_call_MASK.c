
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,int *) ;

const char *
FUNC_4 (rtx *VAR_6)
{
  FUNC_1 (!VAR_5);


  if (FUNC_0 (VAR_6[0]) == VAR_1)
    {
      VAR_6[0] = FUNC_2 (VAR_2, VAR_0);
      FUNC_3 ("mov%?\t%0, %|lr", VAR_6);
    }

  FUNC_3 ("mov%?\t%|lr, %|pc", VAR_6);

  if (VAR_3 || VAR_4)
    FUNC_3 ("bx%?\t%0", VAR_6);
  else
    FUNC_3 ("mov%?\t%|pc, %0", VAR_6);

  return "";
}
