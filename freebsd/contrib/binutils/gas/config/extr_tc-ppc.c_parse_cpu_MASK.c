
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 scalar_t__ FUNC_0 (char const*,char*) ;

__attribute__((used)) static int
FUNC_1 (const char *VAR_28)
{


  if (FUNC_0 (VAR_28, "pwrx") == 0 || FUNC_0 (VAR_28, "pwr2") == 0)
    VAR_27 = VAR_19 | VAR_20 | VAR_0;

  else if (FUNC_0 (VAR_28, "pwr") == 0)
    VAR_27 = VAR_19 | VAR_0;


  else if (FUNC_0 (VAR_28, "601") == 0)
    VAR_27 = (VAR_24 | VAR_13
        | VAR_3 | VAR_0);


  else if (FUNC_0 (VAR_28, "ppc") == 0
    || FUNC_0 (VAR_28, "ppc32") == 0
    || FUNC_0 (VAR_28, "603") == 0
    || FUNC_0 (VAR_28, "604") == 0)
    VAR_27 = VAR_24 | VAR_13 | VAR_0;

  else if (FUNC_0 (VAR_28, "403") == 0
    || FUNC_0 (VAR_28, "405") == 0)
    VAR_27 = (VAR_24 | VAR_13
        | VAR_1 | VAR_0);
  else if (FUNC_0 (VAR_28, "440") == 0)
    VAR_27 = (VAR_24 | VAR_8 | VAR_0
        | VAR_2 | VAR_17 | VAR_25);
  else if (FUNC_0 (VAR_28, "7400") == 0
    || FUNC_0 (VAR_28, "7410") == 0
    || FUNC_0 (VAR_28, "7450") == 0
    || FUNC_0 (VAR_28, "7455") == 0)
    VAR_27 = (VAR_24 | VAR_13
        | VAR_6 | VAR_0);
  else if (FUNC_0 (VAR_28, "e300") == 0)
    VAR_27 = (VAR_24 | VAR_13 | VAR_0
        | VAR_15);
  else if (FUNC_0 (VAR_28, "altivec") == 0)
    {
      if (VAR_27 == 0)
 VAR_27 = VAR_24 | VAR_13 | VAR_6;
      else
 VAR_27 |= VAR_6;
    }
  else if (FUNC_0 (VAR_28, "e500") == 0 || FUNC_0 (VAR_28, "e500x2") == 0)
    {
      VAR_27 = (VAR_24 | VAR_8 | VAR_26
   | VAR_17 | VAR_16 | VAR_10
   | VAR_18 | VAR_11
   | VAR_25);
    }
  else if (FUNC_0 (VAR_28, "spe") == 0)
    {
      if (VAR_27 == 0)
 VAR_27 = VAR_24 | VAR_26 | VAR_16;
      else
 VAR_27 |= VAR_26;
    }


  else if (FUNC_0 (VAR_28, "ppc64") == 0 || FUNC_0 (VAR_28, "620") == 0)
    {
      VAR_27 = VAR_24 | VAR_13 | VAR_4;
    }
  else if (FUNC_0 (VAR_28, "ppc64bridge") == 0)
    {
      VAR_27 = (VAR_24 | VAR_13
   | VAR_5 | VAR_4);
    }

  else if (FUNC_0 (VAR_28, "booke") == 0 || FUNC_0 (VAR_28, "booke32") == 0)
    {
      VAR_27 = VAR_24 | VAR_8 | VAR_0;
    }

  else if (FUNC_0 (VAR_28, "booke64") == 0)
    {
      VAR_27 = (VAR_24 | VAR_8
   | VAR_9 | VAR_4);
    }
  else if (FUNC_0 (VAR_28, "power4") == 0)
    {
      VAR_27 = (VAR_24 | VAR_13
   | VAR_4 | VAR_21);
    }
  else if (FUNC_0 (VAR_28, "power5") == 0)
    {
      VAR_27 = (VAR_24 | VAR_13
   | VAR_4 | VAR_21
   | VAR_22);
    }
  else if (FUNC_0 (VAR_28, "power6") == 0)
    {
      VAR_27 = (VAR_24 | VAR_13
   | VAR_4 | VAR_21
   | VAR_22 | VAR_23);
    }
  else if (FUNC_0 (VAR_28, "cell") == 0)
    {
      VAR_27 = (VAR_24 | VAR_13
   | VAR_4 | VAR_21
   | VAR_12);
    }



  else if (FUNC_0 (VAR_28, "com") == 0)
    VAR_27 = VAR_14 | VAR_0;

  else if (FUNC_0 (VAR_28, "any") == 0)
    VAR_27 |= VAR_7;
  else
    return 0;

  return 1;
}
