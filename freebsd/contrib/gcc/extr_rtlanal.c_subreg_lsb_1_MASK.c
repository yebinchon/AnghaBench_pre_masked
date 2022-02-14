
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 unsigned int FUNC_1 (int) ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int) ;

unsigned int
FUNC_3 (enum machine_mode VAR_5,
       enum machine_mode VAR_6,
       unsigned int VAR_7)
{
  unsigned int VAR_8;
  unsigned int VAR_9;
  unsigned int VAR_10;


  if (FUNC_0 (VAR_5) > FUNC_0 (VAR_6))
    return 0;

  if (VAR_4 != VAR_2)


    FUNC_2 (!((VAR_7 % VAR_3
    + FUNC_1 (VAR_5)) > VAR_3
    && (VAR_7 % VAR_3
        || FUNC_1 (VAR_5) % VAR_3)));

  if (VAR_4)
    VAR_10 = (FUNC_1 (VAR_6)
     - (VAR_7 + FUNC_1 (VAR_5))) / VAR_3;
  else
    VAR_10 = VAR_7 / VAR_3;
  VAR_8 = VAR_10 * VAR_1;

  if (VAR_2)
    VAR_9 = (FUNC_1 (VAR_6)
     - (VAR_7 + FUNC_1 (VAR_5))) % VAR_3;
  else
    VAR_9 = VAR_7 % VAR_3;
  VAR_8 += VAR_9 * VAR_0;

  return VAR_8;
}
