
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum attr_unit { ____Placeholder_attr_unit } attr_unit ;
typedef enum attr_type { ____Placeholder_attr_type } attr_type ;
typedef enum attr_memory { ____Placeholder_attr_memory } attr_memory ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int ,int ,int) ;
 int VAR_12 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static int
FUNC_13 (rtx VAR_13, rtx VAR_14, rtx VAR_15, int VAR_16)
{
  enum attr_type VAR_17, VAR_18;
  enum attr_memory VAR_19;
  rtx VAR_20, VAR_21;
  int VAR_22;


  if (FUNC_1 (VAR_14) != 0)
    return 0;

  VAR_22 = FUNC_10 (VAR_15);


  if (VAR_22 < 0 || FUNC_10 (VAR_13) < 0)
    return VAR_16;

  VAR_17 = FUNC_6 (VAR_13);
  VAR_18 = FUNC_6 (VAR_15);

  switch (VAR_12)
    {
    case 129:

      if (FUNC_8 (VAR_13, VAR_15, VAR_17))
 VAR_16 += 1;


      if (FUNC_9 (VAR_13, VAR_15, VAR_17))
 VAR_16 = 0;


      if (VAR_17 == VAR_6
   && FUNC_5 (VAR_13) == VAR_3
   && !FUNC_8 (VAR_13, VAR_15, VAR_17))
 VAR_16 += 1;
      break;

    case 128:
      VAR_19 = FUNC_5 (VAR_13);


      if (FUNC_4 (VAR_15))
 VAR_16 += 5;


      if (VAR_17 == VAR_6
   && (VAR_20 = FUNC_12 (VAR_15)) != VAR_4
   && (VAR_21 = FUNC_12 (VAR_13)) != VAR_4
   && FUNC_11 (FUNC_2 (VAR_20), FUNC_3 (VAR_21))
   && FUNC_0 (FUNC_2 (VAR_21)) == VAR_0)
 VAR_16 += 1;




      if ((VAR_19 == VAR_2 || VAR_19 == VAR_1)
   && !FUNC_8 (VAR_13, VAR_15, VAR_17))
 {


   if (VAR_18 == VAR_7
       || VAR_18 == VAR_6)
     VAR_16 = 1;
   else if (VAR_16 > 1)
     VAR_16--;
 }
      break;

    case 131:
      VAR_19 = FUNC_5 (VAR_13);



      if ((VAR_17 == VAR_9 || VAR_17 == VAR_8)
   && (VAR_18 == VAR_9 || VAR_18 == VAR_8))
 return 1;


      if (FUNC_4 (VAR_15))
 VAR_16 += 5;




      if ((VAR_19 == VAR_2 || VAR_19 == VAR_1)
   && !FUNC_8 (VAR_13, VAR_15, VAR_17))
 {


   if (VAR_18 == VAR_7
       || VAR_18 == VAR_6)
     VAR_16 = 1;
   else if (VAR_16 > 2)
     VAR_16 -= 2;
   else
     VAR_16 = 1;
 }
      break;

    case 134:
    case 130:
    case 135:
    case 133:
    case 132:
      VAR_19 = FUNC_5 (VAR_13);




      if ((VAR_19 == VAR_2 || VAR_19 == VAR_1)
   && !FUNC_8 (VAR_13, VAR_15, VAR_17))
 {
   enum attr_unit VAR_23 = FUNC_7 (VAR_13);
   int VAR_24 = 3;






   if (VAR_23 == VAR_10 || VAR_23 == VAR_11)
     VAR_24 = 3;
   else
     VAR_24 = VAR_5 ? 2 : 0;

   if (VAR_16 >= VAR_24)
     VAR_16 -= VAR_24;
   else
     VAR_16 = 0;
 }

    default:
      break;
    }

  return VAR_16;
}
