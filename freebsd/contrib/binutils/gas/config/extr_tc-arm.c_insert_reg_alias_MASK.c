
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reg_entry {int number; int type; char const* name; int * neon; scalar_t__ builtin; } ;
typedef int PTR ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 (int ,char*) ;
 struct reg_entry* FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (int ,char const*,int ) ;
 struct reg_entry* FUNC_5 (int) ;
 char* FUNC_6 (char*) ;

__attribute__((used)) static struct reg_entry *
FUNC_7 (char *VAR_2, int VAR_3, int VAR_4)
{
  struct reg_entry *VAR_5;
  const char *VAR_6;

  if ((VAR_5 = FUNC_3 (VAR_1, VAR_2)) != 0)
    {
      if (VAR_5->builtin)
 FUNC_2 (FUNC_0("ignoring attempt to redefine built-in register '%s'"), VAR_2);



      else if (VAR_5->number != VAR_3 || VAR_5->type != VAR_4)
 FUNC_2 (FUNC_0("ignoring redefinition of register alias '%s'"), VAR_2);

      return 0;
    }

  VAR_6 = FUNC_6 (VAR_2);
  VAR_5 = FUNC_5 (sizeof (struct reg_entry));

  VAR_5->name = VAR_6;
  VAR_5->number = VAR_3;
  VAR_5->type = VAR_4;
  VAR_5->builtin = VAR_0;
  VAR_5->neon = ((void*)0);

  if (FUNC_4 (VAR_1, VAR_6, (PTR) VAR_5))
    FUNC_1 ();

  return VAR_5;
}
