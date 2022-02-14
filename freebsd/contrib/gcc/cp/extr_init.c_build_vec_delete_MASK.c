
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef int special_function_kind ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int ,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__,int *) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ,scalar_t__,int) ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__,scalar_t__,int ,int) ;
 int FUNC_11 (char*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 int VAR_7 ;
 scalar_t__ FUNC_13 (scalar_t__) ;

tree
FUNC_14 (tree VAR_8, tree VAR_9,
    special_function_kind VAR_10, int VAR_11)
{
  tree VAR_12;
  tree VAR_13;
  tree VAR_14 = VAR_4;

  VAR_12 = FUNC_3 (VAR_8);

  if (FUNC_1 (VAR_12) == VAR_5)
    {

      tree VAR_15;

      if (FUNC_2 (VAR_8))
 {
   VAR_14 = FUNC_12 (VAR_8);
   VAR_8 = FUNC_0 (VAR_14);
 }
      VAR_12 = FUNC_13 (FUNC_3 (VAR_12));
      VAR_15 = FUNC_6 (VAR_3,
       FUNC_8 (VAR_7),
       VAR_8,
       FUNC_4 (VAR_7));
      VAR_9 = FUNC_7 (VAR_15, ((void*)0));
    }
  else if (FUNC_1 (VAR_12) == VAR_1)
    {


      VAR_9 = FUNC_5 (VAR_12);
      VAR_12 = FUNC_13 (VAR_12);
      VAR_8 = FUNC_9 (VAR_0, VAR_8, 1);
      if (FUNC_2 (VAR_8))
 {
   VAR_14 = FUNC_12 (VAR_8);
   VAR_8 = FUNC_0 (VAR_14);
 }
    }
  else
    {
      if (VAR_8 != VAR_6)
 FUNC_11 ("type to vector delete is neither pointer or array type");
      return VAR_6;
    }

  VAR_13 = FUNC_10 (VAR_8, VAR_9, VAR_12, VAR_10,
        VAR_11);
  if (VAR_14)
    VAR_13 = FUNC_6 (VAR_2, FUNC_3 (VAR_13), VAR_14, VAR_13);

  return VAR_13;
}
