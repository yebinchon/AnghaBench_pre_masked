
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (char*,int *) ;

const char *
FUNC_3 (rtx *VAR_1)
{

  int VAR_2 = FUNC_0 (VAR_1[0]);
  int VAR_3 = FUNC_0 (VAR_1[1]);
  rtx VAR_4[2];
  int VAR_5;

  if (VAR_2 < VAR_3)
    {
      for (VAR_5 = 0; VAR_5 < 3; VAR_5++)
 {
   VAR_4[0] = FUNC_1 (VAR_0, VAR_2 + VAR_5);
   VAR_4[1] = FUNC_1 (VAR_0, VAR_3 + VAR_5);
   FUNC_2 ("mov%?\t%0, %1", VAR_4);
 }
    }
  else
    {
      for (VAR_5 = 2; VAR_5 >= 0; VAR_5--)
 {
   VAR_4[0] = FUNC_1 (VAR_0, VAR_2 + VAR_5);
   VAR_4[1] = FUNC_1 (VAR_0, VAR_3 + VAR_5);
   FUNC_2 ("mov%?\t%0, %1", VAR_4);
 }
    }

  return "";
}
