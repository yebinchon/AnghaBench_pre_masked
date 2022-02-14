
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_2__ {scalar_t__ (* types_compatible_p ) (scalar_t__,scalar_t__) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_8 (int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 TYPE_1__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__,scalar_t__) ;

__attribute__((used)) static tree
FUNC_12 (tree VAR_7)
{
  tree VAR_8 = FUNC_4 (FUNC_4 (VAR_7));
  tree VAR_9 = VAR_7;
  tree VAR_10;

  FUNC_1 (VAR_9);
  VAR_10 = FUNC_4 (VAR_9);
  if (!FUNC_0 (VAR_10))
    return VAR_4;

  if (FUNC_2 (VAR_9) == VAR_0)
    {
      tree VAR_11 = FUNC_3 (VAR_9, 0);
      tree VAR_12 = FUNC_4 (VAR_11);

      if (VAR_5.types_compatible_p (VAR_8, VAR_12))
        return VAR_11;

      else if (FUNC_2 (VAR_12) == VAR_2
        && VAR_5.types_compatible_p (VAR_8, FUNC_4 (VAR_12)))
       {
         tree VAR_13 = FUNC_5 (VAR_12);
         tree VAR_14 = VAR_6;
         if (VAR_13 && FUNC_6 (VAR_13))
           VAR_14 = FUNC_6 (VAR_13);
         return FUNC_8 (VAR_1, VAR_8, VAR_11, VAR_14, VAR_4, VAR_4);
       }
    }


  if (FUNC_2 (FUNC_4 (VAR_10)) == VAR_2
      && VAR_5.types_compatible_p (VAR_8, FUNC_4 (FUNC_4 (VAR_10))))
    {
      tree VAR_15;
      tree VAR_16 = VAR_6;
      tree VAR_17 = VAR_9;
      VAR_9 = FUNC_12 (VAR_9);
      if (! VAR_9)
 VAR_9 = FUNC_7 (VAR_3, FUNC_4 (VAR_10), VAR_17);
      VAR_15 = FUNC_5 (FUNC_4 (VAR_9));
      if (VAR_15 && FUNC_6 (VAR_15))
        VAR_16 = FUNC_6 (VAR_15);
      return FUNC_8 (VAR_1, VAR_8, VAR_9, VAR_16, VAR_4, VAR_4);
    }

  return VAR_4;
}
