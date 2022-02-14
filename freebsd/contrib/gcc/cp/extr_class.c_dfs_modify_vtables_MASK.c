
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_6 (int ,scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_10 (scalar_t__,scalar_t__) ;
 int FUNC_11 (scalar_t__,scalar_t__,int ,scalar_t__*,unsigned int) ;

__attribute__((used)) static tree
FUNC_12 (tree VAR_2, void* VAR_3)
{
  tree VAR_4 = (tree) VAR_3;
  tree VAR_5;
  tree VAR_6;
  unsigned VAR_7;

  if (!FUNC_9 (FUNC_1 (VAR_2)))


    return VAR_1;

  if (FUNC_6 (FUNC_1 (VAR_2), VAR_4)
      && !FUNC_5 (VAR_4))

    return VAR_0;

  if (FUNC_0 (VAR_2) && !FUNC_3 (VAR_2))




    return VAR_0;

  FUNC_10 (VAR_4, VAR_2);




  for (VAR_7 = 0, VAR_5 = FUNC_2 (VAR_2),
  VAR_6 = FUNC_2 (FUNC_8 (FUNC_1 (VAR_2)));
       VAR_5;
       VAR_7++, VAR_5 = FUNC_7 (VAR_5),
  VAR_6 = FUNC_7 (VAR_6))
    FUNC_11 (VAR_4,
    VAR_2,
    FUNC_4 (VAR_6),
    &VAR_5, VAR_7);

  return VAR_0;
}
