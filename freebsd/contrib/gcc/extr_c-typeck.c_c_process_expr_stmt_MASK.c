
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (int ,scalar_t__,scalar_t__) ;
 int VAR_3 ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (char*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_11 (scalar_t__) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;

tree
FUNC_12 (tree VAR_9)
{
  if (!VAR_9)
    return VAR_2;

  if (VAR_7)
    FUNC_11 (VAR_9);

  if (FUNC_7 (VAR_9) != VAR_4
      && !FUNC_0 (FUNC_7 (VAR_9))
      && FUNC_6 (FUNC_7 (VAR_9)) != VAR_0)
    FUNC_10 ("expression statement has incomplete type");




  if (!FUNC_5 (VAR_3)
      && (VAR_5 || VAR_8))
    FUNC_9 (VAR_9);



  if (FUNC_2 (VAR_9) || FUNC_1 (VAR_9))
    VAR_9 = FUNC_8 (VAR_1, FUNC_7 (VAR_9), VAR_9);

  if (FUNC_3 (VAR_9))
    FUNC_4 (VAR_9, VAR_6);

  return VAR_9;
}
