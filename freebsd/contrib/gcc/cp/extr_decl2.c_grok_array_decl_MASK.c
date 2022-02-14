
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (char*) ;
 char* FUNC_2 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (int,scalar_t__,int) ;
 scalar_t__ FUNC_5 (int ,scalar_t__,scalar_t__,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_6 (int ,scalar_t__,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_7 (int ,int ,scalar_t__,scalar_t__,int ,int *) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (char*,...) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_13 (scalar_t__) ;

tree
FUNC_14 (tree VAR_9, tree VAR_10)
{
  tree VAR_11;
  tree VAR_12;
  tree VAR_13 = VAR_9;
  tree VAR_14 = VAR_10;

  if (FUNC_10 (VAR_9) || FUNC_10 (VAR_10))
    return VAR_7;

  if (VAR_8)
    {
      if (FUNC_13 (VAR_9)
   || FUNC_13 (VAR_10))
 return FUNC_6 (VAR_0, VAR_9, VAR_10,
        VAR_3, VAR_3);
      VAR_9 = FUNC_8 (VAR_9);
      VAR_10 = FUNC_8 (VAR_10);
    }

  VAR_11 = FUNC_2 (VAR_9);
  FUNC_11 (VAR_11);
  VAR_11 = FUNC_12 (VAR_11);


  if (FUNC_0 (VAR_11) || FUNC_0 (FUNC_2 (VAR_10)))
    VAR_12 = FUNC_7 (VAR_0, VAR_2,
    VAR_9, VAR_10, VAR_3,
                     ((void*)0));
  else
    {
      tree VAR_15, VAR_16, VAR_17, VAR_18;





      if (FUNC_1 (VAR_11) == VAR_1)
 VAR_15 = VAR_9;
      else
 VAR_15 = FUNC_4 (VAR_6, VAR_9, 0);

      if (FUNC_1 (FUNC_2 (VAR_10)) == VAR_1)
 VAR_16 = VAR_10;
      else
 VAR_16 = FUNC_4 (VAR_6, VAR_10, 0);

      VAR_17 = FUNC_4 (VAR_5 | VAR_4, VAR_9,
           0);
      VAR_18 = FUNC_4 (VAR_5 | VAR_4, VAR_10,
           0);

      if ((VAR_15 && VAR_18) && (VAR_17 && VAR_16))
 FUNC_9 ("ambiguous conversion for array subscript");

      if (VAR_15 && VAR_18)
 VAR_9 = VAR_15, VAR_10 = VAR_18;
      else if (VAR_17 && VAR_16)
 VAR_9 = VAR_16, VAR_10 = VAR_17;
      else
 {
   FUNC_9 ("invalid types %<%T[%T]%> for array subscript",
   VAR_11, FUNC_2 (VAR_10));
   return VAR_7;
 }

      if (VAR_9 == VAR_7 || VAR_10 == VAR_7)
 FUNC_9 ("ambiguous conversion for array subscript");

      VAR_12 = FUNC_3 (VAR_9, VAR_10);
    }
  if (VAR_8 && VAR_12 != VAR_7)
    return FUNC_5 (VAR_0, VAR_12, VAR_13, VAR_14,
         VAR_3, VAR_3);
  return VAR_12;
}
