
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objfile {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ,char*) ;
 int FUNC_1 (char*,int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int ,int ,char*,struct objfile*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;

void
FUNC_3 (void)
{
  FUNC_1 ("variables", VAR_9,
  "All global and static variable names, or those matching REGEXP.");
  if (VAR_4)
    FUNC_0 ("whereis", VAR_3, VAR_9,
  "All global and static variable names, or those matching REGEXP.");

  FUNC_1 ("functions", VAR_5,
     "All function names, or those matching REGEXP.");
  FUNC_1 ("types", VAR_8,
     "All type names, or those matching REGEXP.");

  FUNC_1 ("sources", VAR_7,
     "Source files in the program.");

  FUNC_0 ("rbreak", VAR_2, VAR_6,
    "Set a breakpoint for all functions matching REGEXP.");

  if (VAR_10)
    {
      FUNC_0 ("lf", VAR_3, VAR_7, "Source files in the program");
      FUNC_0 ("lg", VAR_3, VAR_9,
  "All global and static variable names, or those matching REGEXP.");
    }


  VAR_1 = FUNC_2 (VAR_0, 0, 0,
      "<unknown type>", (struct objfile *) ((void*)0));
}
