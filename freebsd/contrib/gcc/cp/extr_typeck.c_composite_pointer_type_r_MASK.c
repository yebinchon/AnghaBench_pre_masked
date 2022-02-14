
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_2__ {scalar_t__ (* merge_type_attributes ) (scalar_t__,scalar_t__) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (int ,scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__,int) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (char*,char const*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__,scalar_t__) ;
 int FUNC_13 (int ,int ) ;
 scalar_t__ FUNC_14 (scalar_t__,scalar_t__) ;
 TYPE_1__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static tree
FUNC_15 (tree VAR_4, tree VAR_5, const char* VAR_6)
{
  tree VAR_7;
  tree VAR_8;
  tree VAR_9;
  tree VAR_10;



  if (FUNC_0 (VAR_4) == VAR_1 || FUNC_0 (VAR_4) == VAR_0)
    {
      VAR_7 = FUNC_1 (VAR_4);
      VAR_8 = FUNC_1 (VAR_5);
    }
  else
    {
      VAR_7 = FUNC_3 (VAR_4);
      VAR_8 = FUNC_3 (VAR_5);
    }
  if (FUNC_12 (VAR_7, VAR_8))
    VAR_9 = VAR_7;
  else if ((FUNC_0 (VAR_7) == VAR_1
     && FUNC_0 (VAR_8) == VAR_1)
    || (FUNC_4 (VAR_7)
        && FUNC_4 (VAR_8)))
    VAR_9 = FUNC_15 (VAR_7, VAR_8, VAR_6);
  else
    {
      FUNC_11 ("%s between distinct pointer types %qT and %qT "
        "lacks a cast",
        VAR_6, VAR_4, VAR_5);
      VAR_9 = VAR_3;
    }
  VAR_9 = FUNC_9 (VAR_9,
      (FUNC_10 (VAR_7)
       | FUNC_10 (VAR_8)));


  if (FUNC_4 (VAR_4))
    {
      if (!FUNC_13 (FUNC_2 (VAR_4),
   FUNC_2 (VAR_5)))
 FUNC_11 ("%s between distinct pointer types %qT and %qT "
   "lacks a cast",
   VAR_6, VAR_4, VAR_5);
      VAR_9 = FUNC_7 (FUNC_2 (VAR_4),
           VAR_9);
    }

  else if (FUNC_0 (VAR_4) == VAR_0
     && VAR_9 != VAR_3)
    VAR_9 = FUNC_5 (VAR_9);
  else
    VAR_9 = FUNC_6 (VAR_9);



  VAR_10 = (*VAR_2.merge_type_attributes) (VAR_4, VAR_5);
  return FUNC_8 (VAR_9, VAR_10);
}
