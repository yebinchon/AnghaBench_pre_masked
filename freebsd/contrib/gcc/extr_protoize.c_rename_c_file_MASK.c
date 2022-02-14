
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* symbol; } ;
typedef TYPE_1__ hash_table_entry ;


 scalar_t__ FUNC_0 (int ,char const*) ;
 char* FUNC_1 (int) ;
 char const* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,int ,int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_3 (char const*,char* const) ;
 int FUNC_4 (int *,char* const) ;
 int FUNC_5 (char* const,char const*) ;
 int FUNC_6 (char const*) ;
 int VAR_4 ;
 int FUNC_7 (int) ;

__attribute__((used)) static void
FUNC_8 (const hash_table_entry *VAR_5)
{
  const char *VAR_6 = VAR_5->symbol;
  int VAR_7 = FUNC_6 (VAR_6) - 1;
  char *const VAR_8 = FUNC_1 (FUNC_6 (VAR_6)
         + FUNC_6 (VAR_0) + 1);







  if (VAR_6[VAR_7] != 'c' || VAR_6[VAR_7-1] != '.'
      || FUNC_0 (VAR_4, VAR_6))
    return;

  FUNC_5 (VAR_8, VAR_6);
  FUNC_5 (&VAR_8[VAR_7], VAR_0);

  if (FUNC_3 (VAR_6, VAR_8) == -1)
    {
      int VAR_9 = VAR_1;
      FUNC_2 ("%s: warning: can't rename file '%s' to '%s': %s\n",
       VAR_3, FUNC_4 (((void*)0), VAR_6),
       FUNC_4 (((void*)0), VAR_8), FUNC_7 (VAR_9));
      VAR_2++;
      return;
    }
}
