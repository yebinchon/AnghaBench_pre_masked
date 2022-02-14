
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,int ) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__,scalar_t__) ;
 int FUNC_12 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_13 (int ,scalar_t__,scalar_t__,int ,int) ;
 int FUNC_14 (char*,scalar_t__) ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_15 (scalar_t__) ;
 int FUNC_16 (scalar_t__) ;
 scalar_t__ FUNC_17 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_10 ;
 int FUNC_18 (char*) ;

tree
FUNC_19 (tree VAR_11, tree VAR_12)
{
  tree VAR_13, VAR_14;
  tree VAR_15;
  tree VAR_16 = VAR_6;
  int VAR_17;
  tree VAR_18 = VAR_11;



  VAR_11 = FUNC_17 (VAR_11, VAR_12);



  if (FUNC_3 (VAR_11) == VAR_5
      && FUNC_5 (VAR_11) == FUNC_5 (FUNC_4 (VAR_11, 0)))
    VAR_11 = FUNC_4 (VAR_11, 0);

  if (FUNC_3 (VAR_11) == VAR_1)
    {
      VAR_16 = FUNC_2 (VAR_11);

      FUNC_16 (VAR_11);
      VAR_14 = VAR_11;


      if (VAR_10 && FUNC_1 (VAR_11))
 FUNC_18 ("ISO C++ forbids calling %<::main%> from within program");





      if (FUNC_0 (VAR_11))
 VAR_11 = FUNC_15 (VAR_11);
      else
 VAR_11 = FUNC_9 (VAR_11);
    }
  else
    {
      VAR_14 = VAR_6;

      VAR_11 = FUNC_9 (VAR_11);
    }

  if (VAR_11 == VAR_9)
    return VAR_9;

  VAR_13 = FUNC_5 (VAR_11);

  if (FUNC_8 (VAR_13))
    {
      FUNC_14 ("must use %<.*%> or %<->*%> to call pointer-to-member "
      "function in %<%E (...)%>",
      VAR_18);
      return VAR_9;
    }

  VAR_17 = (FUNC_3 (VAR_13) == VAR_7
        && FUNC_3 (FUNC_5 (VAR_13)) == VAR_4);


  if (!(((FUNC_3 (VAR_13) == VAR_7 || FUNC_3 (VAR_13) == VAR_0)
  && FUNC_3 (FUNC_5 (VAR_13)) == VAR_2)
 || VAR_17
 || FUNC_3 (VAR_11) == VAR_8))
    {
      FUNC_14 ("%qE cannot be used as a function", VAR_18);
      return VAR_9;
    }


  VAR_13 = FUNC_5 (VAR_13);





  VAR_15 = FUNC_13 (FUNC_6 (VAR_13),
          VAR_12, VAR_14, VAR_3,
          (FUNC_3 (FUNC_5 (VAR_11)) == VAR_0));

  if (VAR_15 == VAR_9)
    return VAR_9;




  FUNC_12 (FUNC_7 (VAR_13), VAR_15,
       FUNC_6 (VAR_13));

  if (FUNC_3 (FUNC_5 (VAR_11)) == VAR_0)
    return FUNC_10 (VAR_13, VAR_11, VAR_15);


  return FUNC_11 (VAR_11, VAR_15);
}
