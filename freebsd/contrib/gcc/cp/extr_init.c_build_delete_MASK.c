
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef scalar_t__ special_function_kind ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int FUNC_4 (scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 int FUNC_13 (scalar_t__) ;
 scalar_t__ FUNC_14 (int ,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_15 (int ,int ,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_16 (scalar_t__) ;
 scalar_t__ FUNC_17 (int ,scalar_t__,int) ;
 int FUNC_18 (scalar_t__,int *) ;
 scalar_t__ FUNC_19 (int ,scalar_t__,int ,int,scalar_t__,scalar_t__) ;
 int FUNC_20 (scalar_t__) ;
 scalar_t__ FUNC_21 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_22 (scalar_t__,int ,scalar_t__,int) ;
 int FUNC_23 (scalar_t__) ;
 scalar_t__ FUNC_24 (int ,scalar_t__,int ) ;
 int FUNC_25 (int ,scalar_t__,int ) ;
 int FUNC_26 (scalar_t__,scalar_t__,int) ;
 int FUNC_27 (scalar_t__) ;
 int FUNC_28 (char*) ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_29 (int ) ;
 int FUNC_30 (int ) ;
 int FUNC_31 (char*) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_32 (int ,scalar_t__) ;
 scalar_t__ FUNC_33 (scalar_t__) ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_34 (int ,char*) ;

tree
FUNC_35 (tree VAR_17, tree VAR_18, special_function_kind VAR_19,
    int VAR_20, int VAR_21)
{
  tree VAR_22;

  if (VAR_18 == VAR_9)
    return VAR_9;



  if (VAR_17 == VAR_9)
    return VAR_9;

  VAR_17 = FUNC_11 (VAR_17);

  if (FUNC_5 (VAR_17) == VAR_8)
    {
      bool VAR_23 = 1;

      VAR_17 = FUNC_11 (FUNC_7 (VAR_17));
      if (FUNC_5 (VAR_17) == VAR_1)
 goto handle_array;







      if (!FUNC_12 (VAR_17))
 {
   FUNC_23 (VAR_17);
   if (!FUNC_2 (VAR_17))
     {
       FUNC_34 (0, "possible problem detected in invocation of "
         "delete operator:");
       FUNC_26 (VAR_18, VAR_17, 1);
       FUNC_31 ("neither the destructor nor the class-specific "
        "operator delete will be called, even if they are "
        "declared when the class is defined.");
       VAR_23 = 0;
     }
 }
      if (FUNC_12 (VAR_17) || !VAR_23 || !FUNC_4 (VAR_17))

 return FUNC_16 (VAR_18);
      if (FUNC_6 (VAR_18))
 VAR_18 = FUNC_33 (VAR_18);


      VAR_18 = FUNC_24 (FUNC_20 (VAR_17), VAR_18, 0);
    }
  else if (FUNC_5 (VAR_17) == VAR_1)
    {
    handle_array:

      if (FUNC_8 (VAR_17) == VAR_7)
 {
   FUNC_28 ("unknown array size in delete");
   return VAR_9;
 }
      return FUNC_22 (VAR_18, FUNC_13 (VAR_17),
          VAR_19, VAR_21);
    }
  else
    {



      VAR_18 = FUNC_21 (VAR_0, VAR_18, 0);
      if (FUNC_6 (VAR_18))
 VAR_18 = FUNC_33 (VAR_18);

      VAR_18 = FUNC_24 (FUNC_20 (VAR_17), VAR_18, 0);
    }

  FUNC_30 (FUNC_4 (VAR_17));

  if (FUNC_10 (VAR_17))
    {
      if (VAR_19 != VAR_13)
 return VAR_16;

      return FUNC_19 (VAR_4, VAR_18,
       FUNC_27 (VAR_17),
       VAR_21,
                     VAR_7,
                    VAR_7);
    }
  else
    {
      tree VAR_24 = VAR_7;
      tree VAR_25;

      if (FUNC_1 (VAR_17))
 FUNC_32 (VAR_14, VAR_17);




      if (VAR_21 && VAR_19 == VAR_13)
 {

   VAR_18 = FUNC_33 (VAR_18);

   VAR_24 = FUNC_16 (VAR_18);


   VAR_19 = VAR_12;
 }



      else if (!FUNC_3 (FUNC_0 (VAR_17))
        && VAR_19 == VAR_13)
 {

   VAR_18 = FUNC_33 (VAR_18);

   VAR_24 = FUNC_19 (VAR_4,
         VAR_18,
         FUNC_27 (VAR_17),
                      0,
                       VAR_7,
                      VAR_7);

   VAR_19 = VAR_12;
 }
      else if (VAR_19 == VAR_13
        && FUNC_9 (VAR_17))
 {


   FUNC_19 (VAR_4, VAR_18, FUNC_27 (VAR_17),
                 0,
                  VAR_7,
                 VAR_7);
 }

      VAR_22 = FUNC_17 (FUNC_18 (VAR_18, ((void*)0)),
         VAR_19, VAR_20);
      if (VAR_24)
 VAR_22 = FUNC_14 (VAR_2, VAR_15, VAR_22, VAR_24);

      if (VAR_20 & VAR_5)

 VAR_25 = VAR_10;
      else

 VAR_25 = FUNC_29 (FUNC_25 (VAR_6, VAR_18, VAR_11));

      if (VAR_25 != VAR_10)
 VAR_22 = FUNC_15 (VAR_3, VAR_15,
         VAR_25, VAR_22, VAR_16);

      return VAR_22;
    }
}
