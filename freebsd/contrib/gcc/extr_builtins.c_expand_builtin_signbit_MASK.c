
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct real_format {int signbit_ro; scalar_t__ has_signed_zero; } ;
typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef int HOST_WIDE_INT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct real_format* FUNC_3 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_10 (int,int ,int ,int ,int ,int,int ) ;
 int FUNC_11 (int ,int ,int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int,int ,int ,int ,int) ;
 int FUNC_14 (int ,int ,int ,int ) ;
 int FUNC_15 (int,int ) ;
 int FUNC_16 (int,int ) ;
 int FUNC_17 (int,int,int) ;
 int FUNC_18 (int) ;
 int FUNC_19 (int ,int,int) ;
 int FUNC_20 (int ,int ,int ) ;
 int VAR_17 ;

__attribute__((used)) static rtx
FUNC_21 (tree VAR_18, rtx VAR_19)
{
  const struct real_format *VAR_20;
  enum machine_mode VAR_21, VAR_22, VAR_23;
  HOST_WIDE_INT VAR_24, VAR_25;
  tree VAR_26, VAR_27;
  int VAR_28, VAR_29;
  rtx VAR_30;

  VAR_27 = FUNC_4 (VAR_18, 1);
  if (!FUNC_20 (VAR_27, VAR_9, VAR_12))
    return 0;

  VAR_26 = FUNC_6 (VAR_27);
  VAR_21 = FUNC_7 (FUNC_5 (VAR_26));
  VAR_23 = FUNC_7 (FUNC_5 (VAR_18));
  VAR_20 = FUNC_3 (VAR_21);



  VAR_29 = VAR_20->signbit_ro;
  if (VAR_29 < 0)
  {

    if (VAR_20->has_signed_zero && FUNC_2 (VAR_21))
      return 0;

    VAR_26 = FUNC_14 (VAR_5, FUNC_5 (VAR_18), VAR_26,
         FUNC_9 (FUNC_5 (VAR_26), VAR_16));
    return FUNC_11 (VAR_26, VAR_19, VAR_13, VAR_2);
  }

  VAR_30 = FUNC_12 (VAR_26);
  if (FUNC_1 (VAR_21) <= VAR_11)
    {
      VAR_22 = FUNC_18 (VAR_21);
      if (VAR_22 == VAR_1)
 return 0;
      VAR_30 = FUNC_16 (VAR_22, VAR_30);
    }
  else
    {
      VAR_22 = VAR_17;

      if (VAR_3)
 VAR_28 = (FUNC_0 (VAR_21) - VAR_29) / VAR_0;
      else
 VAR_28 = VAR_29 / VAR_0;
      VAR_30 = FUNC_19 (VAR_30, VAR_28, VAR_21);
      VAR_29 = VAR_29 % VAR_0;
    }




  VAR_30 = FUNC_15 (VAR_22, VAR_30);





  if (VAR_29 < FUNC_0 (VAR_23))
    {
      if (VAR_29 < VAR_4)
 {
   VAR_24 = 0;
   VAR_25 = (HOST_WIDE_INT) 1 << VAR_29;
 }
      else
 {
   VAR_24 = (HOST_WIDE_INT) 1 << (VAR_29 - VAR_4);
   VAR_25 = 0;
 }

      if (VAR_22 != VAR_23)
 VAR_30 = FUNC_16 (VAR_23, VAR_30);
      VAR_30 = FUNC_10 (VAR_23, VAR_14, VAR_30,
      FUNC_17 (VAR_25, VAR_24, VAR_23),
      VAR_6, 1, VAR_8);
    }
  else
    {



      VAR_30 = FUNC_13 (VAR_10, VAR_22, VAR_30,
      FUNC_8 (VAR_7, VAR_29), VAR_6, 1);
      VAR_30 = FUNC_16 (VAR_23, VAR_30);
      VAR_30 = FUNC_10 (VAR_23, VAR_14, VAR_30, VAR_15,
      VAR_6, 1, VAR_8);
    }

  return VAR_30;
}
