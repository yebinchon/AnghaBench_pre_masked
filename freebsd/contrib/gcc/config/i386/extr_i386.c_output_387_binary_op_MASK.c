
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;



 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_0 ;

 int VAR_1 ;


 scalar_t__ FUNC_3 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,scalar_t__) ;
 int FUNC_9 (int) ;
 int FUNC_10 () ;
 int FUNC_11 (char*,char const*) ;
 int FUNC_12 (char*,char const*) ;

const char *
FUNC_13 (rtx VAR_4, rtx *VAR_5)
{
  static char VAR_6[30];
  const char *VAR_7;
  const char *VAR_8;
  int VAR_9 = FUNC_5 (VAR_5[0]) || FUNC_5 (VAR_5[1]) || FUNC_5 (VAR_5[2]);
  switch (FUNC_0 (VAR_5[3]))
    {
    case 128:
      if (FUNC_2 (FUNC_1 (VAR_5[1])) == VAR_1
   || FUNC_2 (FUNC_1 (VAR_5[2])) == VAR_1)
 VAR_7 = "fiadd";
      else
 VAR_7 = "fadd";
      VAR_8 = "add";
      break;

    case 130:
      if (FUNC_2 (FUNC_1 (VAR_5[1])) == VAR_1
   || FUNC_2 (FUNC_1 (VAR_5[2])) == VAR_1)
 VAR_7 = "fisub";
      else
 VAR_7 = "fsub";
      VAR_8 = "sub";
      break;

    case 129:
      if (FUNC_2 (FUNC_1 (VAR_5[1])) == VAR_1
   || FUNC_2 (FUNC_1 (VAR_5[2])) == VAR_1)
 VAR_7 = "fimul";
      else
 VAR_7 = "fmul";
      VAR_8 = "mul";
      break;

    case 131:
      if (FUNC_2 (FUNC_1 (VAR_5[1])) == VAR_1
   || FUNC_2 (FUNC_1 (VAR_5[2])) == VAR_1)
 VAR_7 = "fidiv";
      else
 VAR_7 = "fdiv";
      VAR_8 = "div";
      break;

    default:
      FUNC_10 ();
    }

  if (VAR_9)
   {
      FUNC_12 (VAR_6, VAR_8);
      if (FUNC_1 (VAR_5[0]) == VAR_3)
 FUNC_11 (VAR_6, "ss\t{%2, %0|%0, %2}");
      else
 FUNC_11 (VAR_6, "sd\t{%2, %0|%0, %2}");
      return VAR_6;
   }
  FUNC_12 (VAR_6, VAR_7);

  switch (FUNC_0 (VAR_5[3]))
    {
    case 129:
    case 128:
      if (FUNC_4 (VAR_5[2]) && FUNC_3 (VAR_5[0]) == FUNC_3 (VAR_5[2]))
 {
   rtx VAR_10 = VAR_5[2];
   VAR_5[2] = VAR_5[1];
   VAR_5[1] = VAR_10;
 }



      if (FUNC_0 (VAR_5[2]) == VAR_0)
 {
   VAR_7 = "%z2\t%2";
   break;
 }

      if (FUNC_8 (VAR_4, VAR_2, FUNC_3 (VAR_5[2])))
 {
   if (FUNC_7 (VAR_5[0]))







     VAR_7 = "p\t{%0, %2|%2, %0}";
   else
     VAR_7 = "p\t{%2, %0|%0, %2}";
   break;
 }

      if (FUNC_7 (VAR_5[0]))
 VAR_7 = "\t{%y2, %0|%0, %y2}";
      else
 VAR_7 = "\t{%2, %0|%0, %2}";
      break;

    case 130:
    case 131:
      if (FUNC_0 (VAR_5[1]) == VAR_0)
 {
   VAR_7 = "r%z1\t%1";
   break;
 }

      if (FUNC_0 (VAR_5[2]) == VAR_0)
 {
   VAR_7 = "%z2\t%2";
   break;
 }

      if (FUNC_8 (VAR_4, VAR_2, FUNC_3 (VAR_5[2])))
 {
   if (FUNC_7 (VAR_5[0]))

     VAR_7 = "rp\t{%0, %2|%2, %0}";
   else
     VAR_7 = "p\t{%2, %0|%0, %2}";

   break;
 }

      if (FUNC_8 (VAR_4, VAR_2, FUNC_3 (VAR_5[1])))
 {






   if (FUNC_7 (VAR_5[0]))
     VAR_7 = "p\t{%0, %1|%1, %0}";
   else
     VAR_7 = "rp\t{%1, %0|%0, %1}";

   break;
 }

      if (FUNC_7 (VAR_5[0]))
 {
   if (FUNC_7 (VAR_5[1]))
     VAR_7 = "\t{%y2, %0|%0, %y2}";
   else
     VAR_7 = "r\t{%y1, %0|%0, %y1}";
   break;
 }
      else if (FUNC_7 (VAR_5[1]))
 {



   VAR_7 = "r\t{%1, %0|%0, %1}";

 }
      else
 {



   VAR_7 = "\t{%2, %0|%0, %2}";

 }
      break;

    default:
      FUNC_10 ();
    }

  FUNC_11 (VAR_6, VAR_7);
  return VAR_6;
}
