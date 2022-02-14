
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,unsigned int) ;
 int FUNC_5 (int ) ;
 unsigned int** VAR_2 ;

int
FUNC_6 (rtx VAR_3, rtx VAR_4)
{
  unsigned int VAR_5, VAR_6;
  unsigned int VAR_7;


  if (FUNC_0 (VAR_4) == VAR_0)
    return 1;

  FUNC_5 (FUNC_3 (VAR_4));

  VAR_5 = FUNC_2 (VAR_4);
  VAR_6 = (VAR_5 >= VAR_1 ? VAR_5
  : VAR_5 + VAR_2[VAR_5][FUNC_1 (VAR_4)] - 1);

  for (VAR_7 = VAR_5; VAR_7 <= VAR_6; VAR_7++)
    if (! FUNC_4 (VAR_3, VAR_7))
      return 0;

  return 1;
}
