
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (int,int ,int ,int) ;
 int FUNC_7 (scalar_t__,scalar_t__) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int,int ,int ,int ) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int ) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;

tree
FUNC_14 (enum tree_code VAR_11, tree VAR_12, tree VAR_13)
{
  tree VAR_14, VAR_15;



  tree VAR_16 = FUNC_3 (VAR_12);

  if (FUNC_0 (FUNC_3 (VAR_16)) == VAR_6)
    {
      if (VAR_8 || VAR_10)
 FUNC_12 ("pointer of type %<void *%> used in arithmetic");
      VAR_14 = VAR_7;
    }
  else if (FUNC_0 (FUNC_3 (VAR_16)) == VAR_0)
    {
      if (VAR_8 || VAR_10)
 FUNC_12 ("pointer to a function used in arithmetic");
      VAR_14 = VAR_7;
    }
  else if (FUNC_0 (FUNC_3 (VAR_16)) == VAR_2)
    {
      if (VAR_8 || VAR_10)
 FUNC_12 ("pointer to member function used in arithmetic");
      VAR_14 = VAR_7;
    }
  else
    VAR_14 = FUNC_13 (FUNC_3 (VAR_16));





  FUNC_10 ();






  if ((FUNC_0 (VAR_13) == VAR_5 || FUNC_0 (VAR_13) == VAR_3)
      && !FUNC_1 (VAR_13)
      && FUNC_1 (FUNC_2 (VAR_13, 1))
      && FUNC_1 (VAR_14)


      && FUNC_0 (FUNC_3 (FUNC_2 (VAR_13, 0))) == VAR_1



      && (!FUNC_5 (FUNC_3 (VAR_13))
   || (FUNC_4 (FUNC_3 (VAR_13))
       == FUNC_4 (FUNC_3 (VAR_12)))))
    {
      enum tree_code VAR_17 = VAR_11;
      tree VAR_18 = FUNC_3 (VAR_13);
      if (FUNC_0 (VAR_13) == VAR_3)
 VAR_17 = (VAR_17 == VAR_5 ? VAR_3 : VAR_5);



      VAR_12 = FUNC_6 (VAR_17, VAR_12,
          FUNC_8 (VAR_18, FUNC_2 (VAR_13, 1)), 1);
      VAR_13 = FUNC_8 (VAR_18, FUNC_2 (VAR_13, 0));
    }




  if (FUNC_4 (FUNC_3 (VAR_13)) != FUNC_4 (VAR_9)
      || FUNC_5 (FUNC_3 (VAR_13)) != FUNC_5 (VAR_9))
    VAR_13 = FUNC_8 (FUNC_7 (FUNC_4 (VAR_9),
          FUNC_5 (VAR_9)), VAR_13);





  VAR_13 = FUNC_8 (VAR_16,
     FUNC_6 (VAR_4, VAR_13,
        FUNC_8 (FUNC_3 (VAR_13), VAR_14), 1));


  VAR_15 = FUNC_9 (VAR_11, VAR_16, VAR_12, VAR_13);

  FUNC_11 ();

  return VAR_15;
}
