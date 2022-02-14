
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef int cp_lvalue_kind ;




 int FUNC_0 (scalar_t__) ;




 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int VAR_0 ;




 int VAR_1 ;







 int VAR_2 ;





 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__,int) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__) ;




 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_12 () ;

__attribute__((used)) static cp_lvalue_kind
FUNC_13 (tree VAR_9,
     int VAR_10)
{
  cp_lvalue_kind VAR_11 = VAR_5;
  cp_lvalue_kind VAR_12 = VAR_5;

  if (FUNC_6 (FUNC_11 (VAR_9)) == VAR_2)
    return VAR_6;

  if (VAR_9 == VAR_8)
    return VAR_5;

  switch (FUNC_6 (VAR_9))
    {


    case 138:
    case 139:
    case 135:
    case 131:
    case 128:
    case 137:
    case 146:
      return FUNC_13 (FUNC_7 (VAR_9, 0),
    VAR_10);

    case 151:
      VAR_11 = FUNC_13 (FUNC_7 (VAR_9, 0),
        VAR_10);

      if (!VAR_11


   || FUNC_6 (FUNC_7 (VAR_9, 1)) != VAR_0)
 ;
      else if (FUNC_1 (FUNC_7 (VAR_9, 1)))
 {


   VAR_11 &= ~VAR_6;

   VAR_11 |= VAR_3;
 }
      else if (FUNC_5 (FUNC_7 (VAR_9, 1)))
 VAR_11 |= VAR_7;

      return VAR_11;

    case 133:
      return VAR_6;

    case 148:
    case 130:
      if (FUNC_8 (VAR_9) && ! FUNC_10 (VAR_9)
   && FUNC_3 (VAR_9)
   && FUNC_2 (VAR_9))
 return VAR_5;
    case 145:
    case 153:
    case 140:
    case 136:
      if (FUNC_6 (FUNC_11 (VAR_9)) != VAR_1)
 return VAR_6;
      break;


    case 134:
      FUNC_12 ();
    case 144:
    case 143:

      if (FUNC_9 (FUNC_7 (VAR_9, 0))
   || FUNC_9 (FUNC_7 (VAR_9, 1)))
 return VAR_5;
      VAR_11 = FUNC_13 (FUNC_7 (VAR_9, 0),
        VAR_10);
      VAR_12 = FUNC_13 (FUNC_7 (VAR_9, 1),
        VAR_10);
      break;

    case 149:
      VAR_11 = FUNC_13 (FUNC_7 (VAR_9, 1),
        VAR_10);
      VAR_12 = FUNC_13 (FUNC_7 (VAR_9, 2),
        VAR_10);
      break;

    case 142:
      return VAR_6;

    case 150:
      return FUNC_13 (FUNC_7 (VAR_9, 1),
    VAR_10);

    case 132:
      return VAR_10 ? VAR_4 : VAR_5;

    case 129:
      return (VAR_10
       && FUNC_0 (FUNC_11 (VAR_9))
       ? VAR_4 : VAR_5);

    case 152:

      return VAR_5;

    case 147:


      return (FUNC_4 (VAR_9)
       ? VAR_5 : VAR_6);

    case 141:





      return VAR_6;

    default:
      break;
    }



  if (!VAR_11 || !VAR_12)
    return VAR_5;



  VAR_11 = VAR_11 | VAR_12;


  if ((VAR_11 & ~VAR_6) != VAR_5)
    VAR_11 &= ~VAR_6;
  return VAR_11;
}
