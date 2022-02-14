
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef enum entry_type { ____Placeholder_entry_type } entry_type ;
typedef int HOST_WIDE_INT ;


 int VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_8 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_9 (int *) ;
 int * FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int VAR_7 ;
 int FUNC_12 (int *) ;
 int VAR_8 ;
 int * FUNC_13 (int *) ;
 int * FUNC_14 (int *) ;

 int VAR_9 ;
 int FUNC_15 (int *) ;

 int FUNC_16 (int *,int ) ;

 int VAR_10 ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,int ,int ) ;
 int FUNC_19 () ;
 int FUNC_20 (int *,int *,int *) ;
 int FUNC_21 (int *,int*) ;
 int * FUNC_22 (int *,int) ;
 int * FUNC_23 (int *) ;
 int FUNC_24 (int,int) ;

__attribute__((used)) static enum entry_type
FUNC_25 (rtx VAR_11, enum machine_mode *VAR_12,
       enum machine_mode *VAR_13)
{
  enum rtx_code VAR_14;
  rtx VAR_15 = ((void*)0);
  rtx VAR_16 = ((void*)0);
  rtx VAR_17 = ((void*)0);
  rtx VAR_18 = ((void*)0);
  rtx VAR_19 = ((void*)0);
  rtx VAR_20 = ((void*)0);
  enum machine_mode VAR_21;
  enum machine_mode VAR_22;
  HOST_WIDE_INT VAR_23 = 0;
  HOST_WIDE_INT VAR_24 = 0;
  int VAR_25 = 0;

  *VAR_12 = VAR_2;
  *VAR_13 = VAR_2;

  if (!VAR_11)
    return VAR_4;

  if (!FUNC_6 (VAR_11))
    return VAR_4;

  VAR_14 = FUNC_21 (VAR_11, VAR_12);
  switch (VAR_14)
    {
    case 130:
    case 128:
      VAR_18 = FUNC_22 (VAR_11, 0);



      VAR_19 = FUNC_10 (VAR_11);
      if (!VAR_19 || !FUNC_6 (VAR_19))
 return VAR_4;

      if (!FUNC_20 (VAR_18, FUNC_10 (VAR_19), VAR_11))
 return VAR_4;

      if (FUNC_18 (VAR_19, VAR_7, VAR_5))
 return VAR_4;

      if (FUNC_18 (VAR_19, VAR_8, VAR_5))
 return VAR_4;


      if (FUNC_1 (FUNC_9 (VAR_19)) == VAR_6
    && FUNC_17 (FUNC_9 (VAR_19)) >= 0)
 return VAR_4;




      VAR_20 = FUNC_8 (VAR_11);
      if (VAR_20
   && FUNC_6 (VAR_20)
   && (FUNC_21 (VAR_20, &VAR_22) !=
       VAR_4))
 {
   rtx VAR_26 = FUNC_22 (VAR_11, 1);
   rtx VAR_27 = FUNC_22 (VAR_20, 0);

   if (FUNC_11 (VAR_26) == FUNC_11 (VAR_27))
     return VAR_4;
 }

      if (VAR_14 == 130)
 return VAR_9;
      else
 return VAR_10;

    case 129:




      VAR_17 = FUNC_23 (VAR_11);
      if (!VAR_17)
 return VAR_4;
      VAR_15 = FUNC_14 (VAR_17);
      VAR_16 = FUNC_13 (VAR_17);



      if (!FUNC_12 (VAR_16) && !FUNC_15 (VAR_16))
 return VAR_4;

      switch (FUNC_1 (VAR_15))
 {
 case 130:
   *VAR_12 = FUNC_2 (FUNC_16 (VAR_15, 0));
   *VAR_13 = VAR_2;
   return VAR_1;
 case 128:
   *VAR_12 = VAR_2;
   *VAR_13 = FUNC_2 (FUNC_16 (VAR_15, 0));
   return VAR_1;
 case 131:

   VAR_23 = FUNC_7 (VAR_15);


   for (VAR_21 = FUNC_0 (VAR_3), VAR_25 = 0;
        FUNC_3 (VAR_21) < VAR_0;
        VAR_21 = FUNC_5 (VAR_21), VAR_25++)
     {
       VAR_24 = FUNC_24 (VAR_23, VAR_21);
         if (VAR_24 == VAR_23 && *VAR_12 == VAR_2)
  *VAR_12 = VAR_21;
       if (VAR_23 == (VAR_23 & (HOST_WIDE_INT)FUNC_4 (VAR_21))
    && *VAR_13 == VAR_2)
  *VAR_13 = VAR_21;
       if (*VAR_12 != VAR_2
    && *VAR_13 !=VAR_2)
  return VAR_1;
     }
   if (*VAR_12 != VAR_2
       || *VAR_13 !=VAR_2)
     return VAR_1;
   return VAR_4;
 default:
   return VAR_4;
 }
    default:
      FUNC_19 ();
    }
}
