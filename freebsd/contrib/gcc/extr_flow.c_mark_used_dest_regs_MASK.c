
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct propagate_block_info {int flags; } ;
typedef scalar_t__ rtx ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int VAR_10 ;
 scalar_t__ FUNC_6 (scalar_t__,int) ;
 scalar_t__ VAR_11 ;
 int FUNC_7 (struct propagate_block_info*,scalar_t__,scalar_t__) ;
 scalar_t__* VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_8 (struct propagate_block_info*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 int VAR_14 ;

__attribute__((used)) static bool
FUNC_10 (struct propagate_block_info *VAR_15, rtx VAR_16, rtx VAR_17, rtx VAR_18)
{
  int VAR_19;
  bool VAR_20 = 0;
  rtx VAR_21 = VAR_16;




  if (FUNC_0 (VAR_16) == VAR_2
      && FUNC_0 (FUNC_6 (VAR_16, 1)) == VAR_1)
    VAR_16 = FUNC_6 (VAR_16, 0);

  if (VAR_16 == VAR_5)
    return 0;



  if (FUNC_1 (VAR_16))
    {




      FUNC_8 (VAR_15, FUNC_6 (VAR_16, 0), VAR_17, VAR_18);
      return 1;
    }
  while (FUNC_0 (VAR_16) == VAR_8
  || FUNC_0 (VAR_16) == VAR_11
  || FUNC_0 (VAR_16) == VAR_9)
    {
      if (FUNC_0 (VAR_16) == VAR_9
   && !((FUNC_3 (FUNC_5 (VAR_16))
  + VAR_10 - 1) / VAR_10
        > (FUNC_3 (VAR_16)
    + VAR_10 - 1) / VAR_10))
 ;
      else
 VAR_20 = 1;

      VAR_16 = FUNC_6 (VAR_16, 0);
    }



  if (FUNC_4 (VAR_16)
      && (VAR_19 = FUNC_2 (VAR_16),
   !(VAR_19 == VAR_3
     && (!VAR_14 || VAR_13)))







      )
    {
      if (VAR_20)
 FUNC_8 (VAR_15, VAR_21, VAR_17, VAR_18);
      return 1;
    }
  return 0;
}
