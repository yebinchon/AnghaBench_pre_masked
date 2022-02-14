
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* tree ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (char*) ;
 char* FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (char*) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*) ;
 char* FUNC_6 (char*,char*) ;
 char* FUNC_7 (char*,char*,char*) ;
 char* FUNC_8 (char*,int ) ;
 char* FUNC_9 (char*) ;
 char* FUNC_10 (char*,char*) ;
 int FUNC_11 (char*,char*,char*,int ) ;
 char* FUNC_12 (int ,char*,char*) ;
 int VAR_8 ;
 int FUNC_13 (char*,char*,char*) ;
 char* VAR_9 ;
 scalar_t__ FUNC_14 (char*) ;
 int FUNC_15 (char*,char**,char**) ;
 int FUNC_16 (int) ;
 char* FUNC_17 (int ,int ,int,int) ;
 char* FUNC_18 (char*,char*,int ) ;
 char* VAR_10 ;
 char* VAR_11 ;
 scalar_t__ FUNC_19 (char*) ;
 char* FUNC_20 (char*,char*) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_21 (char*,int ) ;
 scalar_t__ FUNC_22 (char*,char*) ;
 char* FUNC_23 (char*) ;
 int VAR_16 ;
 scalar_t__ FUNC_24 (char*) ;

tree
FUNC_25 (tree VAR_17, tree VAR_18, int VAR_19, bool VAR_20)
{
  tree VAR_21;
  tree VAR_22;
  tree VAR_23;

  if (FUNC_14 (VAR_18))
    return VAR_9;

  VAR_22 = FUNC_3 (VAR_18);
  VAR_23 = FUNC_9 (VAR_17);


  if (FUNC_5 (VAR_22))
    {
      tree VAR_24 = VAR_3;
      tree VAR_25 = VAR_3;
      tree VAR_26;

      if (!VAR_19
   && !FUNC_11 (VAR_23, FUNC_3 (VAR_18), VAR_18, VAR_1))
 FUNC_13 ("invalid conversion to type %qT from type %qT",
        VAR_23, VAR_22);

      VAR_26 = FUNC_17 (FUNC_4 (VAR_22),
    FUNC_4 (VAR_23),
    VAR_19,
    VAR_20);





      if (FUNC_0 (VAR_18) != VAR_6)
 {
   if (FUNC_22 (VAR_23, VAR_22))
     return VAR_18;
   else if (FUNC_19 (VAR_26))
     return FUNC_10 (VAR_23, VAR_18);
 }

      if (FUNC_2 (VAR_18))
 VAR_18 = FUNC_23 (VAR_18);


      if (FUNC_0 (VAR_18) == VAR_6)
 FUNC_15 (VAR_18, &VAR_24, &VAR_25);
      else
 {
   VAR_25 = FUNC_8 (VAR_18, VAR_12);
   VAR_24 = FUNC_8 (VAR_18, VAR_8);
 }


      FUNC_16 (FUNC_21
     (FUNC_3 (VAR_24), VAR_14));
      if (VAR_7 == VAR_15)
 VAR_26 = FUNC_12 (VAR_2, VAR_26, VAR_10);
      VAR_24 = FUNC_12 (VAR_5, VAR_24, VAR_26);
      return FUNC_7 (VAR_23, VAR_24, VAR_25);
    }


  if (FUNC_19 (VAR_18))
    {
      VAR_18 = FUNC_6 (VAR_17, VAR_11);
      return FUNC_7 (VAR_23,
    VAR_11,
    VAR_18);
    }

  if (FUNC_24 (VAR_18))
    return FUNC_18 (VAR_17, VAR_18, VAR_16);

  VAR_21 = FUNC_1 (VAR_18, 0);
  FUNC_16 (FUNC_0 (VAR_21) == VAR_0


       || (VAR_13 && FUNC_0 (VAR_21) == VAR_4));
  return FUNC_20 (VAR_23, VAR_21);
}
