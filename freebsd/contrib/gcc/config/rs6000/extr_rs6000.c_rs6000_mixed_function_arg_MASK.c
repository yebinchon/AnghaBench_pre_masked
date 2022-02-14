
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,scalar_t__) ;
 int FUNC_5 (int,int ) ;

__attribute__((used)) static rtx
FUNC_6 (enum machine_mode VAR_7, tree VAR_8, int VAR_9)
{
  int VAR_10;
  int VAR_11, VAR_12;
  rtx VAR_13[VAR_2 + 1];

  if (VAR_9 >= VAR_2)
    return VAR_3;

  VAR_10 = FUNC_5 (VAR_7, VAR_8);




  if (VAR_10 == 0
      || (VAR_10 == 1 && VAR_7 != VAR_0))
    return FUNC_4 (VAR_7, VAR_1 + VAR_9);

  VAR_12 = 0;
  if (VAR_9 + VAR_10 > VAR_2)
    VAR_13[VAR_12++] = FUNC_2 (VAR_5, VAR_3, VAR_6);

  VAR_11 = 0;
  do
    {
      rtx VAR_14 = FUNC_4 (VAR_4, VAR_1 + VAR_9);
      rtx VAR_15 = FUNC_0 (VAR_11++ * 4);
      VAR_13[VAR_12++] = FUNC_2 (VAR_5, VAR_14, VAR_15);
    }
  while (++VAR_9 < VAR_2 && --VAR_10 != 0);

  return FUNC_3 (VAR_7, FUNC_1 (VAR_12, VAR_13));
}
