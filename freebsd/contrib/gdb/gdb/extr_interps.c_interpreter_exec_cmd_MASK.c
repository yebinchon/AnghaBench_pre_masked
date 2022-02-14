
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct interp {int dummy; } ;


 char** FUNC_0 (char*) ;
 struct interp* VAR_0 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct interp*,char*) ;
 struct interp* FUNC_3 (char*) ;
 int FUNC_4 (struct interp*) ;
 int FUNC_5 (struct interp*,int) ;

__attribute__((used)) static void
FUNC_6 (char *VAR_1, int VAR_2)
{
  struct interp *VAR_3, *VAR_4;
  char **VAR_5 = ((void*)0);
  char **VAR_6 = ((void*)0);
  unsigned int VAR_7;
  unsigned int VAR_8;
  int VAR_9, VAR_10;

  VAR_5 = FUNC_0 (VAR_1);
  if (VAR_5 == ((void*)0))
    {
      FUNC_1 ("unable to parse arguments");
    }

  VAR_7 = 0;
  if (VAR_5 != ((void*)0))
    {
      for (VAR_6 = VAR_5; *VAR_6 != ((void*)0); VAR_6++)
 {
   VAR_7++;
 }
    }

  if (VAR_7 < 2)
    FUNC_1 ("usage: interpreter-exec <interpreter> [ <command> ... ]");

  VAR_3 = VAR_0;

  VAR_4 = FUNC_3 (VAR_5[0]);
  if (VAR_4 == ((void*)0))
    FUNC_1 ("Could not find interpreter \"%s\".", VAR_5[0]);


  VAR_9 = FUNC_5 (VAR_3, 1);
  VAR_10 = FUNC_5 (VAR_4, 1);

  if (!FUNC_4 (VAR_4))
    FUNC_1 ("Could not switch to interpreter \"%s\".", VAR_5[0]);

  for (VAR_8 = 1; VAR_8 < VAR_7; VAR_8++)
    {
      if (!FUNC_2 (VAR_4, VAR_5[VAR_8]))
 {
   FUNC_4 (VAR_3);
   FUNC_5 (VAR_4, VAR_9);
   FUNC_1 ("error in command: \"%s\".", VAR_5[VAR_8]);
   break;
 }
    }

  FUNC_4 (VAR_3);
  FUNC_5 (VAR_4, VAR_10);
  FUNC_5 (VAR_3, VAR_9);
}
