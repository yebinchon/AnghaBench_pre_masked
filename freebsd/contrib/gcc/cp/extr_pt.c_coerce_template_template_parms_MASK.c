
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tsubst_flags_t ;
typedef scalar_t__ tree ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;


 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (scalar_t__) ;

 int FUNC_6 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_7 (int) ;
 int FUNC_8 () ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,scalar_t__,int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_11 (tree VAR_3,
    tree VAR_4,
    tsubst_flags_t VAR_5,
    tree VAR_6,
    tree VAR_7)
{
  int VAR_8, VAR_9, VAR_10;
  tree VAR_11, VAR_12;

  FUNC_7 (FUNC_1 (VAR_3) == VAR_1);
  FUNC_7 (FUNC_1 (VAR_4) == VAR_1);

  VAR_8 = FUNC_5 (VAR_3);
  VAR_9 = FUNC_5 (VAR_4);

  if (VAR_9 != VAR_8)
    return 0;

  for (VAR_10 = 0; VAR_10 < VAR_8; ++VAR_10)
    {
      if (FUNC_4 (VAR_3, VAR_10) == VAR_2
          || FUNC_4 (VAR_4, VAR_10) == VAR_2)
        continue;

      VAR_11 = FUNC_3 (FUNC_4 (VAR_3, VAR_10));
      VAR_12 = FUNC_3 (FUNC_4 (VAR_4, VAR_10));

      if (VAR_12 == VAR_0 || VAR_12 == VAR_2
   || VAR_11 == VAR_0 || VAR_11 == VAR_2)
 return 0;

      if (FUNC_1 (VAR_12) != FUNC_1 (VAR_11))
 return 0;

      switch (FUNC_1 (VAR_11))
 {
 case 128:
   break;

 case 129:



   {
     tree VAR_13 = FUNC_0 (VAR_11);
     tree VAR_14 = FUNC_0 (VAR_12);

     if (!FUNC_11
  (VAR_13, VAR_14, VAR_5, VAR_6, VAR_7))
       return 0;
   }
   break;

 case 130:







   if (!FUNC_6 (FUNC_2 (VAR_12))
       && !FUNC_9
      (FUNC_10 (FUNC_2 (VAR_11), VAR_7, VAR_5, VAR_6),
        FUNC_2 (VAR_12)))
     return 0;
   break;

 default:
   FUNC_8 ();
 }
    }
  return 1;
}
