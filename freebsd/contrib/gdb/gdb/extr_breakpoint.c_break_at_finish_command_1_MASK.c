
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symtabs_and_lines {int nelts; struct symtab_and_line* sals; } ;
struct symtab_and_line {int pc; } ;
struct symtab {int dummy; } ;
struct cleanup {int dummy; } ;
typedef int CORE_ADDR ;


 int FUNC_0 (char*,int,int,int *) ;
 struct symtabs_and_lines FUNC_1 (char**,int,struct symtab*,int ,char***,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct cleanup*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int ,char**,int *,int *) ;
 int FUNC_5 (scalar_t__) ;
 struct cleanup* FUNC_6 (int (*) (char*),struct symtab_and_line*) ;
 int FUNC_7 (int ) ;
 char* FUNC_8 (char*,char) ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*) ;
 scalar_t__ FUNC_13 (int) ;
 char* FUNC_14 (char*,int ,...) ;

__attribute__((used)) static void
FUNC_15 (char *VAR_2, int VAR_3, int VAR_4)
{
  char *VAR_5, *VAR_6, *VAR_7;
  CORE_ADDR VAR_8, VAR_9;
  struct symtabs_and_lines VAR_10;
  struct symtab_and_line VAR_11;
  struct cleanup *VAR_12;
  char *VAR_13 = ((void*)0);
  int VAR_14 = 0;
  int VAR_15, VAR_16 = 0;

  if (!VAR_2 ||
      (VAR_2[0] == 'i' && VAR_2[1] == 'f' && (VAR_2[2] == ' ' || VAR_2[2] == '\t')))
    {
      if (VAR_0)
 {
   if (VAR_1)
     {
       VAR_5 = FUNC_14 ("*0x%s",
     FUNC_7 (FUNC_5 (VAR_1)));
       if (VAR_2)
  VAR_16 = 1;
     }
   else
     FUNC_3 ("No selected frame.");
 }
      else
 FUNC_3 ("No default breakpoint address now.");
    }
  else
    {
      VAR_5 = (char *) FUNC_13 (FUNC_10 (VAR_2) + 1);
      FUNC_9 (VAR_5, VAR_2);
    }

  if (VAR_16)
    {
      VAR_13 = VAR_2;
      VAR_14 = FUNC_10 (VAR_2);
    }
  else if (VAR_2)
    {

      VAR_13 = FUNC_8 (VAR_2, ' ');
      if (VAR_13)
 {
   VAR_13++;
   VAR_14 = FUNC_10 (VAR_13);
 }
    }

  VAR_10.sals = ((void*)0);
  VAR_10.nelts = 0;

  VAR_7 = VAR_5;
  VAR_10 = FUNC_1 (&VAR_5, 1, (struct symtab *) ((void*)0), 0,
   (char ***) ((void*)0), ((void*)0));

  FUNC_12 (VAR_7);
  VAR_12 = FUNC_6 (FUNC_12, VAR_10.sals);
  for (VAR_15 = 0; (VAR_15 < VAR_10.nelts); VAR_15++)
    {
      VAR_11 = VAR_10.sals[VAR_15];
      if (FUNC_4 (VAR_11.pc, (char **) ((void*)0), &VAR_8, &VAR_9))
 {
   VAR_6;
   if (VAR_14)
     VAR_6 = FUNC_14 ("*0x%s %s", FUNC_7 (VAR_9),
           VAR_13);
   else
     VAR_6 = FUNC_14 ("*0x%s", FUNC_7 (VAR_9));
   FUNC_0 (VAR_6, VAR_3, VAR_4, ((void*)0));
   FUNC_12 (VAR_6);
 }
      else
 FUNC_3 ("No function contains the specified address");
    }
  if (VAR_10.nelts > 1)
    {
      FUNC_11 ("Multiple breakpoints were set.\n");
      FUNC_11 ("Use the \"delete\" command to delete unwanted breakpoints.");
    }
  FUNC_2 (VAR_12);
}
