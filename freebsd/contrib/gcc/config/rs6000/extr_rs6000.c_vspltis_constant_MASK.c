
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef scalar_t__ HOST_WIDE_INT ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 unsigned int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 unsigned int FUNC_5 (int) ;
 unsigned int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int ,unsigned int) ;

__attribute__((used)) static bool
FUNC_8 (rtx VAR_0, unsigned VAR_1, unsigned VAR_2)
{
  enum machine_mode VAR_3 = FUNC_2 (VAR_0);
  enum machine_mode VAR_4 = FUNC_4 (VAR_3);

  unsigned VAR_5;
  unsigned VAR_6 = FUNC_6 (VAR_3);
  unsigned VAR_7 = FUNC_3 (VAR_4);
  unsigned VAR_8 = FUNC_5 (VAR_4);

  HOST_WIDE_INT VAR_9 = FUNC_7 (VAR_0, VAR_6 - 1);
  HOST_WIDE_INT VAR_10 = VAR_9;
  HOST_WIDE_INT VAR_11 = VAR_9 > 0 ? 0 : -1;


  for (VAR_5 = 2; VAR_5 <= VAR_2; VAR_5 *= 2)
    {
      HOST_WIDE_INT VAR_12;
      VAR_7 /= 2;
      VAR_12 = VAR_10 >> VAR_7;
      VAR_8 >>= VAR_7;
      if (VAR_10 != ((VAR_12 << VAR_7) | (VAR_12 & VAR_8)))
 return 0;
      VAR_10 = VAR_12;
    }


  if (FUNC_0 (VAR_10))
    ;




  else if (FUNC_1 (VAR_10)
           && (VAR_10 >= 0 || (VAR_1 == 1 && VAR_2 == 1)))
    ;

  else
    return 0;



  for (VAR_5 = 0; VAR_5 < VAR_6 - 1; ++VAR_5)
    {
      HOST_WIDE_INT VAR_13;
      if (((VAR_5 + 1) & (VAR_1 - 1)) == 0)
 VAR_13 = VAR_9;
      else
 VAR_13 = VAR_11;

      if (VAR_13 != FUNC_7 (VAR_0, VAR_5))
 return 0;
    }

  return 1;
}
