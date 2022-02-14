
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int VAR_5 ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_10 (char*) ;
 scalar_t__ VAR_9 ;
 int FUNC_11 (int) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;

__attribute__((used)) static tree
FUNC_12 (tree VAR_15, tree VAR_16)
{
  enum tree_code VAR_17;
  enum tree_code VAR_18;


  if (VAR_15 == VAR_9)
    return VAR_16;
  if (VAR_16 == VAR_9)
    return VAR_15;

  if (FUNC_6 (VAR_15) != VAR_4)
    VAR_15 = FUNC_4 (VAR_15);

  if (FUNC_6 (VAR_16) != VAR_4)
    VAR_16 = FUNC_4 (VAR_16);

  if (FUNC_3 (VAR_15) != VAR_2)
    VAR_15 = FUNC_9 (VAR_15, VAR_2);

  if (FUNC_3 (VAR_16) != VAR_2)
    VAR_16 = FUNC_9 (VAR_16, VAR_2);



  if (VAR_15 == VAR_16) return VAR_15;

  VAR_17 = FUNC_1 (VAR_15);
  VAR_18 = FUNC_1 (VAR_16);

  FUNC_11 (VAR_17 == VAR_5 || VAR_17 == VAR_0
       || VAR_17 == VAR_3 || VAR_17 == VAR_1);
  FUNC_11 (VAR_18 == VAR_5 || VAR_18 == VAR_0
       || VAR_18 == VAR_3 || VAR_18 == VAR_1);




  if ((FUNC_0 (VAR_15) || FUNC_0 (VAR_16))
      && !(FUNC_0 (VAR_15) && FUNC_0 (VAR_16)))
    {
      if (VAR_17 == VAR_5 || VAR_18 == VAR_5)
 {
   FUNC_10 ("can%'t mix operands of decimal float and vector types");
   return VAR_9;
 }
      if (VAR_17 == VAR_0 || VAR_18 == VAR_0)
 {
   FUNC_10 ("can%'t mix operands of decimal float and complex types");
   return VAR_9;
 }
      if (VAR_17 == VAR_3 && VAR_18 == VAR_3)
 {
   FUNC_10 ("can%'t mix operands of decimal float and other float types");
   return VAR_9;
 }
    }




  if (VAR_17 == VAR_5)
    return VAR_15;

  if (VAR_18 == VAR_5)
    return VAR_16;




  if (VAR_17 == VAR_0 || VAR_18 == VAR_0)
    {
      tree VAR_19 = VAR_17 == VAR_0 ? FUNC_2 (VAR_15) : VAR_15;
      tree VAR_20 = VAR_18 == VAR_0 ? FUNC_2 (VAR_16) : VAR_16;
      tree VAR_21 = FUNC_12 (VAR_19, VAR_20);

      if (VAR_17 == VAR_0 && FUNC_2 (VAR_15) == VAR_21)
 return VAR_15;
      else if (VAR_18 == VAR_0 && FUNC_2 (VAR_16) == VAR_21)
 return VAR_16;
      else
 return FUNC_8 (VAR_21);
    }



  if (VAR_17 == VAR_3 && VAR_18 != VAR_3)
    return VAR_15;

  if (VAR_18 == VAR_3 && VAR_17 != VAR_3)
    return VAR_16;




  if (VAR_17 == VAR_3 && VAR_18 == VAR_3)
    {
      if (FUNC_4 (VAR_15) == VAR_6
   || FUNC_4 (VAR_16) == VAR_6)
 return VAR_6;
      else if (FUNC_4 (VAR_15) == VAR_8
        || FUNC_4 (VAR_16) == VAR_8)
 return VAR_8;
      else if (FUNC_4 (VAR_15) == VAR_7
        || FUNC_4 (VAR_16) == VAR_7)
 return VAR_7;
    }



  if (FUNC_5 (VAR_15) > FUNC_5 (VAR_16))
    return VAR_15;
  else if (FUNC_5 (VAR_16) > FUNC_5 (VAR_15))
    return VAR_16;





  if (FUNC_4 (VAR_15) == VAR_13
      || FUNC_4 (VAR_16) == VAR_13)
    return VAR_13;

  if (FUNC_4 (VAR_15) == VAR_12
      || FUNC_4 (VAR_16) == VAR_12)
    {
      if (FUNC_7 (VAR_15) || FUNC_7 (VAR_16))
 return VAR_13;
      else
 return VAR_12;
    }

  if (FUNC_4 (VAR_15) == VAR_14
      || FUNC_4 (VAR_16) == VAR_14)
    return VAR_14;

  if (FUNC_4 (VAR_15) == VAR_11
      || FUNC_4 (VAR_16) == VAR_11)
    {


      if (FUNC_7 (VAR_15) || FUNC_7 (VAR_16))
 return VAR_14;
      else
 return VAR_11;
    }


  if (FUNC_4 (VAR_15) == VAR_10
      || FUNC_4 (VAR_16) == VAR_10)
    return VAR_10;



  if (FUNC_7 (VAR_15))
    return VAR_15;
  else
    return VAR_16;
}
