
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (char*) ;
 int VAR_6 ;
 int FUNC_9 (int ) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_10 (char*) ;
 int VAR_9 ;
 int FUNC_11 (int ) ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static tree
FUNC_12 (tree VAR_11, tree VAR_12, tree VAR_13)
{
  tree VAR_14;
  tree VAR_15 = VAR_9;
  tree VAR_16 = FUNC_2 (VAR_13);

  if (!FUNC_5 (VAR_16, VAR_4))
    return VAR_6;

  if (VAR_8 || VAR_10)
    {
      if (FUNC_1 (VAR_16) == VAR_5)
 FUNC_10 ("ISO C++ forbids using pointer of type %<void *%> in subtraction");
      if (FUNC_1 (VAR_16) == VAR_1)
 FUNC_10 ("ISO C++ forbids using pointer to a function in subtraction");
      if (FUNC_1 (VAR_16) == VAR_2)
 FUNC_10 ("ISO C++ forbids using pointer to a method in subtraction");
    }




  VAR_11 = FUNC_6 (VAR_3,
       FUNC_7 (VAR_15, VAR_11),
       FUNC_7 (VAR_15, VAR_12));


  if (!FUNC_0 (FUNC_2 (FUNC_2 (VAR_12))))
    FUNC_8 ("invalid use of a pointer to an incomplete type in pointer arithmetic");

  VAR_12 = (FUNC_3 (VAR_13)
  ? FUNC_11 (VAR_16)
  : VAR_7);



  VAR_14 = FUNC_4 (VAR_0, VAR_15, VAR_11, FUNC_7 (VAR_15, VAR_12));
  return FUNC_9 (VAR_14);
}
