
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef int pretty_printer ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_13 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 int FUNC_14 (int *,int ,int,int) ;
 int FUNC_15 (int *,scalar_t__,int) ;
 int FUNC_16 (int *,scalar_t__,int,int) ;
 int FUNC_17 (int *,scalar_t__,int,int,int) ;
 int FUNC_18 (int *,char) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *,char*) ;

__attribute__((used)) static void
FUNC_21 (pretty_printer *VAR_5, tree VAR_6, int VAR_7, int VAR_8)
{
  FUNC_8 (VAR_7);

  if (FUNC_9 (VAR_6) == VAR_3)
    FUNC_20 (VAR_5, "typedef ");

  if (FUNC_0 (FUNC_9 (VAR_6), VAR_2) && FUNC_6 (VAR_6))
    FUNC_20 (VAR_5, "register ");

  if (FUNC_10 (VAR_6) && FUNC_2 (VAR_6))
    FUNC_20 (VAR_5, "extern ");
  else if (FUNC_11 (VAR_6))
    FUNC_20 (VAR_5, "static ");


  if (FUNC_9 (FUNC_12 (VAR_6)) == VAR_0)
    {
      tree VAR_9;


      VAR_9 = FUNC_12 (VAR_6);
      while (FUNC_9 (FUNC_12 (VAR_9)) == VAR_0)
 VAR_9 = FUNC_12 (VAR_9);
      FUNC_17 (VAR_5, FUNC_12 (VAR_9), VAR_7, VAR_8, 0);


      FUNC_19 (VAR_5);
      FUNC_17 (VAR_5, VAR_6, VAR_7, VAR_8, 0);


      VAR_9 = FUNC_12 (VAR_6);
      while (FUNC_9 (VAR_9) == VAR_0)
 {
   FUNC_14 (VAR_5, FUNC_13 (VAR_9), VAR_7, VAR_8);
   VAR_9 = FUNC_12 (VAR_9);
 }
    }
  else if (FUNC_9 (VAR_6) == VAR_1)
    {
      FUNC_17 (VAR_5, FUNC_12 (FUNC_12 (VAR_6)), VAR_7, VAR_8, 0);
      FUNC_19 (VAR_5);
      FUNC_15 (VAR_5, VAR_6, VAR_8);
      FUNC_16 (VAR_5, FUNC_12 (VAR_6), VAR_7, VAR_8);
    }
  else
    {

      FUNC_17 (VAR_5, FUNC_12 (VAR_6), VAR_7, VAR_8, 0);


      FUNC_19 (VAR_5);
      FUNC_17 (VAR_5, VAR_6, VAR_7, VAR_8, 0);
    }

  if (FUNC_9 (VAR_6) == VAR_4 && FUNC_3 (VAR_6))
    {
      FUNC_20 (VAR_5, " __asm__ ");
      FUNC_18 (VAR_5, '(');
      FUNC_17 (VAR_5, FUNC_1 (VAR_6), VAR_7, VAR_8, 0);
      FUNC_18 (VAR_5, ')');
    }




  if (FUNC_9 (VAR_6) != VAR_1)
    {

      if (FUNC_5 (VAR_6))
 {
   FUNC_19 (VAR_5);
   FUNC_18 (VAR_5, '=');
   FUNC_19 (VAR_5);
   FUNC_17 (VAR_5, FUNC_5 (VAR_6), VAR_7, VAR_8, 0);
 }
    }

  if (FUNC_9 (VAR_6) == VAR_4 && FUNC_4 (VAR_6))
    {
      FUNC_20 (VAR_5, " [value-expr: ");
      FUNC_17 (VAR_5, FUNC_7 (VAR_6), VAR_7, VAR_8, 0);
      FUNC_18 (VAR_5, ']');
    }

  FUNC_18 (VAR_5, ';');
}
