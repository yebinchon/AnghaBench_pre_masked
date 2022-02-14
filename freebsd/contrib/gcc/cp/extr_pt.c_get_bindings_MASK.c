
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (int ,scalar_t__,scalar_t__,int ,int,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_9 (int) ;
 scalar_t__ FUNC_10 (scalar_t__,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_11 (scalar_t__,scalar_t__,int ,scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__) ;

__attribute__((used)) static tree
FUNC_13 (tree VAR_5, tree VAR_6, tree VAR_7, bool VAR_8)
{
  int VAR_9 = FUNC_2 (VAR_5);
  tree VAR_10 = FUNC_9 (VAR_9);
  tree VAR_11;
  tree VAR_12;




  VAR_11 = FUNC_5 (VAR_6);
  if (VAR_7 && FUNC_12 (VAR_11))
    {
      tree VAR_13;
      tree VAR_14;

      if (FUNC_3 (VAR_6))
 VAR_13 = FUNC_4 (VAR_6);
      else

 return VAR_2;

      VAR_14
 = FUNC_7 (FUNC_1 (VAR_13),
     VAR_7, VAR_2,
     VAR_4,
                          0,
                          0);
      if (VAR_14 == VAR_3)
 return VAR_2;

      VAR_11 = FUNC_11 (VAR_11, VAR_14, VAR_4, VAR_2);
      if (VAR_11 == VAR_3)
 return VAR_2;
    }


  VAR_12 = FUNC_10 (VAR_6,
           FUNC_6 (VAR_11));

  if (FUNC_8 (VAR_5, VAR_7, VAR_10,
      VAR_12,
      (VAR_8 || FUNC_0 (VAR_5)
       ? FUNC_5 (VAR_11) : VAR_2),
      VAR_0, VAR_1))
    return VAR_2;

  return VAR_10;
}
