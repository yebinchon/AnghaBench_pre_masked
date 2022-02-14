
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct type {int dummy; } ;


 int FUNC_0 (struct value*,struct type*) ;
 scalar_t__ FUNC_1 (struct type*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct type*) ;
 int FUNC_3 (struct value*) ;
 int FUNC_4 (struct value*) ;
 scalar_t__ FUNC_5 (int) ;
 struct type* FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,int ,int) ;
 scalar_t__ FUNC_10 (struct type*,int ) ;
 int FUNC_11 (struct value*) ;
 struct value* FUNC_12 (char*,int) ;

struct value *
FUNC_13 (struct value *VAR_5, struct value *VAR_6)
{
  struct value *VAR_7;
  struct value *VAR_8;
  struct value *VAR_9 = ((void*)0);
  int VAR_10, VAR_11;
  int VAR_12, VAR_13;
  char *VAR_14;
  char VAR_15;
  struct type *VAR_16 = FUNC_6 (FUNC_4 (VAR_5));
  struct type *VAR_17 = FUNC_6 (FUNC_4 (VAR_6));

  FUNC_0 (VAR_5, VAR_16);
  FUNC_0 (VAR_6, VAR_17);







  if (FUNC_1 (VAR_17) == VAR_3)
    {
      struct type *VAR_18 = VAR_16;
      VAR_16 = VAR_18;
      VAR_18 = VAR_17;
      VAR_7 = VAR_6;
      VAR_8 = VAR_5;
    }
  else
    {
      VAR_7 = VAR_5;
      VAR_8 = VAR_6;
    }



  if (FUNC_1 (VAR_16) == VAR_3)
    {


      if (FUNC_1 (VAR_17) == VAR_4
   || FUNC_1 (VAR_17) == VAR_2)
 {
   VAR_12 = FUNC_8 (FUNC_11 (VAR_7));
   VAR_11 = FUNC_2 (VAR_17);
   VAR_14 = (char *) FUNC_5 (VAR_12 * VAR_11);
   if (FUNC_1 (VAR_17) == VAR_2)
     {
       VAR_15 = (char) FUNC_10 (VAR_17,
        FUNC_3 (VAR_8));
       for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++)
  {
    *(VAR_14 + VAR_13) = VAR_15;
  }
     }
   else
     {
       for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++)
  {
    FUNC_9 (VAR_14 + (VAR_13 * VAR_11), FUNC_3 (VAR_8),
     VAR_11);
  }
     }
   VAR_9 = FUNC_12 (VAR_14, VAR_12 * VAR_11);
 }
      else if (FUNC_1 (VAR_17) == VAR_0
        || FUNC_1 (VAR_17) == VAR_1)
 {
   FUNC_7 ("unimplemented support for bitstring/boolean repeats");
 }
      else
 {
   FUNC_7 ("can't repeat values of that type");
 }
    }
  else if (FUNC_1 (VAR_16) == VAR_4
    || FUNC_1 (VAR_16) == VAR_2)
    {

      if (FUNC_1 (VAR_17) != VAR_4
   && FUNC_1 (VAR_17) != VAR_2)
 {
   FUNC_7 ("Strings can only be concatenated with other strings.");
 }
      VAR_10 = FUNC_2 (VAR_16);
      VAR_11 = FUNC_2 (VAR_17);
      VAR_14 = (char *) FUNC_5 (VAR_10 + VAR_11);
      if (FUNC_1 (VAR_16) == VAR_2)
 {
   *VAR_14 = (char) FUNC_10 (VAR_16, FUNC_3 (VAR_7));
 }
      else
 {
   FUNC_9 (VAR_14, FUNC_3 (VAR_7), VAR_10);
 }
      if (FUNC_1 (VAR_17) == VAR_2)
 {
   *(VAR_14 + VAR_10) =
     (char) FUNC_10 (VAR_17, FUNC_3 (VAR_8));
 }
      else
 {
   FUNC_9 (VAR_14 + VAR_10, FUNC_3 (VAR_8), VAR_11);
 }
      VAR_9 = FUNC_12 (VAR_14, VAR_10 + VAR_11);
    }
  else if (FUNC_1 (VAR_16) == VAR_0
    || FUNC_1 (VAR_16) == VAR_1)
    {

      if (FUNC_1 (VAR_17) != VAR_0
   && FUNC_1 (VAR_17) != VAR_1)
 {
   FUNC_7 ("Bitstrings or booleans can only be concatenated with other bitstrings or booleans.");
 }
      FUNC_7 ("unimplemented support for bitstring/boolean concatenation.");
    }
  else
    {

      FUNC_7 ("illegal operands for concatenation.");
    }
  return (VAR_9);
}
