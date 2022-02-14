
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
struct TYPE_2__ {int (* narrow_volatile_bitfield ) () ;} ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 unsigned int FUNC_3 (unsigned int,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_4 () ;
 TYPE_1__ VAR_5 ;

enum machine_mode
FUNC_5 (int VAR_6, int VAR_7, unsigned int VAR_8,
        enum machine_mode VAR_9, int VAR_10)
{
  enum machine_mode VAR_11;
  unsigned int VAR_12 = 0;


  for (VAR_11 = FUNC_0 (VAR_2); VAR_11 != VAR_4;
       VAR_11 = FUNC_2 (VAR_11))
    {
      VAR_12 = FUNC_1 (VAR_11);
      if ((VAR_7 % VAR_12) + VAR_6 <= VAR_12)
 break;
    }

  if (VAR_11 == VAR_4







      || FUNC_3 (VAR_12, VAR_0) > VAR_8
      || (VAR_9 != VAR_4 && VAR_12 > FUNC_1 (VAR_9)))
    return VAR_4;

  if ((VAR_3 && ! VAR_10)
      || (VAR_10 && !VAR_5.narrow_volatile_bitfield()))
    {
      enum machine_mode VAR_13 = VAR_4, VAR_14;

      for (VAR_14 = FUNC_0 (VAR_2); VAR_14 != VAR_4;
    VAR_14 = FUNC_2 (VAR_14))
 {
   VAR_12 = FUNC_1 (VAR_14);
   if (VAR_7 / VAR_12 == (VAR_7 + VAR_6 - 1) / VAR_12
       && VAR_12 <= VAR_1
       && VAR_12 <= FUNC_3 (VAR_8, VAR_0)
       && (VAR_9 == VAR_4
    || VAR_12 <= FUNC_1 (VAR_9)))
     VAR_13 = VAR_14;
 }

      if (VAR_13 != VAR_4)
 return VAR_13;
    }

  return VAR_11;
}
