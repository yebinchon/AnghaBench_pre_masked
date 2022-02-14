
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ operands; } ;


 char VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,...) ;
 TYPE_1__ VAR_2 ;
 unsigned int FUNC_4 (char*,int ) ;
 unsigned int FUNC_5 (char*) ;
 int FUNC_6 (char const*) ;
 scalar_t__ VAR_3 ;
 int FUNC_7 (char) ;
 scalar_t__ FUNC_8 (char) ;
 int FUNC_9 (char) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static char *
FUNC_10 (char *VAR_5, const char *VAR_6)
{
  char *VAR_7;


  unsigned int VAR_8 = 0;


  unsigned int VAR_9;

  while (*VAR_5 != VAR_0)
    {

      if (FUNC_8 (*VAR_5))
 ++VAR_5;
      if (!FUNC_7 (*VAR_5) && *VAR_5 != VAR_0)
 {
   FUNC_3 (FUNC_2("invalid character %s before operand %d"),
    FUNC_9 (*VAR_5),
    VAR_2.operands + 1);
   return ((void*)0);
 }
      VAR_7 = VAR_5;
      VAR_9 = 0;
      while (VAR_9 || *VAR_5 != ',')
 {
   if (*VAR_5 == VAR_0)
     {
       if (VAR_9)
  {
    if (!VAR_3)
      FUNC_3 (FUNC_2("unbalanced parenthesis in operand %d."),
       VAR_2.operands + 1);
    else
      FUNC_3 (FUNC_2("unbalanced brackets in operand %d."),
       VAR_2.operands + 1);
    return ((void*)0);
  }
       else
  break;
     }
   else if (!FUNC_7 (*VAR_5) && !FUNC_8 (*VAR_5))
     {
       FUNC_3 (FUNC_2("invalid character %s in operand %d"),
        FUNC_9 (*VAR_5),
        VAR_2.operands + 1);
       return ((void*)0);
     }
   if (!VAR_3)
     {
       if (*VAR_5 == '(')
  ++VAR_9;
       if (*VAR_5 == ')')
  --VAR_9;
     }
   else
     {
       if (*VAR_5 == '[')
  ++VAR_9;
       if (*VAR_5 == ']')
  --VAR_9;
     }
   VAR_5++;
 }
      if (VAR_5 != VAR_7)
 {
   unsigned int VAR_10;
   VAR_4 = VAR_2.operands++;
   if (VAR_2.operands > VAR_1)
     {
       FUNC_3 (FUNC_2("spurious operands; (%d operands/instruction max)"),
        VAR_1);
       return ((void*)0);
     }

   FUNC_0 (VAR_5);

   if (VAR_3)
     VAR_10 =
       FUNC_4 (VAR_7,
      FUNC_6 (VAR_6));
   else
     VAR_10 = FUNC_5 (VAR_7);

   FUNC_1 (VAR_5);
   if (!VAR_10)
     return ((void*)0);
 }
      else
 {
   if (VAR_8)
     {
     expecting_operand_after_comma:
       FUNC_3 (FUNC_2("expecting operand after ','; got nothing"));
       return ((void*)0);
     }
   if (*VAR_5 == ',')
     {
       FUNC_3 (FUNC_2("expecting operand before ','; got nothing"));
       return ((void*)0);
     }
 }


      if (*VAR_5 == ',')
 {
   if (*++VAR_5 == VAR_0)
     {

       goto expecting_operand_after_comma;
     }
   VAR_8 = 1;
 }
    }
  return VAR_5;
}
