
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tsubst_flags_t ;
typedef scalar_t__ tree ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_11 (scalar_t__,int ,int) ;
 scalar_t__ FUNC_12 (scalar_t__,int ) ;
 int FUNC_13 (char*,...) ;
 scalar_t__ VAR_3 ;
 int FUNC_14 (int) ;
 int VAR_4 ;
 scalar_t__ FUNC_15 (scalar_t__,scalar_t__,int,scalar_t__) ;
 scalar_t__ FUNC_16 (int ,scalar_t__,int,scalar_t__) ;

__attribute__((used)) static tree
FUNC_17 (tree VAR_5,
        tree VAR_6,
        tsubst_flags_t VAR_7,
        tree VAR_8)
{
  tree VAR_9;
  tree VAR_10;
  tree VAR_11;


  FUNC_14 (FUNC_7 (VAR_5) == VAR_2);


  VAR_9 = FUNC_15 (FUNC_3 (VAR_5), VAR_6, VAR_7, VAR_8);
  if (VAR_9 == VAR_3)
    return VAR_3;




  if (FUNC_2 (VAR_9) == VAR_0
      || FUNC_2 (VAR_9) == VAR_1)
    {
      if (VAR_7 & VAR_4)
 {
   if (FUNC_2 (VAR_9) == VAR_0)
     FUNC_13 ("function returning an array");
   else
     FUNC_13 ("function returning a function");
 }
      return VAR_3;
    }


  VAR_10 = FUNC_16 (FUNC_5 (VAR_5), VAR_6,
    VAR_7, VAR_8);
  if (VAR_10 == VAR_3)
    return VAR_3;


  if (FUNC_2 (VAR_5) == VAR_1)
    VAR_11 = FUNC_9 (VAR_9, VAR_10);
  else
    {
      tree VAR_12 = FUNC_3 (FUNC_4 (VAR_10));
      if (! FUNC_0 (VAR_12))
 {







   if (VAR_7 & VAR_4)
     FUNC_13 ("creating pointer to member function of non-class type %qT",
        VAR_12);
   return VAR_3;
 }

      VAR_11 = FUNC_10 (VAR_12, VAR_9,
        FUNC_1 (VAR_10));
    }
  VAR_11 = FUNC_11 (VAR_11, FUNC_8 (VAR_5), VAR_7);
  VAR_11 = FUNC_12 (VAR_11, FUNC_6 (VAR_5));

  return VAR_11;
}
