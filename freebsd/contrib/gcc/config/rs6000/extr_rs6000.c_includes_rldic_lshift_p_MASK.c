
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef int HOST_WIDE_INT ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_4 ;

int
FUNC_5 (rtx VAR_5, rtx VAR_6)
{
  if (FUNC_2 (VAR_6) == VAR_1)
    {
      HOST_WIDE_INT VAR_7, VAR_8, VAR_9;

      VAR_7 = FUNC_4 (VAR_6);
      if (VAR_7 == 0 || VAR_7 == ~0)
 return 0;

      VAR_9 = ~0;
      VAR_9 <<= FUNC_4 (VAR_5);


      VAR_8 = VAR_7 & -VAR_7;


      if (-VAR_8 != VAR_9)
 return 0;


      VAR_7 = ~VAR_7;


      VAR_7 &= -VAR_8;


      VAR_8 = VAR_7 & -VAR_7;
      return VAR_7 == -VAR_8;
    }
  else if (FUNC_2 (VAR_6) == VAR_0
    && (FUNC_3 (VAR_6) == VAR_4 || FUNC_3 (VAR_6) == VAR_2))
    {
      HOST_WIDE_INT VAR_10, VAR_11, VAR_12;
      HOST_WIDE_INT VAR_13, VAR_14;

      VAR_10 = FUNC_1 (VAR_6);
      if (VAR_3 < 64)
 VAR_11 = FUNC_0 (VAR_6);

      if ((VAR_10 == 0 && (VAR_3 >= 64 || VAR_11 == 0))
   || (VAR_10 == ~0 && (VAR_3 >= 64 || VAR_11 == ~0)))
 return 0;

      if (VAR_3 < 64 && VAR_10 == 0)
 {
   VAR_14 = ~0;
   if (FUNC_4 (VAR_5) > 32)
     VAR_14 <<= FUNC_4 (VAR_5) - 32;

   VAR_12 = VAR_11 & -VAR_11;

   if (-VAR_12 != VAR_14 || FUNC_4 (VAR_5) < 32)
     return 0;

   VAR_11 = ~VAR_11;
   VAR_11 &= -VAR_12;

   VAR_12 = VAR_11 & -VAR_11;
   return VAR_11 == -VAR_12;
 }

      VAR_13 = ~0;
      VAR_13 <<= FUNC_4 (VAR_5);

      VAR_12 = VAR_10 & -VAR_10;

      if (-VAR_12 != VAR_13)
 return 0;

      if (VAR_3 < 64)
 VAR_11 = ~VAR_11;
      VAR_10 = ~VAR_10;
      VAR_10 &= -VAR_12;

      if (VAR_3 < 64 && VAR_10 == 0)
 {
   VAR_12 = VAR_11 & -VAR_11;
   return VAR_11 == -VAR_12;
 }

      VAR_12 = VAR_10 & -VAR_10;
      return VAR_10 == -VAR_12 && (VAR_3 >= 64 || VAR_11 == ~0);
    }
  else
    return 0;
}
