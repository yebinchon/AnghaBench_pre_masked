
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symtab {char* filename; int nlines; int * line_charpos; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 struct symtab* VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (char*,int,char*,int) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct symtab*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct symtab* VAR_8 ;
 scalar_t__ FUNC_8 (int,int ,int ) ;
 int FUNC_9 (struct symtab*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*,int ) ;
 int FUNC_12 (char*,int) ;
 int FUNC_13 (char*,char*,int,...) ;
 scalar_t__ FUNC_14 (char*) ;
 int FUNC_15 (int ,char*,int) ;
 int FUNC_16 (int ,char*,char*) ;
 scalar_t__ FUNC_17 (int ,int ) ;
 int FUNC_18 (int ,char*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_19 (int,int *) ;

__attribute__((used)) static void
FUNC_20 (struct symtab *VAR_11, int VAR_12, int VAR_13, int VAR_14)
{
  int VAR_15;
  int VAR_16;
  FILE *VAR_17;
  int VAR_18 = VAR_13 - VAR_12;


  VAR_3 = VAR_11;
  VAR_2 = VAR_12;
  VAR_5 = VAR_12;


  if (FUNC_17 (VAR_10, VAR_9))
    {

      if ((VAR_11 != VAR_8) || (!VAR_7))
 {
   VAR_8 = VAR_11;
   VAR_16 = FUNC_9 (VAR_11);
 }
      else
 {
   VAR_16 = VAR_7;
   VAR_14 = 1;
 }
    }
  else
    {
      VAR_16 = -1;
      VAR_14 = 1;
    }

  if (VAR_16 < 0)
    {
      VAR_7 = VAR_16;

      if (!VAR_14)
 {
   char *VAR_19 = FUNC_0 (FUNC_14 (VAR_11->filename) + 100);
   FUNC_13 (VAR_19, "%d\t%s", VAR_12, VAR_11->filename);
   FUNC_11 (VAR_19, VAR_4);
 }
      else
 FUNC_15 (VAR_10, "line", VAR_12);
      FUNC_18 (VAR_10, "\tin ");
      FUNC_16 (VAR_10, "file", VAR_11->filename);
      FUNC_18 (VAR_10, "\n");

      return;
    }

  VAR_7 = 0;

  if (VAR_11->line_charpos == 0)
    FUNC_7 (VAR_11, VAR_16);

  if (VAR_12 < 1 || VAR_12 > VAR_11->nlines)
    {
      FUNC_2 (VAR_16);
      FUNC_3 ("Line number %d out of range; %s has %d lines.",
      VAR_12, VAR_11->filename, VAR_11->nlines);
    }

  if (FUNC_8 (VAR_16, VAR_11->line_charpos[VAR_12 - 1], 0) < 0)
    {
      FUNC_2 (VAR_16);
      FUNC_10 (VAR_11->filename);
    }

  VAR_17 = FUNC_5 (VAR_16, VAR_1);
  FUNC_1 (VAR_17);

  while (VAR_18-- > 0)
    {
      char VAR_20[20];

      VAR_15 = FUNC_6 (VAR_17);
      if (VAR_15 == VAR_0)
 break;
      VAR_6 = VAR_2;
      FUNC_13 (VAR_20, "%d\t", VAR_2++);
      FUNC_18 (VAR_10, VAR_20);
      do
 {
   if (VAR_15 < 040 && VAR_15 != '\t' && VAR_15 != '\n' && VAR_15 != '\r')
     {
       FUNC_13 (VAR_20, "^%c", VAR_15 + 0100);
       FUNC_18 (VAR_10, VAR_20);
     }
   else if (VAR_15 == 0177)
     FUNC_18 (VAR_10, "^?");
   else
     {
       FUNC_13 (VAR_20, "%c", VAR_15);
       FUNC_18 (VAR_10, VAR_20);
     }
 }
      while (VAR_15 != '\n' && (VAR_15 = FUNC_6 (VAR_17)) >= 0);
    }

  FUNC_4 (VAR_17);
}
