
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (unsigned int,int) ;
 int FUNC_2 (unsigned int,int) ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int) ;
 int** VAR_4 ;

unsigned int
FUNC_4 (unsigned int VAR_5, enum machine_mode VAR_6,
       unsigned int VAR_7, enum machine_mode VAR_8)
{
  int VAR_9, VAR_10;
  int VAR_11, VAR_12;
  int VAR_13;

  FUNC_3 (VAR_5 < VAR_1);


  if (FUNC_1 (VAR_5, VAR_6))
    VAR_9 = FUNC_2 (VAR_5, VAR_6);
  else
    VAR_9 = VAR_4[VAR_5][VAR_6];

  VAR_10 = VAR_4[VAR_5][VAR_8];




  if (VAR_7 == 0
      && VAR_10 > VAR_9
      && (FUNC_0 (VAR_8) > VAR_2
   ? VAR_3 : VAR_0))
    return VAR_9 - VAR_10;

  if (VAR_7 == 0 || VAR_9 == VAR_10)
    return 0;


  VAR_11 = FUNC_0 (VAR_6) / FUNC_0 (VAR_8);
  FUNC_3 (VAR_11 != 0);

  VAR_13 = VAR_7 / FUNC_0 (VAR_8);
  VAR_12 = VAR_9 / VAR_10;
  return (VAR_13 / (VAR_11 / VAR_12)) * VAR_10;
}
