
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef int HOST_WIDE_INT ;


 size_t VAR_0 ;

 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;

 int VAR_3 ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;
 int VAR_7 ;
 int * VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static int
FUNC_7 (rtx VAR_13, enum machine_mode VAR_14, bool VAR_15)
{
  enum rtx_code VAR_16 = FUNC_1 (VAR_13);

  switch (VAR_16)
    {
    case 128:
      return FUNC_5 (VAR_13);

    case 138:
      return 0;

    case 129:

      if (VAR_13 == VAR_9 || VAR_13 == VAR_10
   || VAR_13 == VAR_12

   || (VAR_13 == VAR_7 && VAR_8[VAR_0]))
 return 0;

      if (FUNC_4 (VAR_13) >= VAR_2
   && FUNC_4 (VAR_13) <= VAR_3)
 return 0;
      return 1;

    case 139:
      return FUNC_7 (FUNC_6 (VAR_13, 0), VAR_14, VAR_15);

    case 136:




      if (!FUNC_7 (FUNC_6 (VAR_13, 0), VAR_14, VAR_15)
   && FUNC_1 (FUNC_6 (VAR_13, 1)) == VAR_1)
 {
   HOST_WIDE_INT VAR_17;

   if (!VAR_6
       || !VAR_15
       || FUNC_2 (VAR_14) == 0)
     return 0;

   VAR_17 = FUNC_3 (FUNC_6 (VAR_13, 1));
   return VAR_17 % FUNC_2 (VAR_14) != 0;
 }


      if (FUNC_6 (VAR_13, 0) == VAR_11 && FUNC_0 (FUNC_6 (VAR_13, 1)))
 return 0;

      return 1;

    case 137:
    case 130:
      return FUNC_7 (FUNC_6 (VAR_13, 1), VAR_14, VAR_15);

    case 132:
    case 131:
    case 135:
    case 134:
    case 133:
      return FUNC_7 (FUNC_6 (VAR_13, 0), VAR_14, VAR_15);

    default:
      break;
    }


  return 1;
}
