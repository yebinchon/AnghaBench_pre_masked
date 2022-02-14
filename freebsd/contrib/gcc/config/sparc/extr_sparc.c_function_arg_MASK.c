
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct sparc_args {scalar_t__ libcall_p; scalar_t__ prototype_p; } ;
typedef int rtx ;
typedef enum mode_class { ____Placeholder_mode_class } mode_class ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef int HOST_WIDE_INT ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_6 (scalar_t__,int,int,int,int) ;
 int FUNC_7 (struct sparc_args const*,int,scalar_t__,int,int,int*,int*) ;
 int FUNC_8 (int,int,int,int) ;
 int FUNC_9 (int,int ,int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int,int ,int ) ;
 int FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (int,int ) ;
 int FUNC_14 (int,int) ;
 int FUNC_15 (scalar_t__) ;
 int FUNC_16 (int,int ,int ) ;

rtx
FUNC_17 (const struct sparc_args *VAR_17, enum machine_mode VAR_18,
       tree VAR_19, int VAR_20, int VAR_21)
{
  int VAR_22 = (VAR_21
   ? VAR_8
   : VAR_10);
  int VAR_23, VAR_24, VAR_25;
  enum mode_class VAR_26 = FUNC_1 (VAR_18);

  VAR_23 = FUNC_7 (VAR_17, VAR_18, VAR_19, VAR_20, VAR_21,
    &VAR_24, &VAR_25);
  if (VAR_23 == -1)
    return 0;



  if (VAR_19 && FUNC_3 (VAR_19) == VAR_14)
    {
      HOST_WIDE_INT VAR_27 = FUNC_15 (VAR_19);
      FUNC_10 ((VAR_11 && VAR_27 <= 8)
    || (VAR_12 && VAR_27 <= 16));

      if (VAR_18 == VAR_1)
 return FUNC_9 (VAR_27,
       FUNC_5 (FUNC_4 (VAR_19)),
       VAR_7 + 2*VAR_23);
      else
 VAR_26 = VAR_3;
    }

  if (VAR_11)
    return FUNC_14 (VAR_18, VAR_24);



  if (VAR_19 && FUNC_3 (VAR_19) == VAR_6)
    {
      HOST_WIDE_INT VAR_28 = FUNC_15 (VAR_19);
      FUNC_10 (VAR_28 <= 16);

      return FUNC_6 (VAR_19, VAR_18, VAR_23, VAR_20, VAR_22);
    }


  else if (VAR_19 && FUNC_3 (VAR_19) == VAR_13)
    {
      HOST_WIDE_INT VAR_29 = FUNC_15 (VAR_19);
      FUNC_10 (VAR_29 <= 16);

      return FUNC_8 (VAR_29, VAR_18, VAR_23, VAR_24);
    }





  else if ((VAR_26 == VAR_3 || VAR_26 == VAR_2)
    && FUNC_2 (VAR_24))
    {
      rtx VAR_30 = FUNC_14 (VAR_18, VAR_24);
      if (VAR_17->prototype_p || VAR_17->libcall_p)
 {
     return VAR_30;
 }
      else
 {
   rtx VAR_31, VAR_32;

   if ((VAR_24 - VAR_7) < VAR_9 * 2)
     {
       int VAR_33;




       if (VAR_21)
  return VAR_30;

       VAR_33 = (VAR_10
   + (VAR_24 - VAR_7) / 2);

       VAR_31 = FUNC_12 (VAR_15, VAR_30, VAR_16);
       VAR_32 = FUNC_12 (VAR_15, FUNC_14 (VAR_18, VAR_33),
          VAR_16);
       return FUNC_13 (VAR_18, FUNC_11 (2, VAR_31, VAR_32));
     }
   else
     {
       VAR_31 = FUNC_12 (VAR_15, VAR_5, VAR_16);
       VAR_32 = FUNC_12 (VAR_15, VAR_30, VAR_16);
       return FUNC_13 (VAR_18, FUNC_11 (2, VAR_31, VAR_32));
     }
 }
    }



  else if (VAR_19 && FUNC_0 (VAR_19))
    {
      HOST_WIDE_INT VAR_34 = FUNC_15 (VAR_19);
      FUNC_10 (VAR_34 <= 16);

      VAR_18 = FUNC_16 (VAR_34 * VAR_0, VAR_4, 0);
    }

  return FUNC_14 (VAR_18, VAR_24);
}
