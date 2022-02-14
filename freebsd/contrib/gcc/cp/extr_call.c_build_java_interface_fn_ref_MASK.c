
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_6 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_7 (int ,scalar_t__,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__,scalar_t__) ;
 int FUNC_10 (scalar_t__,int ) ;
 scalar_t__ FUNC_11 (int ,int) ;
 int FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (int ,scalar_t__) ;
 scalar_t__ FUNC_14 () ;
 scalar_t__ FUNC_15 (int ,int ) ;
 scalar_t__ FUNC_16 (char*,int ,int ,int ,int *,int ) ;
 scalar_t__ FUNC_17 (int ,scalar_t__) ;
 int FUNC_18 (char*,scalar_t__) ;
 scalar_t__ VAR_5 ;
 int FUNC_19 (char*) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_20 (scalar_t__,int ,int ,int) ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_21 (int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static tree
FUNC_22 (tree VAR_10, tree VAR_11)
{
  tree VAR_12, VAR_13, VAR_14, VAR_15;
  tree VAR_16, VAR_17, VAR_18;
  int VAR_19;

  if (!VAR_7)
    {
      tree VAR_20 = FUNC_14 ();
      tree VAR_21 = FUNC_21 (VAR_3, VAR_9,
     FUNC_21 (VAR_3, VAR_9,
         FUNC_21 (VAR_3, VAR_8,
      VAR_20)));
      VAR_7
 = FUNC_16 ("_Jv_LookupInterfaceMethodIdx",
       FUNC_9 (VAR_9, VAR_21),
       0, VAR_2, ((void*)0), VAR_3);
    }



  VAR_16 = FUNC_15 (FUNC_10 (VAR_11, 0),
         VAR_6);


  VAR_17 = FUNC_0 (VAR_10);
  VAR_18 = FUNC_20 (VAR_17, FUNC_19 ("class$"), 0, 0);
  if (!VAR_18 || FUNC_3 (VAR_18) != VAR_4
      || FUNC_0 (VAR_18) != VAR_17)
    {
      FUNC_18 ("could not find class$ field in java interface type %qT",
  VAR_17);
      return VAR_5;
    }
  VAR_18 = FUNC_8 (VAR_18);
  VAR_18 = FUNC_17 (FUNC_12 (VAR_17), VAR_18);


  VAR_19 = 1;
  for (VAR_14 = FUNC_5 (VAR_17); VAR_14; VAR_14 = FUNC_2 (VAR_14))
    {
      if (!FUNC_1 (VAR_14))
 continue;
      if (VAR_10 == VAR_14)
 break;
      VAR_19++;
    }
  VAR_15 = FUNC_11 (VAR_3, VAR_19);

  VAR_12 = FUNC_21 (VAR_3, VAR_16,
      FUNC_21 (VAR_3, VAR_18,
          FUNC_13 (VAR_3, VAR_15)));
  VAR_13 = FUNC_6 (VAR_0,
        FUNC_12 (FUNC_4 (VAR_7)),
        VAR_7);
  return FUNC_7 (VAR_1, VAR_9, VAR_13, VAR_12, VAR_3);
}
