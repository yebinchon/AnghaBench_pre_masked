
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 scalar_t__ FUNC_0 (int) ;

 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int) ;



 int FUNC_4 (int) ;
 int FUNC_5 (void*) ;



 int VAR_4 ;


 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 void* FUNC_6 (void*,int ) ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 int FUNC_7 (void*) ;
 int FUNC_8 () ;
 void* FUNC_9 (int,void*) ;
 int FUNC_10 (int) ;
 void* FUNC_11 (int,int) ;
 void* FUNC_12 () ;
 void* VAR_18 ;
 void* VAR_19 ;
 void* FUNC_13 (int,int *,int *) ;
 void* FUNC_14 (int,void*,void*,int ,void**,void**) ;
 int FUNC_15 (int) ;
 scalar_t__ VAR_20 ;
 int FUNC_16 (void*,scalar_t__) ;
 int FUNC_17 () ;
 int FUNC_18 (int) ;
 int FUNC_19 (void*,int) ;

__attribute__((used)) static bool
FUNC_20 (enum rtx_code VAR_21, rtx VAR_22, rtx VAR_23, rtx *VAR_24)
{
  enum machine_mode VAR_25 =
    FUNC_2 (VAR_22) != VAR_14 ? FUNC_2 (VAR_22) : FUNC_2 (VAR_23);



  if (VAR_25 == (VAR_7 ? VAR_9 : VAR_3))
    return 0;
  if (FUNC_0 (VAR_25))
    {
      rtx VAR_26 = ((void*)0), VAR_27 = ((void*)0);
      rtx VAR_28, VAR_29;


      if (VAR_21 == 137 || VAR_21 == 128 || VAR_21 == VAR_10 || VAR_21 == VAR_4
   || VAR_21 == VAR_6 || VAR_21 == VAR_13)
 return 0;


      if ((VAR_21 == 134 || VAR_21 == VAR_12 || VAR_21 == 132 || VAR_21 == VAR_11)
   && !VAR_8)
 {
   rtx VAR_30 = VAR_22;
   VAR_22 = VAR_23;
   VAR_23 = VAR_30;
   VAR_21 = FUNC_18 (VAR_21);
 }




      FUNC_17 ();
      VAR_28 = FUNC_14 (VAR_21, VAR_22, VAR_23, VAR_5,
        &VAR_26, &VAR_27);
      VAR_29 = FUNC_12 ();
      FUNC_8 ();

      if (VAR_26 || VAR_27)
 return 0;
      if (FUNC_2 (FUNC_6 (VAR_28, 0)) == VAR_1
   || FUNC_2 (FUNC_6 (VAR_28, 0)) == VAR_0)
        VAR_21 = FUNC_15 (FUNC_1 (VAR_28));
      else
 VAR_21 = FUNC_1 (VAR_28);
      if (VAR_21 != 129 && VAR_21 != 135)
 return 0;
      FUNC_7 (VAR_29);
      *VAR_24 = VAR_28;
      return 1;
    }
  if (!FUNC_4 (VAR_25))
    return 0;
  switch (VAR_21)
    {
    case 129:
    case 135:
      break;


    case 137:
    case 128:
      if (VAR_23 != VAR_15)
 return 0;
      VAR_23 = VAR_16;
      VAR_21 = (VAR_21 == 137 ? 129 : 135);
      break;


    case 133:
    case 131:
      if (FUNC_1 (VAR_23) == VAR_2)
 {
   VAR_23 = FUNC_11 (FUNC_5 (VAR_23) + 1, FUNC_2 (VAR_22));


   if (VAR_23 == VAR_15
       || !FUNC_19 (VAR_23, FUNC_2 (VAR_23)))
     return 0;
   VAR_21 = (VAR_21 == 133 ? 135 : 129);
 }
      else
 {
   rtx VAR_31 = VAR_23;
   VAR_23 = VAR_22;
   VAR_22 = VAR_31;
   VAR_21 = (VAR_21 == 133 ? 129 : 135);
 }
      break;


    case 130:
    case 136:
      if (VAR_25 == VAR_3 || VAR_23 != VAR_15)
 return 0;
      VAR_23 = FUNC_11 (1 << (FUNC_3 (VAR_25) - 1), VAR_25);
      VAR_21 = (VAR_21 == 130 ? 135 : 129);
      break;
    case 132:
    case 134:
      if (VAR_25 == VAR_3 || VAR_23 != VAR_17)
 return 0;
      VAR_23 = FUNC_11 (1 << (FUNC_3 (VAR_25) - 1), VAR_25);
      VAR_21 = (VAR_21 == 132 ? 135 : 129);
      break;

    default:
      return 0;
    }

  if (!FUNC_16 (VAR_22, VAR_14))
    {
      if (VAR_20)
 return 0;
      VAR_22 = FUNC_9 (VAR_25, VAR_22);
    }
  VAR_18 = VAR_22;
  VAR_19 = VAR_23;
  *VAR_24 = FUNC_13 (VAR_21, ((void*)0), ((void*)0));
  FUNC_10 (FUNC_1 (*VAR_24) == 129 || FUNC_1 (*VAR_24) == 135);
  return 1;
}
