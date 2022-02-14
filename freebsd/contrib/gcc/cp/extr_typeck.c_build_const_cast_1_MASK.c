
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (int ,scalar_t__,int ) ;
 int FUNC_9 (scalar_t__,scalar_t__,int ,char*) ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 int FUNC_13 (char*,scalar_t__,...) ;
 scalar_t__ VAR_5 ;
 int FUNC_14 (int) ;
 int VAR_6 ;
 int FUNC_15 (scalar_t__) ;
 scalar_t__ FUNC_16 (scalar_t__) ;
 int FUNC_17 (scalar_t__) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static tree
FUNC_18 (tree VAR_9, tree VAR_10, bool VAR_11,
      bool *VAR_12)
{
  tree VAR_13;
  tree VAR_14;



  FUNC_14 (VAR_9 != VAR_5);


  FUNC_14 (!VAR_6);


  if (VAR_12)
    *VAR_12 = 0;

  if (!FUNC_0 (VAR_9) && !FUNC_4 (VAR_9))
    {
      if (VAR_11)
 FUNC_13 ("invalid use of const_cast with type %qT, "
        "which is not a pointer, "
        "reference, nor a pointer-to-data-member type", VAR_9);
      return VAR_5;
    }

  if (FUNC_1 (FUNC_3 (VAR_9)) == VAR_1)
    {
      if (VAR_11)
 FUNC_13 ("invalid use of const_cast with type %qT, which is a pointer "
        "or reference to a function type", VAR_9);
      return VAR_5;
    }


  FUNC_17 (VAR_9);

  VAR_13 = FUNC_3 (VAR_10);

  if (FUNC_1 (VAR_13) == VAR_4)
    VAR_13 = FUNC_3 (VAR_13);







  if (FUNC_1 (VAR_9) == VAR_4)
    {
      VAR_14 = VAR_9;
      if (! FUNC_15 (VAR_10))
 {
   if (VAR_11)
     FUNC_13 ("invalid const_cast of an rvalue of type %qT to type %qT",
     VAR_13, VAR_9);
   return VAR_5;
 }
      VAR_9 = FUNC_7 (FUNC_3 (VAR_9));
      VAR_13 = FUNC_7 (VAR_13);
    }
  else
    {
      VAR_14 = VAR_3;



      VAR_13 = FUNC_16 (VAR_13);
      if (VAR_13 == VAR_5)
 return VAR_5;
    }

  if ((FUNC_5 (VAR_13) || FUNC_4 (VAR_13))
      && FUNC_10 (VAR_9, VAR_13))
    {
      if (VAR_12)
 {
   *VAR_12 = 1;


   if (VAR_7)
     FUNC_9 (VAR_13, VAR_9,
           VAR_8,
           "cast");
 }
      if (VAR_14)
 {
   VAR_10 = FUNC_8 (VAR_0, VAR_10, 0);
   VAR_10 = FUNC_6 (VAR_14, VAR_10);
   return FUNC_11 (VAR_10);
 }
      else
 {
   VAR_10 = FUNC_12 (VAR_10);



   if (FUNC_1 (VAR_10) == VAR_2
       && FUNC_3 (VAR_10) == FUNC_3 (FUNC_2 (VAR_10, 0)))
     VAR_10 = FUNC_2 (VAR_10, 0);
   return FUNC_6 (VAR_9, VAR_10);
 }
    }

  if (VAR_11)
    FUNC_13 ("invalid const_cast from type %qT to type %qT",
    VAR_13, VAR_9);
  return VAR_5;
}
