
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* tree ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (void*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_1 (void*) ;
 void* FUNC_2 (void*,int) ;
 scalar_t__ FUNC_3 (void*) ;
 scalar_t__ VAR_10 ;
 void* FUNC_4 (int ,int ,void*) ;
 void* FUNC_5 (scalar_t__,scalar_t__,void*,void*) ;
 void* FUNC_6 (scalar_t__,scalar_t__,void*,void*,void*) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (void*) ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (void*) ;
 scalar_t__ VAR_11 ;

tree
FUNC_11 (tree VAR_12)
{
  tree VAR_13;



  if (FUNC_10 (VAR_12))
    return VAR_12;


  VAR_13 = VAR_12;
  if (FUNC_1 (VAR_13) == VAR_0)
    VAR_13 = FUNC_2 (VAR_13, 0);
  if (FUNC_1 (VAR_13) == VAR_1)
    VAR_13 = FUNC_2 (VAR_13, 1);
  if (FUNC_8 (VAR_13)
      || FUNC_1 (VAR_13) == VAR_6)
    return VAR_12;

  if (FUNC_1 (VAR_12) == VAR_10)
    return VAR_12;



  if (FUNC_1 (VAR_12) == VAR_8)
    return VAR_12;


  if (FUNC_1 (VAR_12) == VAR_4 || FUNC_1 (VAR_12) == VAR_7)
    return VAR_12;





  if (FUNC_1 (VAR_12) == VAR_9)
    return VAR_12;

  if (FUNC_1 (VAR_12) == VAR_3)
    return FUNC_6 (VAR_3,
     FUNC_3 (VAR_12),
     FUNC_2 (VAR_12, 0),
     (FUNC_2 (VAR_12, 1)
      ? FUNC_11 (FUNC_2 (VAR_12, 1))
      : FUNC_11 (FUNC_2 (VAR_12, 0))),
     FUNC_11 (FUNC_2 (VAR_12, 2)));
  if (FUNC_1 (VAR_12) == VAR_2
      && !FUNC_0 (VAR_12))
    return FUNC_5 (VAR_2,
     FUNC_3 (VAR_12),
     FUNC_2 (VAR_12, 0),
     FUNC_11 (FUNC_2 (VAR_12, 1)));


  FUNC_7 (FUNC_3 (VAR_12) != VAR_11);
  return FUNC_4 (VAR_5, FUNC_9 (FUNC_3 (VAR_12)), VAR_12);
}
