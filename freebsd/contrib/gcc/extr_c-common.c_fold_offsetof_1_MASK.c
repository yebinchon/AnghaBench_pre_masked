
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;



 int VAR_0 ;



 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;
 int const FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;

 scalar_t__ FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (char*,...) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_9 (int ,int ,scalar_t__) ;
 int FUNC_10 (int) ;
 int FUNC_11 () ;
 int FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_14 (int) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_15 (scalar_t__) ;
 int FUNC_16 (int ,int) ;

__attribute__((used)) static tree
FUNC_17 (tree VAR_8, tree VAR_9)
{
  enum tree_code VAR_10 = VAR_4;
  tree VAR_11, VAR_12, VAR_13;

  if (VAR_8 == VAR_9 && FUNC_3 (VAR_8) != 132)
    return VAR_6;

  switch (FUNC_3 (VAR_8))
    {
    case 132:
      return VAR_8;

    case 128:
      FUNC_8 ("cannot apply %<offsetof%> to static data member %qD", VAR_8);
      return VAR_5;

    case 135:
      FUNC_8 ("cannot apply %<offsetof%> when %<operator[]%> is overloaded");
      return VAR_5;

    case 130:
      FUNC_10 (FUNC_12 (VAR_8));
      return VAR_6;

    case 129:
    case 131:
      VAR_11 = FUNC_17 (FUNC_4 (VAR_8, 0), VAR_9);
      FUNC_10 (VAR_11 == VAR_5 || VAR_11 == VAR_6);
      return VAR_11;

    case 134:
      VAR_11 = FUNC_17 (FUNC_4 (VAR_8, 0), VAR_9);
      if (VAR_11 == VAR_5)
 return VAR_11;

      VAR_13 = FUNC_4 (VAR_8, 1);
      if (FUNC_0 (VAR_13))
 {
   FUNC_8 ("attempt to take address of bit-field structure "
   "member %qD", VAR_13);
   return VAR_5;
 }
      VAR_12 = FUNC_13 (VAR_4, FUNC_2 (VAR_13),
   FUNC_14 (FUNC_16 (FUNC_1 (VAR_13), 1)
      / VAR_0));
      break;

    case 136:
      VAR_11 = FUNC_17 (FUNC_4 (VAR_8, 0), VAR_9);
      if (VAR_11 == VAR_5)
 return VAR_11;

      VAR_13 = FUNC_4 (VAR_8, 1);
      if (FUNC_3 (VAR_13) == 130 && FUNC_15 (VAR_13) < 0)
 {
   VAR_10 = VAR_1;
   VAR_13 = FUNC_9 (VAR_3, FUNC_5 (VAR_13), VAR_13);
 }
      VAR_13 = FUNC_7 (VAR_7, VAR_13);
      VAR_12 = FUNC_13 (VAR_2, FUNC_6 (FUNC_5 (VAR_8)), VAR_13);
      break;

    case 133:

      VAR_13 = FUNC_4 (VAR_8, 1);
      FUNC_10 (FUNC_3 (VAR_13) == 128);
      return FUNC_17 (VAR_13, VAR_9);

    default:
      FUNC_11 ();
    }

  return FUNC_13 (VAR_10, VAR_11, VAR_12);
}
