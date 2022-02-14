
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct symtab {int dummy; } ;
struct symbol {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct value* FUNC_0 (struct value*,int,struct value**) ;
 int FUNC_1 (char*,char*) ;
 int * VAR_4 ;
 struct value* FUNC_2 (char*) ;
 scalar_t__ FUNC_3 () ;
 struct symbol* FUNC_4 (char*,int *,int ,int*,struct symtab**) ;
 int FUNC_5 (char*) ;
 struct value* FUNC_6 (int) ;
 int FUNC_7 (struct value*) ;
 struct value* FUNC_8 (int ,int) ;
 struct value* FUNC_9 (struct value*) ;
 int FUNC_10 (struct value*) ;
 struct value* FUNC_11 (struct symbol*,int *) ;
 int FUNC_12 (int ,char*,int) ;

__attribute__((used)) static struct value *
FUNC_13 (char *VAR_5)
{
  struct value *VAR_6[3];
  int VAR_7 = FUNC_5 (VAR_5);
  struct value *VAR_8;
  struct value *VAR_9;
  struct symbol *VAR_10;
  VAR_6[0] = FUNC_6 (VAR_7);
  VAR_6[1] = FUNC_8 (VAR_2, VAR_7);
  FUNC_12 (FUNC_7 (VAR_6[0]), VAR_5, VAR_7);

  if (FUNC_3 ()
      && (VAR_10 = FUNC_4 ("env",
          VAR_4,
          VAR_1, (int *) ((void*)0),
          (struct symtab **) ((void*)0))) != ((void*)0))
    VAR_6[2] = FUNC_11 (VAR_10, VAR_4);
  else

    VAR_6[2] = FUNC_8 (VAR_3, VAR_0);

  VAR_8 = FUNC_2 ("scm_lookup_cstr");
  VAR_9 = FUNC_0 (VAR_8, 3, VAR_6);
  if (!FUNC_10 (VAR_9))
    return FUNC_9 (VAR_9);

  VAR_10 = FUNC_4 (VAR_5,
         VAR_4,
         VAR_1, (int *) ((void*)0),
         (struct symtab **) ((void*)0));
  if (VAR_10)
    return FUNC_11 (VAR_10, ((void*)0));
  FUNC_1 ("No symbol \"%s\" in current context.", VAR_5);
}
