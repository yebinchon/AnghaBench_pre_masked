
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct algorithm {int* op; int ops; int* log; } ;
typedef scalar_t__ rtx ;
typedef enum mult_variant { ____Placeholder_mult_variant } mult_variant ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef int HOST_WIDE_INT ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (scalar_t__) ;
 int VAR_5 ;



 int VAR_6 ;




 int VAR_7 ;
 int FUNC_6 (int ,int) ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_7 (int,scalar_t__) ;
 scalar_t__ FUNC_8 (int ,int,scalar_t__,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_9 (int,int ,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_10 (int ,scalar_t__) ;
 scalar_t__ FUNC_11 (int,scalar_t__) ;
 int FUNC_12 (int) ;
 int FUNC_13 () ;
 scalar_t__ FUNC_14 (int,scalar_t__) ;
 int FUNC_15 (int,scalar_t__,scalar_t__) ;
 int FUNC_16 (int,scalar_t__,int ) ;
 int FUNC_17 (int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_18 () ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_19 (scalar_t__,int ,int ) ;

__attribute__((used)) static rtx
FUNC_20 (enum machine_mode VAR_12, rtx VAR_13, HOST_WIDE_INT VAR_14,
     rtx VAR_15, const struct algorithm *VAR_16,
     enum mult_variant VAR_17)
{
  HOST_WIDE_INT VAR_18;
  rtx VAR_19, VAR_20, VAR_21;
  int VAR_22;
  enum machine_mode VAR_23;



  if (FUNC_4 (VAR_13))
    VAR_13 = FUNC_11 (VAR_12, VAR_13);




  if (VAR_16->op[0] == VAR_7)
    {
      VAR_20 = FUNC_7 (VAR_12, VAR_8);
      VAR_18 = 0;
    }
  else if (VAR_16->op[0] == VAR_6)
    {
      VAR_20 = FUNC_7 (VAR_12, VAR_13);
      VAR_18 = 1;
    }
  else
    FUNC_13 ();

  for (VAR_22 = 1; VAR_22 < VAR_16->ops; VAR_22++)
    {
      int VAR_24 = VAR_16->log[VAR_22];
      rtx VAR_25 = VAR_11 ? 0 : VAR_20;
      rtx VAR_26
 = (VAR_22 == VAR_16->ops - 1 && VAR_15 != 0 && VAR_17 != VAR_5
    && !VAR_11)
   ? VAR_15 : 0;
      rtx VAR_27 = VAR_11 ? 0 : VAR_20;

      switch (VAR_16->op[VAR_22])
 {
 case 131:
   VAR_20 = FUNC_8 (VAR_0, VAR_12, VAR_20,
    FUNC_6 (VAR_2, VAR_24),
    VAR_1, 0);
   VAR_18 <<= VAR_24;
   break;

 case 132:
   VAR_21 = FUNC_8 (VAR_0, VAR_12, VAR_13,
         FUNC_6 (VAR_2, VAR_24),
         VAR_1, 0);
   VAR_20 = FUNC_10 (FUNC_17 (VAR_12, VAR_20, VAR_21),
     VAR_26 ? VAR_26 : VAR_27);
   VAR_18 += (HOST_WIDE_INT) 1 << VAR_24;
   break;

 case 128:
   VAR_21 = FUNC_8 (VAR_0, VAR_12, VAR_13,
         FUNC_6 (VAR_2, VAR_24),
         VAR_1, 0);
   VAR_20 = FUNC_10 (FUNC_15 (VAR_12, VAR_20, VAR_21),
     VAR_26 ? VAR_26 : VAR_27);
   VAR_18 -= (HOST_WIDE_INT) 1 << VAR_24;
   break;

 case 133:
   VAR_20 = FUNC_8 (VAR_0, VAR_12, VAR_20,
    FUNC_6 (VAR_2, VAR_24),
    VAR_25,
    0);
   VAR_20 = FUNC_10 (FUNC_17 (VAR_12, VAR_20, VAR_13),
     VAR_26 ? VAR_26 : VAR_27);
   VAR_18 = (VAR_18 << VAR_24) + 1;
   break;

 case 129:
   VAR_20 = FUNC_8 (VAR_0, VAR_12, VAR_20,
    FUNC_6 (VAR_2, VAR_24),
    VAR_25, 0);
   VAR_20 = FUNC_10 (FUNC_15 (VAR_12, VAR_20, VAR_13),
     VAR_26 ? VAR_26 : VAR_27);
   VAR_18 = (VAR_18 << VAR_24) - 1;
   break;

 case 134:
   VAR_21 = FUNC_8 (VAR_0, VAR_12, VAR_20,
         FUNC_6 (VAR_2, VAR_24),
         VAR_1, 0);
   VAR_20 = FUNC_10 (FUNC_17 (VAR_12, VAR_20, VAR_21),
     VAR_26 ? VAR_26 : VAR_27);
   VAR_18 += VAR_18 << VAR_24;
   break;

 case 130:
   VAR_21 = FUNC_8 (VAR_0, VAR_12, VAR_20,
         FUNC_6 (VAR_2, VAR_24),
         VAR_1, 0);
   VAR_20 = FUNC_10 (FUNC_15 (VAR_12, VAR_21, VAR_20),
     (VAR_26
      ? VAR_26 : (VAR_11 ? 0 : VAR_21)));
   VAR_18 = (VAR_18 << VAR_24) - VAR_18;
   break;

 default:
   FUNC_13 ();
 }






      VAR_21 = VAR_13, VAR_23 = VAR_12;
      if (FUNC_1 (VAR_20) == VAR_4)
 {
   VAR_23 = FUNC_2 (FUNC_5 (VAR_20));
   VAR_21 = FUNC_14 (VAR_23, VAR_13);
 }

      VAR_19 = FUNC_18 ();
      FUNC_19 (VAR_19, VAR_3,
      FUNC_16 (VAR_23, VAR_21, FUNC_0 (VAR_18)));
    }

  if (VAR_17 == VAR_10)
    {
      VAR_18 = -VAR_18;
      VAR_20 = FUNC_9 (VAR_12, VAR_9, VAR_20, VAR_15, 0);
    }
  else if (VAR_17 == VAR_5)
    {
      VAR_18 = VAR_18 + 1;
      VAR_20 = FUNC_10 (FUNC_17 (VAR_12, VAR_20, VAR_13), VAR_15);
    }



  VAR_14 &= FUNC_3 (VAR_12);
  VAR_18 &= FUNC_3 (VAR_12);
  FUNC_12 (VAR_14 == VAR_18);

  return VAR_20;
}
