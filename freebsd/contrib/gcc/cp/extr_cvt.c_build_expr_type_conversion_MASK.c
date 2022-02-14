
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;







 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;


 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__,int ) ;
 int FUNC_7 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (char*,scalar_t__,...) ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 scalar_t__ VAR_10 ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (int ,char*) ;

tree
FUNC_14 (int VAR_11, tree VAR_12, bool VAR_13)
{
  tree VAR_14 = FUNC_3 (VAR_12);
  tree VAR_15 = VAR_1;
  tree VAR_16 = VAR_1;

  if (VAR_12 == VAR_10
      && (VAR_11 & VAR_5)
      && !(VAR_11 & VAR_6))
    FUNC_13 (VAR_2, "converting NULL to non-pointer type");

  VAR_14 = FUNC_3 (VAR_12);

  if (VAR_14 == VAR_9)
    return VAR_9;

  if (! FUNC_0 (VAR_14))
    switch (FUNC_2 (VAR_14))
      {
      case 131:
 if ((VAR_11 & VAR_6) && FUNC_12 (VAR_12))
   return VAR_12;


      case 134:
 return (VAR_11 & VAR_5) ? VAR_12 : VAR_1;
      case 133:
 return (VAR_11 & VAR_3) ? VAR_12 : VAR_1;
      case 129:
 return (VAR_11 & VAR_4) ? VAR_12 : VAR_1;
      case 130:
 return (VAR_11 & VAR_7) ? VAR_12 : VAR_1;

      case 132:
      case 135:
 return (VAR_11 & VAR_7) ? FUNC_8 (VAR_12)
     : VAR_1;

      case 128:
 if ((VAR_11 & VAR_8) == 0)
   return VAR_1;
 switch (FUNC_2 (FUNC_3 (VAR_14)))
   {
   case 131:
   case 134:
     return (VAR_11 & VAR_5) ? VAR_12 : VAR_1;
   case 133:
     return (VAR_11 & VAR_3) ? VAR_12 : VAR_1;
   case 129:
     return (VAR_11 & VAR_4) ? VAR_12 : VAR_1;
   default:
     return VAR_1;
   }

      default:
 return VAR_1;
      }



  if (!FUNC_7 (VAR_14, VAR_12))
    return VAR_9;
  if (!FUNC_5 (VAR_14))
    return VAR_1;

  for (VAR_15 = FUNC_10 (VAR_14); VAR_15; VAR_15 = FUNC_1 (VAR_15))
    {
      int VAR_17 = 0;
      tree VAR_18;
      tree VAR_19 = FUNC_4 (VAR_15);

      if (VAR_16 && VAR_16 == VAR_19)
 continue;

      VAR_18 = FUNC_11 (FUNC_3 (FUNC_3 (VAR_19)));

      switch (FUNC_2 (VAR_18))
 {
 case 134:
 case 131:
   VAR_17 = (VAR_11 & VAR_5); break;
 case 133:
   VAR_17 = (VAR_11 & VAR_3); break;
 case 129:
   VAR_17 = (VAR_11 & VAR_4); break;
 case 130:
   VAR_17 = (VAR_11 & VAR_7); break;

 case 128:
   if ((VAR_11 & VAR_8) == 0)
     break;
   switch (FUNC_2 (FUNC_3 (VAR_18)))
     {
     case 134:
     case 131:
       VAR_17 = (VAR_11 & VAR_5); break;
     case 133:
       VAR_17 = (VAR_11 & VAR_3); break;
     case 129:
       VAR_17 = (VAR_11 & VAR_4); break;
     default:
       break;
     }
   break;

 default:
   break;
 }

      if (VAR_17)
 {
   if (VAR_16)
     {
       if (VAR_13)
  {
    FUNC_9 ("ambiguous default type conversion from %qT",
    VAR_14);
    FUNC_9 ("  candidate conversions include %qD and %qD",
    VAR_16, VAR_19);
  }
       return VAR_9;
     }
   else
     VAR_16 = VAR_19;
 }
    }

  if (VAR_16)
    {
      tree VAR_20 = FUNC_11 (FUNC_3 (FUNC_3 (VAR_16)));
      return FUNC_6 (VAR_20, VAR_12, VAR_0);
    }

  return VAR_1;
}
