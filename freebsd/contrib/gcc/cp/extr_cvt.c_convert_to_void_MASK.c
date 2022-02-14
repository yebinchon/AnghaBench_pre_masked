
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef enum tree_code_class { ____Placeholder_tree_code_class } tree_code_class ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;


 scalar_t__ VAR_0 ;
 int const VAR_1 ;
 int FUNC_0 (scalar_t__) ;

 int FUNC_1 (int ) ;
 int const VAR_2 ;


 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;


 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int const VAR_13 ;
 int const VAR_14 ;

 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int const FUNC_5 (scalar_t__) ;
 int FUNC_6 (int) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__,int) ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (scalar_t__) ;

 scalar_t__ FUNC_13 (scalar_t__) ;
 scalar_t__ FUNC_14 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_15 (int const,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_16 (int const,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_17 (scalar_t__) ;
 int FUNC_18 (char*) ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_19 (scalar_t__) ;
 scalar_t__ FUNC_20 (scalar_t__) ;
 int FUNC_21 (char*,char const*) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_22 (scalar_t__) ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int FUNC_23 (int ,char*,...) ;

tree
FUNC_24 (tree VAR_23, const char *VAR_24)
{
  if (VAR_23 == VAR_15
      || FUNC_10 (VAR_23) == VAR_15)
    return VAR_15;
  if (!FUNC_10 (VAR_23))
    return VAR_23;
  if (FUNC_19 (VAR_23))
    return VAR_15;
  if (FUNC_5 (VAR_23) == VAR_13)
    {
      FUNC_18 ("pseudo-destructor is not called");
      return VAR_15;
    }
  if (FUNC_13 (FUNC_10 (VAR_23)))
    return VAR_23;
  switch (FUNC_5 (VAR_23))
    {
    case 133:
      {

 tree VAR_25 = FUNC_8 (VAR_23,1);
 tree VAR_26 = FUNC_8 (VAR_23,2);
 tree VAR_27 = FUNC_24
   (VAR_25, (VAR_24 && !FUNC_9 (VAR_26)
   ? "second operand of conditional" : ((void*)0)));
 tree VAR_28 = FUNC_24
   (VAR_26, (VAR_24 && !FUNC_9 (VAR_25)
   ? "third operand of conditional" : ((void*)0)));

 VAR_23 = FUNC_16 (133, FUNC_10 (VAR_27),
         FUNC_8 (VAR_23, 0), VAR_27, VAR_28);
 break;
      }

    case 134:
      {

 tree VAR_29 = FUNC_8 (VAR_23,1);
 tree VAR_30 = FUNC_24
   (VAR_29, (VAR_24 && !FUNC_7 (VAR_23)
   ? "right-hand operand of comma" : ((void*)0)));

 if (VAR_30 != VAR_29)
   {
     tree VAR_31 = FUNC_15 (134, FUNC_10 (VAR_30),
        FUNC_8 (VAR_23, 0), VAR_30);
     VAR_23 = VAR_31;
   }

 break;
      }

    case 131:
    case 130:

      break;

    case 135:
      break;

    case 132:
      {
 tree VAR_32 = FUNC_10 (VAR_23);
 int VAR_33 = FUNC_5 (FUNC_10 (FUNC_8 (VAR_23, 0)))
      == VAR_14;
 int VAR_34 = FUNC_12 (VAR_32);
 int VAR_35 = FUNC_1 (FUNC_17 (VAR_32));


 if (VAR_34 && !VAR_35)
   FUNC_23 (0, "object of incomplete type %qT will not be accessed in %s",
     VAR_32, VAR_24 ? VAR_24 : "void context");


 else if (VAR_34 && (VAR_33 || FUNC_4 (VAR_32)))
   FUNC_23 (0, "object of type %qT will not be accessed in %s",
     FUNC_10 (FUNC_8 (VAR_23, 0)),
     VAR_24 ? VAR_24 : "void context");
 if (VAR_33 || !VAR_34 || !VAR_35 || FUNC_4 (VAR_32))
   VAR_23 = FUNC_8 (VAR_23, 0);

 break;
      }

    case 128:
      {

 tree VAR_36 = FUNC_10 (VAR_23);
 int VAR_37 = FUNC_1 (FUNC_17 (VAR_36));

 if (FUNC_12 (VAR_36) && !VAR_37)
   FUNC_23 (0, "object %qE of incomplete type %qT will not be accessed in %s",
     VAR_23, VAR_36, VAR_24 ? VAR_24 : "void context");
 break;
      }

    case 129:




      if (FUNC_2 (VAR_23)
   && FUNC_11 (FUNC_10 (VAR_23)))
 {
   tree VAR_38 = FUNC_3 (VAR_23);
   if (FUNC_5 (VAR_38) == VAR_1
       && !FUNC_0 (VAR_38))
     {
       tree VAR_39 = FUNC_8 (VAR_38, 0);
       VAR_23 = FUNC_16 (135, FUNC_10 (FUNC_10 (FUNC_10 (VAR_39))),
        VAR_39, FUNC_8 (VAR_38, 1), VAR_6);
     }
 }
      break;

    default:;
    }
  {
    tree VAR_40 = VAR_23;

    if (FUNC_5 (VAR_40) == VAR_0)
      VAR_40 = FUNC_8 (VAR_23, 0);
    if (FUNC_22 (VAR_40))
      {


 FUNC_21 ("%s cannot resolve address of overloaded function",
      VAR_24 ? VAR_24 : "void cast");
 VAR_23 = VAR_21;
      }
    else if (VAR_24 && VAR_40 == VAR_23 && FUNC_20 (VAR_40))
      {

 FUNC_23 (VAR_7, "%s is a reference, not call, to function %qE",
   VAR_24, VAR_23);
 if (FUNC_5 (VAR_23) == VAR_2)
   VAR_23 = FUNC_8 (VAR_23, 0);
      }
  }

  if (VAR_23 != VAR_15 && !FUNC_13 (FUNC_10 (VAR_23)))
    {
      if (VAR_24
   && VAR_22
   && !FUNC_7 (VAR_23)
   && !VAR_16)
 {


   if (!FUNC_9 (VAR_23))
     FUNC_23 (VAR_8, "%s has no effect", VAR_24);
   else
     {
       tree VAR_41;
       enum tree_code VAR_42;
       enum tree_code_class VAR_43;

       VAR_41 = VAR_23;
       while (FUNC_5 (VAR_41) == 130)
  VAR_41 = FUNC_8 (VAR_41, 0);

       VAR_42 = FUNC_5 (VAR_41);
       VAR_43 = FUNC_6 (VAR_42);
       if (VAR_43 == VAR_18
     || VAR_43 == VAR_19
     || (VAR_43 == VAR_17
         && !(VAR_42 == VAR_5
       || VAR_42 == VAR_4
       || VAR_42 == VAR_11
       || VAR_42 == VAR_12
       || VAR_42 == VAR_9
       || VAR_42 == VAR_10)))
  FUNC_23 (VAR_8, "value computed is not used");
     }
 }
      VAR_23 = FUNC_14 (VAR_3, VAR_20, VAR_23);
    }
  if (! FUNC_9 (VAR_23))
    VAR_23 = VAR_21;
  return VAR_23;
}
