
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* tree ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_2 (char*) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*) ;
 char* FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int VAR_2 ;
 char* FUNC_8 (int ,char*,char*,char*) ;
 char* FUNC_9 (char*) ;
 char* FUNC_10 (int ,char*,char*,int) ;
 char* FUNC_11 (char*,int ) ;
 char* FUNC_12 (int ,char*) ;
 char* FUNC_13 (char*) ;
 char* FUNC_14 (int ) ;
 char* FUNC_15 (char*,int) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (char*,char*,char*,...) ;
 char* VAR_3 ;
 scalar_t__ FUNC_18 (char*) ;
 char* FUNC_19 (char*,char*,int ,int *) ;
 int VAR_4 ;
 int FUNC_20 (char*,char*) ;

tree
FUNC_21 (tree VAR_5, tree VAR_6)
{
  tree VAR_7;
  tree VAR_8;
  tree VAR_9;
  tree VAR_10;
  tree VAR_11;

  if (FUNC_18 (VAR_5) || FUNC_18 (VAR_6))
    return VAR_3;

  VAR_7 = FUNC_2 (VAR_6);
  if (!FUNC_7 (VAR_7))
    {
      FUNC_17 ("%qE cannot be used as a member pointer, since it is of "
      "type %qT",
      VAR_6, VAR_7);
      return VAR_3;
    }

  VAR_8 = FUNC_3 (FUNC_2 (VAR_5));
  if (! FUNC_1 (VAR_8))
    {
      FUNC_17 ("cannot apply member pointer %qE to %qE, which is of "
      "non-class type %qT",
      VAR_6, VAR_5, VAR_8);
      return VAR_3;
    }

  VAR_9 = FUNC_6 (VAR_7);
  VAR_11 = FUNC_14 (FUNC_4 (VAR_7));

  if (!FUNC_0 (VAR_11))
    {
      if (!FUNC_20 (VAR_11, VAR_8))
 goto mismatch;
      VAR_10 = ((void*)0);
    }
  else
    {
      VAR_10 = FUNC_19 (VAR_8, VAR_11, VAR_2, ((void*)0));

      if (!VAR_10)
 {
 mismatch:
   FUNC_17 ("pointer to member type %qT incompatible with object "
   "type %qT",
   VAR_9, VAR_8);
   return VAR_3;
 }
      else if (VAR_10 == VAR_3)
 return VAR_3;
    }

  if (FUNC_5 (VAR_7))
    {




      VAR_9 = FUNC_15 (VAR_9,
          (FUNC_16 (VAR_9)
           | FUNC_16 (FUNC_2 (VAR_5))));

      VAR_5 = FUNC_9 (VAR_5);


      if (VAR_10)
 VAR_5 = FUNC_10 (VAR_1, VAR_5, VAR_10, 1);



      VAR_5 = FUNC_8 (VAR_1, FUNC_13 (VAR_9),
        VAR_5, FUNC_12 (VAR_4, VAR_6));
      return FUNC_11 (VAR_5, 0);
    }
  else
    return FUNC_8 (VAR_0, VAR_9, VAR_5, VAR_6);
}
