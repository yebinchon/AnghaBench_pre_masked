
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static void
FUNC_4 (rtx VAR_0, rtx VAR_1, int* VAR_2, int* VAR_3)
{
  rtx VAR_4;
  rtx VAR_5;

  VAR_4 = VAR_0;
  VAR_5 = VAR_1;
  *VAR_2 = 0;
  *VAR_3 = 0;
  while (VAR_4 && VAR_5 && (VAR_4 != VAR_1) && (VAR_5 != VAR_0)
         && FUNC_3 (FUNC_0 (VAR_4), FUNC_0 (VAR_5)))
    {
      (*VAR_2)++;
      (*VAR_3) += FUNC_1 (VAR_4);
      VAR_4 = FUNC_2 (VAR_4);
      VAR_5 = FUNC_2 (VAR_5);
    }
}
