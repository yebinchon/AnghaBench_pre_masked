
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_2__ {int (* comp_type_attributes ) (scalar_t__,scalar_t__) ;} ;





 int const VAR_0 ;

 int const VAR_1 ;
 int const VAR_2 ;


 int const FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (scalar_t__) ;


 int FUNC_15 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_16 (int ,int ) ;
 int FUNC_17 (scalar_t__) ;
 int FUNC_18 (scalar_t__,scalar_t__) ;
 int FUNC_19 (scalar_t__,scalar_t__) ;
 int FUNC_20 (scalar_t__,scalar_t__) ;
 int FUNC_21 (scalar_t__,scalar_t__) ;
 TYPE_1__ VAR_3 ;
 int FUNC_22 (scalar_t__,scalar_t__) ;
 int FUNC_23 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_24 (tree VAR_4, tree VAR_5)
{
  tree VAR_6 = VAR_4;
  tree VAR_7 = VAR_5;
  int VAR_8, VAR_9;



  if (VAR_6 == VAR_7 || !VAR_6 || !VAR_7
      || FUNC_0 (VAR_6) == VAR_0 || FUNC_0 (VAR_7) == VAR_0)
    return 1;



  if (FUNC_0 (VAR_6) == VAR_2 && FUNC_4 (VAR_6)
      && FUNC_9 (VAR_6))
    VAR_6 = FUNC_9 (VAR_6);

  if (FUNC_0 (VAR_7) == VAR_2 && FUNC_4 (VAR_7)
      && FUNC_9 (VAR_7))
    VAR_7 = FUNC_9 (VAR_7);






  if (FUNC_0 (VAR_6) == 133 && FUNC_0 (VAR_7) != 133)
    VAR_6 = FUNC_16 (FUNC_10 (VAR_6), FUNC_13 (VAR_6));
  else if (FUNC_0 (VAR_7) == 133 && FUNC_0 (VAR_6) != 133)
    VAR_7 = FUNC_16 (FUNC_10 (VAR_7), FUNC_13 (VAR_7));

  if (VAR_6 == VAR_7)
    return 1;



  if (FUNC_0 (VAR_6) != FUNC_0 (VAR_7))
    return 0;



  if (FUNC_11 (VAR_6) != FUNC_11 (VAR_7))
    return 0;





  if (FUNC_0 (VAR_6) != 135
      && FUNC_5 (VAR_6) == FUNC_5 (VAR_7))
    return 1;


  if (!(VAR_8 = VAR_3.comp_type_attributes (VAR_6, VAR_7)))
     return 0;


  VAR_9 = 0;

  switch (FUNC_0 (VAR_6))
    {

      case 134:
  VAR_9 = (FUNC_0 (VAR_7) == 134) &&
        FUNC_23 (FUNC_1 (VAR_6), FUNC_1 (VAR_7));
  break;


    case 131:

      if (FUNC_8 (VAR_6) != FUNC_8 (VAR_7)
   || FUNC_12 (VAR_6) != FUNC_12 (VAR_7))
 break;
      VAR_9 = (FUNC_1 (VAR_6) == FUNC_1 (VAR_7)
      ? 1 : FUNC_24 (FUNC_1 (VAR_6), FUNC_1 (VAR_7)));
      break;

    case 132:
      VAR_9 = FUNC_18 (VAR_6, VAR_7);
      break;

    case 135:
      {
 tree VAR_10 = FUNC_3 (VAR_6);
 tree VAR_11 = FUNC_3 (VAR_7);
 bool VAR_12, VAR_13;
 bool VAR_14, VAR_15;
 VAR_9 = 1;


 if (FUNC_1 (VAR_6) != FUNC_1 (VAR_7)
     && 0 == (VAR_9 = FUNC_24 (FUNC_1 (VAR_6), FUNC_1 (VAR_7))))
   return 0;


 if (VAR_10 == 0 || VAR_11 == 0 || VAR_10 == VAR_11)
   break;

 VAR_14 = !FUNC_6 (VAR_10);
 VAR_15 = !FUNC_6 (VAR_11);

 VAR_12 = (!VAR_14
         && (FUNC_0 (FUNC_7 (VAR_10)) != VAR_1
      || FUNC_0 (FUNC_6 (VAR_10)) != VAR_1));
 VAR_13 = (!VAR_15
         && (FUNC_0 (FUNC_7 (VAR_11)) != VAR_1
      || FUNC_0 (FUNC_6 (VAR_11)) != VAR_1));
 VAR_12 = VAR_12 || (VAR_14 && FUNC_17 (VAR_6));
 VAR_13 = VAR_13 || (VAR_15 && FUNC_17 (VAR_7));

 if (VAR_12 || VAR_13)
   break;
 if (VAR_14 && VAR_15)
   break;
 if (VAR_14 || VAR_15
     || !FUNC_22 (FUNC_7 (VAR_10), FUNC_7 (VAR_11))
     || !FUNC_22 (FUNC_6 (VAR_10), FUNC_6 (VAR_11)))
   VAR_9 = 0;

 break;
      }

    case 133:
    case 130:
    case 129:
      if (VAR_9 != 1 && !FUNC_19 (VAR_6, VAR_7))
 {
   tree VAR_16 = FUNC_2 (VAR_6);
   tree VAR_17 = FUNC_2 (VAR_7);

   if (! FUNC_15 (VAR_16, VAR_17)
       && ! FUNC_15 (VAR_17, VAR_16))
     break;

   if (VAR_8 != 2)
     return FUNC_21 (VAR_6, VAR_7);
   VAR_9 = FUNC_21 (VAR_6, VAR_7);
 }
      break;

    case 128:
      VAR_9 = FUNC_14 (VAR_6) == FUNC_14 (VAR_7)
     && FUNC_24 (FUNC_1 (VAR_6), FUNC_1 (VAR_7));
      break;

    default:
      break;
    }
  return VAR_8 == 2 && VAR_9 == 1 ? 2 : VAR_9;
}
