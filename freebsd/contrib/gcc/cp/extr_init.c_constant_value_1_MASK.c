
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 int FUNC_12 (scalar_t__) ;
 int VAR_5 ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 scalar_t__ FUNC_14 (int ) ;

__attribute__((used)) static tree
FUNC_15 (tree VAR_6, bool VAR_7)
{
  while (FUNC_8 (VAR_6) == VAR_1
  || (VAR_7
      ? FUNC_6 (VAR_6)
      : (FUNC_8 (VAR_6) == VAR_3
  && FUNC_2 (FUNC_10 (VAR_6)))))
    {
      tree VAR_8;







      if (FUNC_3 (VAR_6)
   && FUNC_0 (FUNC_4 (VAR_6))
   && FUNC_14 (FUNC_1
      (FUNC_4 (VAR_6))))
 {
   ++VAR_5;
   VAR_8 = FUNC_11 (FUNC_5 (VAR_6));
   --VAR_5;
 }
      else
 {




   FUNC_12 (VAR_6);
   VAR_8 = FUNC_5 (VAR_6);
 }
      if (VAR_8 == VAR_4)
 return VAR_6;
      if (!VAR_8
   || !FUNC_10 (VAR_8)
   || (VAR_7
       ? !FUNC_7 (FUNC_10 (VAR_8))
       : (!FUNC_9 (VAR_8)





   || FUNC_8 (VAR_8) == VAR_0
   || FUNC_8 (VAR_8) == VAR_2)))
 break;
      VAR_6 = FUNC_13 (VAR_8);
    }
  return VAR_6;
}
