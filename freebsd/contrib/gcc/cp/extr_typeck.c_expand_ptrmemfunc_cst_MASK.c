
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ,int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int) ;
 int FUNC_17 () ;
 int FUNC_18 (int ,int ,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;


 int VAR_7 ;

void
FUNC_19 (tree VAR_8, tree *VAR_9, tree *VAR_10)
{
  tree VAR_11 = FUNC_6 (VAR_8);
  tree VAR_12 = FUNC_4 (VAR_8);
  tree VAR_13, VAR_14;

  FUNC_16 (FUNC_5 (VAR_12) == VAR_0);


  VAR_14 = FUNC_1 (VAR_12);


  VAR_13 = FUNC_8 (VAR_11);


  *VAR_9 = FUNC_18 (VAR_14, VAR_13, 0,
                  0);

  if (!FUNC_3 (VAR_12))
    *VAR_10 = FUNC_14 (FUNC_7 (VAR_11), FUNC_12 (VAR_12));
  else
    {



      tree VAR_15 = FUNC_1 (VAR_12);
      tree VAR_16 = FUNC_10 (VAR_15, VAR_14);
      *VAR_9 = FUNC_11 (VAR_3, FUNC_6 (*VAR_9),
         *VAR_9, FUNC_0 (VAR_16));
      *VAR_9 = FUNC_15 (*VAR_9);




      *VAR_10 = FUNC_2 (VAR_12);
      *VAR_10 = FUNC_11 (VAR_2, VAR_6, *VAR_10,
       FUNC_9 (VAR_7));
      *VAR_10 = FUNC_15 (*VAR_10);

      switch (VAR_4)
 {
 case 128:
   *VAR_10 = FUNC_11 (VAR_3, VAR_6, *VAR_10,
    VAR_5);
   *VAR_10 = FUNC_15 (*VAR_10);
   break;

 case 129:
   *VAR_9 = FUNC_11 (VAR_1, FUNC_6 (*VAR_9),
      *VAR_9, VAR_5);
   *VAR_9 = FUNC_15 (*VAR_9);
   *VAR_9 = FUNC_11 (VAR_3, FUNC_6 (*VAR_9),
      *VAR_9, VAR_5);
   *VAR_9 = FUNC_15 (*VAR_9);
   break;

 default:
   FUNC_17 ();
 }

      *VAR_10 = FUNC_13 (FUNC_7 (VAR_11), *VAR_10);
      *VAR_10 = FUNC_15 (*VAR_10);
    }
}
