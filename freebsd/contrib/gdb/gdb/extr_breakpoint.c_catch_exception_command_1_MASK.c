
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symtab_and_line {int dummy; } ;
typedef enum exception_event_kind { ____Placeholder_exception_event_kind } exception_event_kind ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int,struct symtab_and_line*) ;
 char* FUNC_1 (char**) ;
 int FUNC_2 (char**) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int,char*,int,int) ;
 int FUNC_5 (char) ;
 struct symtab_and_line* FUNC_6 (int,int) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void
FUNC_8 (enum exception_event_kind VAR_2, char *VAR_3,
      int VAR_4, int VAR_5)
{
  char *VAR_6 = ((void*)0);
  struct symtab_and_line *VAR_7 = ((void*)0);

  FUNC_2 (&VAR_3);

  VAR_6 = FUNC_1 (&VAR_3);

  if ((*VAR_3 != '\0') && !FUNC_5 (*VAR_3))
    FUNC_3 ("Junk at end of arguments.");

  if ((VAR_2 != VAR_1) &&
      (VAR_2 != VAR_0))
    FUNC_3 ("Unsupported or unknown exception event; cannot catch it");

  if (FUNC_4 (VAR_4, VAR_6, VAR_2, VAR_5))
    return;


  VAR_7 = FUNC_6 (VAR_2, 1);

  if (VAR_7)
    {


      if (VAR_7 != (struct symtab_and_line *) -1)
 FUNC_0 (VAR_4, VAR_6, VAR_2, VAR_7);
      else
 return;
    }

  FUNC_7 ("Unsupported with this platform/compiler combination.");
}
