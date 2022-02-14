
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * tree ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *,int **) ;
 int * VAR_7 ;
 int * FUNC_8 (int ,int *,int *) ;
 int * FUNC_9 (int ,int *,int *,int *) ;
 int * FUNC_10 (int ,int *,int *,int ,int *) ;
 int * FUNC_11 (int ,int *,int *,int ,int *,int *) ;
 int FUNC_12 (int **) ;
 int * FUNC_13 (int *,int ) ;
 int * FUNC_14 (int *) ;
 int * FUNC_15 (int ,int ,int *,int ) ;
 int * FUNC_16 () ;
 int * FUNC_17 (int *,int *) ;
 int * FUNC_18 (int *,int *) ;
 int FUNC_19 (int *) ;
 int VAR_8 ;
 int * FUNC_20 (int *,int *,int *) ;
 int * VAR_9 ;
 int * VAR_10 ;

__attribute__((used)) static tree
FUNC_21 (tree VAR_11, tree VAR_12, tree VAR_13)
{
  tree VAR_14, VAR_15;
  int VAR_16;

  if (VAR_11 == ((void*)0))
    return ((void*)0);

  VAR_14 = FUNC_0 (FUNC_5 (FUNC_3 (VAR_11)));
  if (VAR_13)
    VAR_14 = FUNC_0 (VAR_14);

  if (FUNC_1 (FUNC_3 (VAR_12)) == VAR_1)
    {
      tree VAR_17 = FUNC_3 (VAR_12);
      tree VAR_18, VAR_19, VAR_20;
      tree VAR_21 = ((void*)0), VAR_22 = ((void*)0);
      tree VAR_23 = ((void*)0), VAR_24, VAR_25;

      VAR_18 = VAR_12;
      VAR_21 = VAR_13;
      do
 {
   VAR_17 = FUNC_3 (VAR_17);
   VAR_18 = FUNC_11 (VAR_0, VAR_17, VAR_18,
      VAR_8, ((void*)0), ((void*)0));
   if (VAR_13)
     VAR_21 = FUNC_11 (VAR_0, VAR_17, VAR_21,
        VAR_8, ((void*)0), ((void*)0));
 }
      while (FUNC_1 (VAR_17) == VAR_1);
      VAR_18 = FUNC_14 (VAR_18);
      if (VAR_13)
 VAR_21 = FUNC_14 (VAR_21);

      VAR_19 = FUNC_6 (FUNC_3 (VAR_12));
      VAR_19 = FUNC_18 (FUNC_3 (VAR_18), VAR_19);
      VAR_19 = FUNC_9 (VAR_6, FUNC_3 (VAR_18), VAR_18, VAR_19);

      VAR_20 = FUNC_17 (FUNC_3 (VAR_18), ((void*)0));
      VAR_25 = FUNC_9 (VAR_4, VAR_10, VAR_20, VAR_18);
      FUNC_7 (VAR_25, &VAR_23);

      if (VAR_13)
 {
   VAR_22 = FUNC_17 (FUNC_3 (VAR_21), ((void*)0));
   VAR_25 = FUNC_9 (VAR_4, VAR_10, VAR_22, VAR_21);
   FUNC_7 (VAR_25, &VAR_23);
 }

      VAR_24 = FUNC_16 ();
      VAR_25 = FUNC_8 (VAR_3, VAR_10, VAR_24);
      FUNC_7 (VAR_25, &VAR_23);

      VAR_25 = FUNC_20 (((void*)0), VAR_20, ((void*)0));
      if (VAR_13)
 VAR_25 = FUNC_20 (((void*)0), VAR_22, VAR_25);

      VAR_16 = 1 + (VAR_13 != ((void*)0));
      for (VAR_15 = VAR_14; VAR_15 != VAR_9; VAR_15 = FUNC_0 (VAR_15))
 VAR_25 = FUNC_20 (((void*)0), FUNC_15 (FUNC_4 (VAR_15),
        FUNC_2 (VAR_15),
        VAR_11, VAR_16++), VAR_25);
      VAR_25 = FUNC_13 (VAR_11, FUNC_19 (VAR_25));
      FUNC_7 (VAR_25, &VAR_23);

      VAR_25 = FUNC_18 (FUNC_3 (VAR_20), FUNC_6 (VAR_17));
      VAR_25 = FUNC_9 (VAR_6, FUNC_3 (VAR_20), VAR_20, VAR_25);
      VAR_25 = FUNC_9 (VAR_4, VAR_10, VAR_20, VAR_25);
      FUNC_7 (VAR_25, &VAR_23);

      if (VAR_13)
 {
   VAR_25 = FUNC_18 (FUNC_3 (VAR_22), FUNC_6 (VAR_17));
   VAR_25 = FUNC_9 (VAR_6, FUNC_3 (VAR_22), VAR_22, VAR_25);
   VAR_25 = FUNC_9 (VAR_4, VAR_10, VAR_22, VAR_25);
   FUNC_7 (VAR_25, &VAR_23);
 }

      VAR_25 = FUNC_9 (VAR_5, VAR_7, VAR_20, VAR_19);
      VAR_25 = FUNC_10 (VAR_2, VAR_10, VAR_25, FUNC_12 (&VAR_24), ((void*)0));
      FUNC_7 (VAR_25, &VAR_23);

      return VAR_23;
    }
  else
    {
      tree VAR_26 = FUNC_20 (((void*)0), FUNC_14 (VAR_12), ((void*)0));
      if (VAR_13)
 VAR_26 = FUNC_20 (((void*)0), FUNC_14 (VAR_13), VAR_26);

      VAR_16 = 1 + (VAR_13 != ((void*)0));
      for (VAR_15 = VAR_14; VAR_15 != VAR_9; VAR_15 = FUNC_0 (VAR_15))
 VAR_26 = FUNC_20 (((void*)0), FUNC_15 (FUNC_4 (VAR_15),
        FUNC_2 (VAR_15),
        VAR_11, VAR_16++), VAR_26);
      return FUNC_13 (VAR_11, FUNC_19 (VAR_26));
    }
}
