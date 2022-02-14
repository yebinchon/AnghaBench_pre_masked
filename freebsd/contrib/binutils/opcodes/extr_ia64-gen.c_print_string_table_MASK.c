
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* s; } ;


 int FUNC_0 () ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,char*,char*) ;
 int FUNC_3 (char*,char*) ;
 TYPE_1__** VAR_0 ;
 int FUNC_4 (char*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_5 (void)
{
  int VAR_2;
  char VAR_3[80], VAR_4[80];
  int VAR_5 = 0;

  FUNC_1 ("static const char * const ia64_strings[] = {\n");
  VAR_3[0] = '\0';

  for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
    {
      int VAR_6;

      if (FUNC_4 (VAR_0[VAR_2]->s) > 75)
 FUNC_0 ();

      FUNC_2 (VAR_4, " \"%s\",", VAR_0[VAR_2]->s);
      VAR_6 = FUNC_4 (VAR_4);

      if ((VAR_5 + VAR_6) > 75)
 {
   FUNC_1 (" %s\n", VAR_3);
   VAR_3[0] = '\0';
   VAR_5 = 0;
 }
      FUNC_3 (VAR_3, VAR_4);
      VAR_5 += VAR_6;
    }

  if (VAR_5 > 0)
    FUNC_1 (" %s\n", VAR_3);

  FUNC_1 ("};\n\n");
}
