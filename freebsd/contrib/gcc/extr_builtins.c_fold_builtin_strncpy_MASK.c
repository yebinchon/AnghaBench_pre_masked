
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int VAR_5 ;
 int FUNC_4 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,int) ;
 scalar_t__ FUNC_6 (scalar_t__,int ) ;
 scalar_t__* VAR_6 ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_9 (int ,scalar_t__,int ) ;
 int FUNC_10 (int) ;
 scalar_t__ FUNC_11 (scalar_t__,scalar_t__) ;
 int FUNC_12 (scalar_t__,int ,int ,int ,int ) ;

tree
FUNC_13 (tree VAR_7, tree VAR_8, tree VAR_9)
{
  tree VAR_10, VAR_11, VAR_12, VAR_13;

  if (!FUNC_12 (VAR_8,
    VAR_4, VAR_4, VAR_2, VAR_5))
    return 0;

  VAR_10 = FUNC_3 (VAR_8);
  VAR_11 = FUNC_3 (FUNC_0 (VAR_8));
  VAR_12 = FUNC_3 (FUNC_0 (FUNC_0 (VAR_8)));


  if (FUNC_7 (VAR_12))
    return FUNC_8 (FUNC_2 (FUNC_2 (VAR_7)), VAR_10, VAR_11);



  if (VAR_12 == 0 || FUNC_1 (VAR_12) != VAR_1)
    return 0;

  if (!VAR_9)
    VAR_9 = FUNC_5 (VAR_11, 1);


  if (VAR_9 == 0 || FUNC_1 (VAR_9) != VAR_1)
    return 0;

  VAR_9 = FUNC_9 (VAR_3, VAR_9, FUNC_10 (1));




  if (FUNC_11 (VAR_9, VAR_12))
    return 0;


  VAR_13 = VAR_6[VAR_0];
  if (!VAR_13)
    return 0;
  return FUNC_6 (FUNC_2 (FUNC_2 (VAR_7)),
         FUNC_4 (VAR_13, VAR_8));
}
