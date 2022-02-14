
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_2__ {scalar_t__ (* merge_type_attributes ) (scalar_t__,scalar_t__) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__,int) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_9 (int) ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__) ;
 TYPE_1__ VAR_4 ;

__attribute__((used)) static tree
FUNC_11 (tree VAR_5, tree VAR_6)
{
  tree VAR_7;
  tree VAR_8, VAR_9;
  tree VAR_10, VAR_11;
  tree VAR_12;



  if (VAR_5 == VAR_6) return VAR_5;


  if (VAR_5 == VAR_3)
    return VAR_6;
  if (VAR_6 == VAR_3)
    return VAR_5;


  FUNC_9 ((FUNC_0 (VAR_5) == VAR_2
        && FUNC_0 (VAR_6) == VAR_2)
       || (FUNC_0 (VAR_5) == VAR_1
    && FUNC_0 (VAR_6) == VAR_1));



  VAR_7 = VAR_4.merge_type_attributes (VAR_5, VAR_6);




  VAR_9 = VAR_8 = FUNC_1 (VAR_5);
  VAR_11 = VAR_10 = FUNC_1 (VAR_6);
  if (FUNC_0 (VAR_9) != VAR_0)
    VAR_9 = FUNC_2 (VAR_8);
  if (FUNC_0 (VAR_11) != VAR_0)
    VAR_11 = FUNC_2 (VAR_10);
  VAR_12 = FUNC_8 (VAR_9, VAR_11);

  VAR_5 = FUNC_7 (VAR_12,
          FUNC_3 (VAR_8) |
          FUNC_3 (VAR_10));
  if (FUNC_0 (VAR_6) == VAR_1)
    VAR_5 = FUNC_4 (VAR_5);
  else
    VAR_5 = FUNC_5 (VAR_5);

  return FUNC_6 (VAR_5, VAR_7);
}
