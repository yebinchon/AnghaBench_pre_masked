
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef int rtx ;
typedef enum mode_class { ____Placeholder_mode_class } mode_class ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef int HOST_WIDE_INT ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_6 (scalar_t__,int,int ,int,int) ;
 int FUNC_7 (int,int,int ,int) ;
 int FUNC_8 (int,int ,int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int,int) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (int,int,int ) ;
 int VAR_15 ;

rtx
FUNC_13 (tree VAR_16, enum machine_mode VAR_17, int VAR_18)
{

  int VAR_19 = (VAR_18
   ? VAR_8
   : VAR_7);
  enum mode_class VAR_20 = FUNC_1 (VAR_17);
  int VAR_21;



  if (VAR_16 && FUNC_3 (VAR_16) == VAR_14)
    {
      HOST_WIDE_INT VAR_22 = FUNC_11 (VAR_16);
      FUNC_9 ((VAR_9 && VAR_22 <= 8)
    || (VAR_10 && VAR_22 <= 32));

      if (VAR_17 == VAR_1)
 return FUNC_8 (VAR_22,
       FUNC_5 (FUNC_4 (VAR_16)),
       VAR_6);
      else
 VAR_20 = VAR_3;
    }

  if (VAR_10 && VAR_16)
    {

      if (FUNC_3 (VAR_16) == VAR_5)
 {
   HOST_WIDE_INT VAR_23 = FUNC_11 (VAR_16);
   FUNC_9 (VAR_23 <= 32);

   return FUNC_6 (VAR_16, VAR_17, 0, 1, VAR_19);
 }


      else if (FUNC_3 (VAR_16) == VAR_12)
 {
   HOST_WIDE_INT VAR_24 = FUNC_11 (VAR_16);
   FUNC_9 (VAR_24 <= 32);

   return FUNC_7 (VAR_24, VAR_17, 0, VAR_19);
 }


      else if (VAR_20 == VAR_3 || VAR_20 == VAR_2)
 ;



      else if (FUNC_0 (VAR_16))
 {


   HOST_WIDE_INT VAR_25 = FUNC_11 (VAR_16);
   FUNC_9 (VAR_25 <= 32);

   VAR_17 = FUNC_12 (VAR_25 * VAR_0, VAR_4, 0);
   if (VAR_17 == VAR_1)
     return FUNC_7 (VAR_25, VAR_17, 0, VAR_19);
   else
     VAR_20 = VAR_4;
 }


      else if (VAR_20 == VAR_4 && FUNC_2 (VAR_17) < VAR_13)
 VAR_17 = VAR_15;
    }

  if ((VAR_20 == VAR_3 || VAR_20 == VAR_2) && VAR_11)
    VAR_21 = VAR_6;
  else
    VAR_21 = VAR_19;

  return FUNC_10 (VAR_17, VAR_21);
}
