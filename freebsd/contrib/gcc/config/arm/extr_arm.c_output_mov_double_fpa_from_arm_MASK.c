
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (char*,int *) ;

const char *
FUNC_4 (rtx *VAR_2)
{
  int VAR_3 = FUNC_0 (VAR_2[1]);
  rtx VAR_4[2];

  FUNC_1 (VAR_3 != VAR_0);

  VAR_4[0] = FUNC_2 (VAR_1, VAR_3);
  VAR_4[1] = FUNC_2 (VAR_1, 1 + VAR_3);
  FUNC_3 ("stm%?fd\t%|sp!, {%0, %1}", VAR_4);
  FUNC_3 ("ldf%?d\t%0, [%|sp], #8", VAR_2);
  return "";
}
