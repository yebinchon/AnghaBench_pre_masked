
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symtab {char* filename; } ;
struct symbol {int dummy; } ;
typedef scalar_t__ domain_enum ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct symbol*) ;
 scalar_t__ FUNC_1 (struct symbol*) ;
 char* FUNC_2 (struct symbol*) ;
 int FUNC_3 (struct symbol*) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (char*,int ) ;
 int VAR_4 ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (int ,char*,int ,int ) ;
 int FUNC_8 (int ,struct symbol*,int ) ;

__attribute__((used)) static void
FUNC_9 (domain_enum VAR_5, struct symtab *VAR_6, struct symbol *VAR_7,
     int VAR_8, char *VAR_9)
{
  if (VAR_9 == ((void*)0) || FUNC_6 (VAR_9, VAR_6->filename) != 0)
    {
      FUNC_4 ("\nFile ", VAR_4);
      FUNC_4 (VAR_6->filename, VAR_4);
      FUNC_4 (":\n", VAR_4);
    }

  if (VAR_5 != VAR_3 && VAR_8 == VAR_1)
    FUNC_5 ("static ");


  if (VAR_5 == VAR_3
      && FUNC_1 (VAR_7) != VAR_2)
    FUNC_8 (FUNC_3 (VAR_7), VAR_7, VAR_4);

  else if (VAR_5 < VAR_3 ||
    (VAR_5 == VAR_3 &&
     FUNC_1 (VAR_7) == VAR_2))
    {
      FUNC_7 (FUNC_3 (VAR_7),
    (FUNC_0 (VAR_7) == VAR_0
     ? "" : FUNC_2 (VAR_7)),
    VAR_4, 0);

      FUNC_5 (";\n");
    }
}
