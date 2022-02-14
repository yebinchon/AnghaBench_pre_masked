
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree_stmt_iterator ;
typedef scalar_t__ tree ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_8 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_9 (int ,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_10 (int ,scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__,int) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ,int ) ;
 int FUNC_14 (scalar_t__*) ;
 scalar_t__ FUNC_15 (scalar_t__) ;
 int FUNC_16 (scalar_t__) ;
 int FUNC_17 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_18 (scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_19 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_20 (int ) ;
 int FUNC_21 (int *,scalar_t__,int ) ;
 int FUNC_22 (scalar_t__) ;
 int VAR_8 ;
 int FUNC_23 (int ,char*,int ) ;

__attribute__((used)) static void
FUNC_24 (tree VAR_9, tree *VAR_10)
{
  tree VAR_11 = VAR_1;
  tree_stmt_iterator VAR_12 = FUNC_22 (*VAR_10);

  while (VAR_9 != VAR_1)
    {
      if (FUNC_15 (VAR_9)

          && ! FUNC_17 (VAR_9)

          && ! FUNC_0 (VAR_9)
          && ! FUNC_4 (VAR_9))
        {
          tree VAR_13 = VAR_1, VAR_14;
          tree VAR_15, VAR_16;
          tree VAR_17, VAR_18;

   VAR_13 = FUNC_13 (VAR_7, FUNC_6 (FUNC_5 (VAR_9)));


          VAR_16 =
            FUNC_19 (VAR_1,
                       FUNC_13 (VAR_6,
                                FUNC_16 (FUNC_8 (VAR_0,
                                                 FUNC_12 (FUNC_5 (VAR_9)),
                                                 VAR_9))),
                       FUNC_19 (VAR_1,
                                  VAR_13,
                                  FUNC_19 (VAR_1,

                                             FUNC_11 (VAR_1, 3),
                                             VAR_1)));

          VAR_15 = FUNC_10 (VAR_5,
                                                        VAR_16);


          VAR_14 = FUNC_18 (VAR_9);
          VAR_18 =
            FUNC_19 (VAR_1,
                   FUNC_13 (VAR_6,
                            FUNC_16 (FUNC_8 (VAR_0,
                                             FUNC_12 (FUNC_5 (VAR_9)),
                                             VAR_9))),
                       FUNC_19 (VAR_1,
                                  VAR_13,
                                  FUNC_19 (VAR_1,

                                             FUNC_11 (VAR_1, 3),
                                             FUNC_19 (VAR_1,
                                                        VAR_14,
                                                        VAR_1))));


          VAR_17 = FUNC_10 (VAR_4,
                                                      VAR_18);



          FUNC_14 (&VAR_17);
          FUNC_14 (&VAR_15);


          if (FUNC_20 (VAR_12))
     FUNC_23 (0, "mudflap cannot track %qs in stub function",
       FUNC_2 (FUNC_1 (VAR_9)));
   else
     {
       FUNC_21 (&VAR_12, VAR_17, VAR_3);


       FUNC_7 (VAR_15, &VAR_11);
     }
          FUNC_16 (VAR_9);
        }

      VAR_9 = FUNC_3 (VAR_9);
    }


  if (VAR_11 != VAR_1)
    {
      tree VAR_19 = FUNC_9 (VAR_2, VAR_8,
                       *VAR_10, VAR_11);
      *VAR_10 = ((void*)0);
      FUNC_7 (VAR_19, VAR_10);
    }
}
