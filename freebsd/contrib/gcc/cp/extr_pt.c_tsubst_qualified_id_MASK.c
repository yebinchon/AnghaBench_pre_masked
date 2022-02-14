
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tsubst_flags_t ;
typedef scalar_t__ tree ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_5 (scalar_t__,int) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__,scalar_t__,int ) ;
 int FUNC_9 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int VAR_8 ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 int FUNC_12 (char*,scalar_t__) ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_13 (scalar_t__,scalar_t__,int,int,int ,int) ;
 int FUNC_14 (int) ;
 int FUNC_15 (char*,scalar_t__) ;
 scalar_t__ FUNC_16 (scalar_t__,scalar_t__,int ,int) ;
 scalar_t__ FUNC_17 (scalar_t__,scalar_t__) ;
 int FUNC_18 (scalar_t__) ;
 int FUNC_19 (scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_10 ;
 scalar_t__ FUNC_20 (scalar_t__,scalar_t__,int,scalar_t__) ;
 scalar_t__ FUNC_21 (scalar_t__,scalar_t__,int,scalar_t__) ;
 scalar_t__ FUNC_22 (scalar_t__,scalar_t__,int,scalar_t__) ;

__attribute__((used)) static tree
FUNC_23 (tree VAR_11, tree VAR_12,
       tsubst_flags_t VAR_13, tree VAR_14,
       bool VAR_15, bool VAR_16)
{
  tree VAR_17;
  tree VAR_18;
  tree VAR_19;
  bool VAR_20;
  tree VAR_21;

  FUNC_14 (FUNC_4 (VAR_11) == VAR_3);


  VAR_19 = FUNC_5 (VAR_11, 1);
  if (FUNC_4 (VAR_19) == VAR_5)
    {
      VAR_20 = 1;
      VAR_21 = FUNC_5 (VAR_19, 1);
      if (VAR_21)
 VAR_21 = FUNC_22 (VAR_21, VAR_12,
           VAR_13, VAR_14);
      VAR_19 = FUNC_5 (VAR_19, 0);
    }
  else
    {
      VAR_20 = 0;
      VAR_21 = VAR_1;
    }





  VAR_18 = FUNC_5 (VAR_11, 0);
  if (VAR_12)
    {
      VAR_18 = FUNC_20 (VAR_18, VAR_12, VAR_13, VAR_14);
      VAR_17 = FUNC_21 (VAR_19, VAR_12, VAR_13, VAR_14);
    }
  else
    VAR_17 = VAR_19;

  if (FUNC_11 (VAR_18))
    return FUNC_8 ( VAR_1,
     VAR_18, VAR_17,
     FUNC_3 (VAR_11));

  if (!FUNC_0 (VAR_19) && !FUNC_1 (VAR_17))
    {
      if (FUNC_4 (VAR_17) == VAR_0)


 VAR_17 = VAR_9;
      else
 VAR_17 = FUNC_16 (VAR_18, VAR_17, 0, 0);
      if (FUNC_4 (FUNC_4 (VAR_17) == VAR_4
       ? FUNC_2 (VAR_17) : VAR_17) == VAR_7)
 {
   if (VAR_13 & VAR_10)
     {
       FUNC_12 ("dependent-name %qE is parsed as a non-type, but "
       "instantiation yields a type", VAR_11);
       FUNC_15 ("say %<typename %E%> if a type is meant", VAR_11);
     }
   return VAR_9;
 }
    }

  if (FUNC_1 (VAR_17))
    {
      FUNC_9 (VAR_17, VAR_1,
        VAR_18);

      FUNC_18 (VAR_17);
    }

  if (VAR_17 == VAR_9 || FUNC_4 (VAR_17) == VAR_6)
    {
      if (VAR_13 & VAR_10)
 FUNC_19 (VAR_18,
         FUNC_5 (VAR_11, 1),
         VAR_17);
      return VAR_9;
    }

  if (VAR_20)
    VAR_17 = FUNC_17 (VAR_17, VAR_21);

  if (VAR_17 == VAR_9 && VAR_13 & VAR_10)
    FUNC_19 (VAR_18, FUNC_5 (VAR_11, 1),
     VAR_17);
  else if (FUNC_6 (VAR_18))
    {
      VAR_17 = (FUNC_7
       (VAR_17, VAR_18, VAR_8));
      VAR_17 = (FUNC_13
       (VAR_18, VAR_17, VAR_15, VAR_16,
        FUNC_3 (VAR_11),
                           0));
    }


  if (FUNC_4 (VAR_17) != VAR_3


      && FUNC_4 (VAR_17) != VAR_2)
    VAR_17 = FUNC_10 (VAR_17);

  return VAR_17;
}
