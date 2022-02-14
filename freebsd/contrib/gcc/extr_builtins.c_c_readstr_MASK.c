
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef int HOST_WIDE_INT ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 unsigned int FUNC_1 (int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int,int) ;

__attribute__((used)) static rtx
FUNC_4 (const char *VAR_6, enum machine_mode VAR_7)
{
  HOST_WIDE_INT VAR_8[2];
  HOST_WIDE_INT VAR_9;
  unsigned int VAR_10, VAR_11;

  FUNC_2 (FUNC_0 (VAR_7) == VAR_3);

  VAR_8[0] = 0;
  VAR_8[1] = 0;
  VAR_9 = 1;
  for (VAR_10 = 0; VAR_10 < FUNC_1 (VAR_7); VAR_10++)
    {
      VAR_11 = VAR_10;
      if (VAR_5)
 VAR_11 = FUNC_1 (VAR_7) - VAR_10 - 1;
      if (VAR_1 != VAR_5
   && FUNC_1 (VAR_7) > VAR_4)
 VAR_11 = VAR_11 + VAR_4 - 2 * (VAR_11 % VAR_4) - 1;
      VAR_11 *= VAR_0;
      FUNC_2 (VAR_11 <= 2 * VAR_2);

      if (VAR_9)
 VAR_9 = (unsigned char) VAR_6[VAR_10];
      VAR_8[VAR_11 / VAR_2] |= VAR_9 << (VAR_11 % VAR_2);
    }
  return FUNC_3 (VAR_8[0], VAR_8[1], VAR_7);
}
