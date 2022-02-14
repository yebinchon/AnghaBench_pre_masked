
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int nlines; int filename; int * line_charpos; } ;
typedef int LONGEST ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int,int ) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (int,int ,int ) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (TYPE_1__*,int,int,int ) ;
 int FUNC_13 (char*) ;
 scalar_t__ FUNC_14 (char*) ;
 scalar_t__ FUNC_15 (char*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (int ,int ) ;
 char* FUNC_19 (int) ;
 char* FUNC_20 (char*,int) ;

__attribute__((used)) static void
FUNC_21 (char *VAR_7, int VAR_8)
{
  int VAR_9;
  int VAR_10;
  FILE *VAR_11;
  int VAR_12;
  char *VAR_13;

  VAR_12 = VAR_5 + 1;

  VAR_13 = (char *) FUNC_14 (VAR_7);
  if (VAR_13)
    FUNC_2 ("%s", VAR_13);

  if (VAR_4 == 0)
    FUNC_16 (0);

  VAR_10 = FUNC_10 (VAR_4);
  if (VAR_10 < 0)
    FUNC_11 (VAR_4->filename);

  if (VAR_4->line_charpos == 0)
    FUNC_5 (VAR_4, VAR_10);

  if (VAR_12 < 1 || VAR_12 > VAR_4->nlines)
    {
      FUNC_1 (VAR_10);
      FUNC_2 ("Expression not found");
    }

  if (FUNC_8 (VAR_10, VAR_4->line_charpos[VAR_12 - 1], 0) < 0)
    {
      FUNC_1 (VAR_10);
      FUNC_11 (VAR_4->filename);
    }

  VAR_11 = FUNC_4 (VAR_10, VAR_1);
  FUNC_0 (VAR_11);
  while (1)
    {
      static char *VAR_14 = ((void*)0);
      char *VAR_15;
      int VAR_16, VAR_17;

      VAR_16 = 256;
      VAR_14 = FUNC_19 (VAR_16);
      VAR_15 = VAR_14;

      VAR_9 = FUNC_6 (VAR_11);
      if (VAR_9 == VAR_0)
 break;
      do
 {
   *VAR_15++ = VAR_9;
   if (VAR_15 - VAR_14 == VAR_16)
     {
       VAR_17 = VAR_16 + VAR_16 / 2;
       VAR_14 = FUNC_20 (VAR_14, VAR_17);
       VAR_15 = VAR_14 + VAR_16;
       VAR_16 = VAR_17;
     }
 }
      while (VAR_9 != '\n' && (VAR_9 = FUNC_6 (VAR_11)) >= 0);
      *VAR_15 = 0;
      if (FUNC_15 (VAR_14) > 0)
 {

   FUNC_3 (VAR_11);
   FUNC_12 (VAR_4, VAR_12, VAR_12 + 1, 0);
   FUNC_17 (FUNC_7 ("_"),
      FUNC_18 (VAR_2,
            (LONGEST) VAR_12));
   VAR_3 = FUNC_9 (VAR_12 - VAR_6 / 2, 1);
   return;
 }
      VAR_12++;
    }

  FUNC_13 ("Expression not found\n");
  FUNC_3 (VAR_11);
}
