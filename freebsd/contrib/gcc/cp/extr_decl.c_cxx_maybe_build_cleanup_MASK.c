
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__,int ,int,int ) ;
 scalar_t__ FUNC_9 (int ,scalar_t__,int ) ;
 int FUNC_10 (scalar_t__) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;

tree
FUNC_11 (tree VAR_10)
{
  tree VAR_11 = FUNC_6 (VAR_10);


  tree VAR_12 = VAR_5;
  bool VAR_13 = 0;

  if (FUNC_4 (VAR_11) == VAR_6)
    VAR_12 = FUNC_0 (VAR_11);

  if (VAR_11 != VAR_7)
    {
      if (FUNC_4 (VAR_11) == VAR_6)


 VAR_13 = (VAR_12 && FUNC_5 (VAR_12))
   || FUNC_2 (VAR_11)
   || FUNC_1 (VAR_11);
      else
 VAR_13 = FUNC_7 (VAR_11);
    }

  if (VAR_13)
    {

      int VAR_14 = VAR_4|VAR_2;
      tree VAR_15;
      bool VAR_16 = (FUNC_4 (VAR_11) == VAR_6
    && FUNC_3 (VAR_11));
      if (FUNC_4 (VAR_11) == VAR_1)
 VAR_15 = VAR_10;
      else
 {
   FUNC_10 (VAR_10);
   VAR_15 = FUNC_9 (VAR_0, VAR_10, 0);
 }


      if (!VAR_16 || VAR_8)
 VAR_14 |= VAR_3;

      VAR_15 = FUNC_8 (FUNC_6 (VAR_15), VAR_15,
      VAR_9, VAR_14, 0);

      return VAR_15;
    }
  return VAR_5;
}
