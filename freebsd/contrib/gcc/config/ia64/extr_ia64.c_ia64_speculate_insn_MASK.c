
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ rtx ;
typedef int ds_t ;
struct TYPE_2__ {scalar_t__* operand; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_11 (scalar_t__,int ) ;
 int FUNC_12 (scalar_t__,int) ;
 scalar_t__ FUNC_13 (scalar_t__,int ,int ) ;
 scalar_t__ VAR_12 ;
 int FUNC_14 (scalar_t__) ;
 int FUNC_15 (int) ;
 scalar_t__ FUNC_16 (scalar_t__,int,int,int,int) ;
 int FUNC_17 (int ) ;
 TYPE_1__ VAR_13 ;

__attribute__((used)) static int
FUNC_18 (rtx VAR_14, ds_t VAR_15, rtx *VAR_16)
{
  rtx VAR_17, VAR_18, VAR_19, VAR_20;
  int VAR_21, VAR_22 = 1;
  bool VAR_23;

  FUNC_15 (!(VAR_15 & ~VAR_2) && VAR_15);

  VAR_17 = FUNC_6 (VAR_14);

  if (FUNC_2 (VAR_17) == VAR_3)
    VAR_17 = FUNC_0 (VAR_17);


  if (FUNC_2 (VAR_17) != VAR_4)
    return -1;

  VAR_18 = FUNC_9 (VAR_17);

  if (!FUNC_8 (VAR_18) || !(FUNC_4 (FUNC_7 (VAR_18)) || FUNC_1 (FUNC_7 (VAR_18))))
    return -1;


  VAR_19 = FUNC_10 (VAR_17);


  if (FUNC_2 (VAR_19) == VAR_12)
    {
      VAR_19 = FUNC_11 (VAR_19, 0);
      VAR_23 = 1;
    }
  else
    VAR_23 = 0;


  if (FUNC_2 (VAR_19) == VAR_8)
    {
      int VAR_24;

      VAR_24 = FUNC_12 (VAR_19, 1);
      if (VAR_24 != VAR_9 && VAR_24 != VAR_10 && VAR_24 != VAR_11)
 return -1;

      if ((VAR_24 == VAR_9 && !(VAR_15 & VAR_0))
   || (VAR_24 == VAR_10 && !(VAR_15 & VAR_1))
   || VAR_24 == VAR_11)
 VAR_22 = 0;

      VAR_19 = FUNC_13 (VAR_19, 0, 0);
      FUNC_15 (FUNC_5 (VAR_19));
    }


  if (!FUNC_5 (VAR_19))
    return -1;


  VAR_20 = FUNC_11 (VAR_19, 0);
  if (!FUNC_8 (VAR_20))
    return -1;



  VAR_21 = FUNC_17 (FUNC_3 (VAR_19));

  if (VAR_21 == VAR_7
      || (VAR_23
   && !(VAR_5 <= VAR_21
        && VAR_21 <= VAR_6)))
    return -1;

  FUNC_14 (VAR_14);
  FUNC_15 (VAR_18 == VAR_13.operand[0] && VAR_19 == VAR_13.operand[1]);

  *VAR_16 = FUNC_16 (VAR_14, VAR_15, VAR_21, VAR_22 != 0, VAR_23);

  return VAR_22;
}
