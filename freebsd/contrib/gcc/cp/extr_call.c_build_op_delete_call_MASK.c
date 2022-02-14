
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;
struct TYPE_2__ {int name; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__,int) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 int FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (int) ;
 scalar_t__ FUNC_14 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_15 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_16 (scalar_t__,scalar_t__) ;
 int FUNC_17 (scalar_t__) ;
 scalar_t__ FUNC_18 (int ,scalar_t__) ;
 int FUNC_19 (char*,int ,scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_20 (int) ;
 scalar_t__ FUNC_21 (int ,scalar_t__,int) ;
 scalar_t__ FUNC_22 (scalar_t__) ;
 int FUNC_23 (scalar_t__) ;
 TYPE_1__* VAR_2 ;
 int FUNC_24 (int ,scalar_t__,scalar_t__) ;
 int VAR_3 ;
 scalar_t__ FUNC_25 (int ,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_26 (scalar_t__) ;
 scalar_t__ FUNC_27 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_5 ;
 int FUNC_28 (int ,char*,scalar_t__) ;

tree
FUNC_29 (enum tree_code VAR_6, tree VAR_7, tree VAR_8,
        bool VAR_9, tree VAR_10,
        tree VAR_11)
{
  tree VAR_12 = VAR_0;
  tree VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
  int VAR_18;

  if (VAR_7 == VAR_1)
    return VAR_1;

  VAR_17 = FUNC_26 (FUNC_9 (FUNC_9 (VAR_7)));

  VAR_14 = FUNC_13 (VAR_6);

  if (FUNC_2 (VAR_17)
      && FUNC_3 (FUNC_17 (VAR_17))
      && !VAR_9)







    {
      VAR_13 = FUNC_21 (FUNC_12 (VAR_17), VAR_14, 1);
      if (VAR_13 == VAR_1)
 return VAR_1;
    }
  else
    VAR_13 = VAR_0;

  if (VAR_13 == VAR_0)
    VAR_13 = FUNC_22 (VAR_14);

  if (VAR_10)
    {


      FUNC_20 (VAR_11 != VAR_0);
      VAR_15 = FUNC_7 (FUNC_11 (FUNC_9 (VAR_11)));

      VAR_16 = FUNC_7 (FUNC_8 (VAR_10, 1));
    }
  else
    {

      VAR_15 = VAR_5;
      VAR_16 = VAR_0;
    }


  VAR_7 = FUNC_18 (VAR_3, VAR_7);





  for (VAR_18 = 0; VAR_18 < (VAR_10 ? 1 : 2); ++VAR_18)
    {


      for (VAR_12 = FUNC_1 (VAR_13) ? FUNC_0 (VAR_13) : VAR_13;
    VAR_12;
    VAR_12 = FUNC_6 (VAR_12))
 {
   tree VAR_19;


   VAR_19 = FUNC_11 (FUNC_9 (FUNC_5 (VAR_12)));
   if (!FUNC_25 (FUNC_10 (VAR_19), VAR_3))
     continue;
   VAR_19 = FUNC_7 (VAR_19);

   if (VAR_18 == 0)
     {
       tree VAR_20 = VAR_15;
       while (VAR_20 && VAR_19)
  {
    if (!FUNC_25 (FUNC_10 (VAR_20), FUNC_10 (VAR_19)))
      break;
    VAR_20 = FUNC_7 (VAR_20);
    VAR_19 = FUNC_7 (VAR_19);
  }
       if (!VAR_20 && !VAR_19)
  break;
     }


   else if (VAR_18 == 1



     && VAR_19
     && FUNC_25 (FUNC_10 (VAR_19), VAR_4)
     && FUNC_7 (VAR_19) == VAR_5)
     break;
 }


      if (VAR_12)
 break;
    }


  if (VAR_12)
    {


      VAR_12 = FUNC_5 (VAR_12);



      if (FUNC_4 (VAR_12))
 FUNC_24 (FUNC_12 (VAR_17), VAR_12, VAR_12);

      if (VAR_18 == 0)
 VAR_16 = FUNC_27 (VAR_0, VAR_7, VAR_16);
      else
 VAR_16 = FUNC_27 (VAR_0, VAR_7,
     FUNC_16 (VAR_0, VAR_8));

      if (VAR_10)
 {


   FUNC_23 (VAR_12);
   return FUNC_14 (VAR_12, VAR_16);
 }
      else
 return FUNC_15 (VAR_12, VAR_16);
    }






  if (VAR_11)
    {
      if (!VAR_10)
 FUNC_28 (0, "no corresponding deallocation function for `%D'",
   VAR_11);
      return VAR_0;
    }

  FUNC_19 ("no suitable %<operator %s%> for %qT",
  VAR_2[(int)VAR_6].name, VAR_17);
  return VAR_1;
}
