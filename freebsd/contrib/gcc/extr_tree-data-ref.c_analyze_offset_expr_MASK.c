
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct loop {int num; } ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;

 int VAR_1 ;

 scalar_t__ VAR_2 ;

 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (struct loop*,scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (struct loop*,scalar_t__) ;
 scalar_t__ FUNC_8 (int,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_9 (int ,scalar_t__) ;
 int FUNC_10 (scalar_t__,char*) ;
 int FUNC_11 () ;
 int FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__,int ) ;
 int FUNC_14 (scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_15 (int const,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_16 (int ) ;
 int VAR_8 ;
 scalar_t__ FUNC_17 (scalar_t__) ;

__attribute__((used)) static bool
FUNC_18 (tree VAR_9,
       struct loop *VAR_10,
       tree *VAR_11,
       tree *VAR_12,
       tree *VAR_13,
       tree *VAR_14)
{
  tree VAR_15;
  tree VAR_16;
  tree VAR_17 = FUNC_16 (0);
  tree VAR_18 = FUNC_16 (0);
  tree VAR_19 = FUNC_16 (0);
  tree VAR_20 = FUNC_16 (0);
  tree VAR_21 = FUNC_16 (0);
  tree VAR_22 = FUNC_16 (0);
  enum tree_code VAR_23;
  tree VAR_24, VAR_25;
  tree VAR_26 = VAR_2, VAR_27 = VAR_2;

  *VAR_14 = VAR_2;
  *VAR_12 = VAR_2;
  *VAR_13 = VAR_2;
  *VAR_11 = VAR_2;


  VAR_9 = FUNC_17 (VAR_9);
  if (!VAR_9)
    return 0;



  if (FUNC_2 (VAR_9) == VAR_0)
    {
      *VAR_11 = FUNC_9 (VAR_8, VAR_9);
      *VAR_12 = FUNC_9 (VAR_8, VAR_9);
      *VAR_14 = FUNC_16 (0);
      return 1;
    }



  if (FUNC_1 (VAR_9))
    {
      tree VAR_28 = FUNC_5 (VAR_10, VAR_9);

      if (VAR_28 == VAR_5)

 return 0;

      VAR_24 = FUNC_13 (VAR_28, VAR_10->num);
      if (!FUNC_7 (VAR_10, VAR_24))




 return 0;

      VAR_25 = FUNC_6 (VAR_28, VAR_10->num);
      if (VAR_25 && FUNC_2 (VAR_25) != VAR_0)

 return 0;

      if (FUNC_2 (VAR_24) == VAR_0)
 *VAR_12 = FUNC_9 (VAR_8, VAR_24);
      else

 *VAR_12 = VAR_2;

      *VAR_11 = FUNC_9 (VAR_8, VAR_24);

      *VAR_14 = VAR_25 ? FUNC_9 (VAR_8, VAR_25) : FUNC_16 (0);
      return 1;
    }


  if (!FUNC_0 (VAR_9))
    {

      if (VAR_6 && (VAR_7 & VAR_3))
        {
   FUNC_10 (VAR_6, "\nNot binary expression ");
          FUNC_14 (VAR_6, VAR_9, VAR_4);
   FUNC_10 (VAR_6, "\n");
 }
      return 0;
    }
  VAR_15 = FUNC_3 (VAR_9, 0);
  VAR_16 = FUNC_3 (VAR_9, 1);

  if (!FUNC_18 (VAR_15, VAR_10, &VAR_17, &VAR_19,
       &VAR_26, &VAR_21)
      || !FUNC_18 (VAR_16, VAR_10, &VAR_18, &VAR_20,
          &VAR_27, &VAR_22))
    return 0;


  VAR_23 = FUNC_2 (VAR_9);
  switch (VAR_23)
    {
    case 129:
      if (FUNC_2 (VAR_18) != VAR_0)



 return 0;


      VAR_17 = FUNC_17 (VAR_17);
      if (!VAR_17)
 return 0;

      if (FUNC_1 (VAR_17))
 {





   *VAR_12 = VAR_2;
   *VAR_13 = FUNC_16 (FUNC_12 (VAR_18));
 }
      else
 {

   if (VAR_19)
     {


       *VAR_12 = FUNC_15 (VAR_23, VAR_19, VAR_20);
       if (VAR_26 && VAR_27)
  *VAR_13 = FUNC_15 (VAR_1, VAR_26,
       VAR_27);
       else
  *VAR_13 = VAR_26 ?
    VAR_26 : VAR_27;
     }
   else
     *VAR_12 = VAR_2;
 }



      *VAR_14 = FUNC_15 (129, VAR_21, VAR_18);
      break;

    case 128:
    case 130:

      *VAR_14 = FUNC_15 (VAR_23, VAR_21, VAR_22);


      if ((!VAR_19 && !VAR_26)
   || (!VAR_20 && !VAR_27))
 {
   *VAR_12 = VAR_2;
   *VAR_13 = VAR_2;
   break;
 }

      if (VAR_19 && VAR_20)
 *VAR_12 = FUNC_15 (VAR_23, VAR_19, VAR_20);
      else
 *VAR_12 = VAR_19 ? VAR_19 : VAR_20;

      if (VAR_26 && VAR_27)
 *VAR_13 = FUNC_15 (VAR_1, VAR_26, VAR_27);
      else
 *VAR_13 = VAR_26 ? VAR_26 : VAR_27;

      break;

    default:
      FUNC_11 ();
    }


  *VAR_11 = FUNC_9 (VAR_8,
      FUNC_8 (VAR_23, FUNC_4 (VAR_17),
            VAR_17,
            VAR_18));
  return 1;
}
