
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* (* parse_operand ) (TYPE_1__*,int ,char const**,int *) ;} ;
typedef scalar_t__ CGEN_SYNTAX_CHAR_TYPE ;
typedef int CGEN_SYNTAX ;
typedef int CGEN_INSN ;
typedef int CGEN_FIELDS ;
typedef TYPE_1__* CGEN_CPU_DESC ;


 int FUNC_0 (TYPE_1__*) ;
 char* FUNC_1 (int const*) ;
 int * FUNC_2 (int const*) ;
 int FUNC_3 (scalar_t__ const) ;
 scalar_t__ FUNC_4 (scalar_t__ const) ;
 int FUNC_5 (scalar_t__ const) ;
 int FUNC_6 (scalar_t__ const) ;
 scalar_t__* FUNC_7 (int const*) ;
 scalar_t__ FUNC_8 (char const) ;
 scalar_t__ FUNC_9 (char const) ;
 char const* FUNC_10 (char*) ;
 int FUNC_11 () ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (char*,char const*,int,...) ;
 char* FUNC_14 (TYPE_1__*,int ,char const**,int *) ;

__attribute__((used)) static const char *
FUNC_15 (CGEN_CPU_DESC VAR_0,
     const CGEN_INSN *VAR_1,
     const char **VAR_2,
     CGEN_FIELDS *VAR_3)
{

  const CGEN_SYNTAX *VAR_4 = FUNC_2 (VAR_1);
  const char *VAR_5 = *VAR_2;
  const char *VAR_6;
  const char *VAR_7;
  const CGEN_SYNTAX_CHAR_TYPE * VAR_8;
  VAR_7 = FUNC_1 (VAR_1);
  while (*VAR_7 && FUNC_9 (*VAR_7) == FUNC_9 (*VAR_5))
    ++VAR_7, ++VAR_5;

  if (* VAR_7)
    return FUNC_10("unrecognized instruction");


  if (* VAR_5 && ! FUNC_8 (* VAR_5))
    return FUNC_10("unrecognized instruction");


  FUNC_0 (VAR_0);
  FUNC_12 (VAR_0);






  VAR_8 = FUNC_7 (VAR_4);


  if (! FUNC_6 (* VAR_8))
    FUNC_11 ();

  ++VAR_8;

  while (* VAR_8 != 0)
    {

      if (FUNC_4 (* VAR_8))
 {




   if (FUNC_9 (*VAR_5) == FUNC_9 (FUNC_3 (* VAR_8)))
     {




       ++ VAR_8;
       ++ VAR_5;
     }
   else if (*VAR_5)
     {

       static char VAR_9 [80];


       FUNC_13 (VAR_9, FUNC_10("syntax error (expected char `%c', found `%c')"),
         FUNC_3(*VAR_8), *VAR_5);
       return VAR_9;
     }
   else
     {

       static char VAR_10 [80];


       FUNC_13 (VAR_10, FUNC_10("syntax error (expected char `%c', found end of instruction)"),
         FUNC_3(*VAR_8));
       return VAR_10;
     }
   continue;
 }


      VAR_6 = VAR_0->parse_operand (VAR_0, FUNC_5 (*VAR_8),
       &VAR_5, VAR_3);
      if (VAR_6)
 return VAR_6;


      ++ VAR_8;
    }


  if (* VAR_8 == 0)
    {




      while (FUNC_8 (* VAR_5))
 ++ VAR_5;

      if (* VAR_5 != '\0')
 return FUNC_10("junk at end of line");

      return ((void*)0);
    }


  return FUNC_10("unrecognized instruction");
}
