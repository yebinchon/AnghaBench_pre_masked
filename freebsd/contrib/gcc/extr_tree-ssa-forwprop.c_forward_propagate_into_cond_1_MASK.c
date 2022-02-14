
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_8 (int,int ,int ,int ) ;
 int FUNC_9 (int ,int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int,int ,int ,int ) ;
 scalar_t__ FUNC_12 (int ) ;
 int VAR_12 ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (int ) ;

__attribute__((used)) static tree
FUNC_18 (tree VAR_13, tree *VAR_14)
{
  tree VAR_15 = VAR_7;
  enum tree_code VAR_16 = FUNC_5 (VAR_13);
  tree VAR_17 = VAR_7;
  tree VAR_18;
  tree VAR_19;







  if (VAR_16 != VAR_9
      && !((VAR_16 == VAR_2 || VAR_16 == VAR_5)
    && FUNC_5 (FUNC_6 (VAR_13, 0)) == VAR_9
    && FUNC_1 (FUNC_6 (VAR_13, 1))
    && FUNC_2 (FUNC_7 (FUNC_6 (VAR_13, 1)))))
    return VAR_7;


  if (VAR_16 == VAR_9)
    VAR_17 = VAR_13;
  else
    VAR_17 = FUNC_6 (VAR_13, 0);



  VAR_18 = FUNC_3 (VAR_17);
  if (FUNC_5 (VAR_18) != VAR_4)
    return VAR_7;

  VAR_19 = FUNC_6 (VAR_18, 1);





  if (FUNC_5 (VAR_19) == VAR_8
      || FUNC_5 (VAR_19) == VAR_3)
    {
      tree VAR_20 = FUNC_6 (VAR_19, 0);
      tree VAR_21 = FUNC_6 (VAR_19, 1);



      if (FUNC_5 (VAR_20) != VAR_9
   || !FUNC_1 (VAR_21)
   || !FUNC_2 (FUNC_7 (VAR_21)))
 return VAR_7;



      if (FUNC_4 (VAR_20))
 return VAR_7;

      if (FUNC_10 (VAR_17))
 {
   enum tree_code VAR_22;
   tree VAR_23;






   VAR_22 = (FUNC_5 (VAR_19) == VAR_8
        ? VAR_3 : VAR_8);
   VAR_23 = FUNC_11 (VAR_22, FUNC_6 (VAR_13, 1), VAR_21, 0);
   if (!FUNC_16 (VAR_23))
     return VAR_7;

   VAR_15 = FUNC_8 (VAR_16, VAR_11, VAR_20, VAR_23);
 }
    }



  else if (FUNC_5 (VAR_13) == VAR_9
    || FUNC_13 (FUNC_6 (VAR_13, 1))
    || FUNC_12 (FUNC_6 (VAR_13, 1)))
    {



      if (FUNC_0 (VAR_19))
 {
   tree VAR_24 = FUNC_6 (VAR_19, 0);
   tree VAR_25 = FUNC_6 (VAR_19, 1);



   if ((FUNC_5 (VAR_24) != VAR_9
        && !FUNC_15 (VAR_24))
       || (FUNC_5 (VAR_25) != VAR_9
    && !FUNC_15 (VAR_25)))
     return VAR_7;



   if (FUNC_5 (VAR_24) == VAR_9
       && FUNC_4 (VAR_24))
     return VAR_7;



   if (FUNC_5 (VAR_25) == VAR_9
       && FUNC_4 (VAR_25))
     return VAR_7;

   if (FUNC_10 (VAR_17))
     {

       VAR_15 = FUNC_8 (FUNC_5 (VAR_19),
     VAR_11, VAR_24, VAR_25);


       if ((VAR_16 == VAR_2
     && FUNC_13 (FUNC_6 (VAR_13, 1)))
    || (VAR_16 == VAR_5
        && FUNC_12 (FUNC_6 (VAR_13, 1))))
  {
    VAR_15 = FUNC_14 (VAR_15);




    if (!FUNC_0 (VAR_15)
        && FUNC_5 (VAR_15) != VAR_9)
      VAR_15 = VAR_7;
  }
     }
 }



      else if (FUNC_5 (VAR_19) == VAR_10)
 {
   enum tree_code VAR_26;

   VAR_19 = FUNC_6 (VAR_19, 0);


   if (FUNC_5 (VAR_19) != VAR_9
       && !FUNC_15 (VAR_19))
     return VAR_7;



   if (FUNC_5 (VAR_19) == VAR_9
       && FUNC_4 (VAR_19))
     return VAR_7;

   if (VAR_16 == VAR_9
       || (VAR_16 == VAR_5
    && FUNC_13 (FUNC_6 (VAR_13, 1)))
       || (VAR_16 == VAR_2
    && FUNC_12 (FUNC_6 (VAR_13, 1))))
     VAR_26 = VAR_2;
   else
     VAR_26 = VAR_5;

   VAR_15 = FUNC_8 (VAR_26, VAR_11, VAR_19,
        FUNC_9 (FUNC_7 (VAR_19),
        VAR_12));
 }




      else if (FUNC_5 (VAR_19) == VAR_6
        || FUNC_5 (VAR_19) == VAR_1)
 {
   tree VAR_27;
   tree VAR_28;

   VAR_27 = FUNC_7 (VAR_19);
   VAR_28 = FUNC_7 (FUNC_6 (VAR_19, 0));

   if ((FUNC_5 (VAR_27) == VAR_0
        && FUNC_2 (VAR_28))
       || (FUNC_5 (VAR_28) == VAR_0
    && FUNC_2 (VAR_27)))
     ;
   else if (FUNC_2 (VAR_27)
     && FUNC_2 (VAR_28)
     && FUNC_5 (FUNC_6 (VAR_19, 0)) == VAR_9
     && FUNC_17 (FUNC_6 (VAR_19,
              0)))
     ;
   else
     return VAR_7;



   if (FUNC_5 (FUNC_6 (VAR_19, 0)) == VAR_9
       && FUNC_4 (FUNC_6
        (VAR_19, 0)))
     return VAR_7;

   if (FUNC_10 (VAR_17))
     {
       enum tree_code VAR_29;
       tree VAR_30;

       if (VAR_16 == VAR_9
    || (VAR_16 == VAR_5
        && FUNC_13 (FUNC_6 (VAR_13, 1)))
    || (VAR_16 == VAR_2
        && FUNC_12 (FUNC_6 (VAR_13, 1))))
  VAR_29 = VAR_5;
       else
  VAR_29 = VAR_2;

       VAR_30 = FUNC_6 (VAR_19, 0);
       VAR_15 = FUNC_8 (VAR_29, VAR_11, VAR_30,
     FUNC_9 (FUNC_7 (VAR_30),
            VAR_12));
     }
 }
    }

  *VAR_14 = VAR_17;
  return VAR_15;
}
