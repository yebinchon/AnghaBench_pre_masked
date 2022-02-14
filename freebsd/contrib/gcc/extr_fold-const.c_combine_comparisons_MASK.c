
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;
typedef enum comparison_code { ____Placeholder_comparison_code } comparison_code ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int VAR_7 ;
 int FUNC_1 (int ) ;




 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_6 (int ,int ,int ,int ) ;

tree
FUNC_7 (enum tree_code VAR_9, enum tree_code VAR_10,
       enum tree_code VAR_11, tree VAR_12,
       tree VAR_13, tree VAR_14)
{
  bool VAR_15 = FUNC_0 (FUNC_2 (FUNC_1 (VAR_13)));
  enum comparison_code VAR_16 = FUNC_3 (VAR_10);
  enum comparison_code VAR_17 = FUNC_3 (VAR_11);
  enum comparison_code VAR_18;

  switch (VAR_9)
    {
    case 130: case 131:
      VAR_18 = VAR_16 & VAR_17;
      break;

    case 128: case 129:
      VAR_18 = VAR_16 | VAR_17;
      break;

    default:
      return VAR_7;
    }

  if (!VAR_15)
    {


      VAR_18 &= ~VAR_6;
      if (VAR_18 == VAR_2)
 VAR_18 = VAR_3;
      else if (VAR_18 == VAR_4)
 VAR_18 = VAR_5;
    }
   else if (VAR_8)
     {


 bool VAR_19 = (VAR_16 & VAR_6) == 0
       && (VAR_16 != VAR_0)
       && (VAR_16 != VAR_4);
 bool VAR_20 = (VAR_17 & VAR_6) == 0
       && (VAR_17 != VAR_0)
       && (VAR_17 != VAR_4);
 bool VAR_21 = (VAR_18 & VAR_6) == 0
      && (VAR_18 != VAR_0)
      && (VAR_18 != VAR_4);







        if ((VAR_9 == 129 && (VAR_16 & VAR_6))
            || (VAR_9 == 131 && !(VAR_16 & VAR_6)))
          VAR_20 = 0;



 if (VAR_20 && !VAR_19
     && (VAR_9 == 131 || VAR_9 == 129))
   return VAR_7;


 if ((VAR_19 || VAR_20) != VAR_21)
   return VAR_7;
      }

  if (VAR_18 == VAR_5)
    return FUNC_5 (1, VAR_12);
  else if (VAR_18 == VAR_1)
    return FUNC_5 (0, VAR_12);
  else
    return FUNC_6 (FUNC_4 (VAR_18),
   VAR_12, VAR_13, VAR_14);
}
