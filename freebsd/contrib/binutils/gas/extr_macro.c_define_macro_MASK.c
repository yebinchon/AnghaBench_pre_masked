
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_20__ {scalar_t__ len; char* ptr; } ;
typedef TYPE_1__ sb ;
struct TYPE_21__ {char* file; unsigned int line; char* name; TYPE_1__ sub; int formal_hash; scalar_t__ formals; scalar_t__ formal_count; } ;
typedef TYPE_2__ macro_entry ;
typedef int PTR ;


 char FUNC_0 (char) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,TYPE_1__*,int (*) (TYPE_1__*)) ;
 int FUNC_3 (TYPE_2__*,int,TYPE_1__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int,TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_6 (int ,char*) ;
 char* FUNC_7 (int ,char*,int ) ;
 int FUNC_8 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_9 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (int,TYPE_1__*) ;
 int FUNC_12 (int,TYPE_1__*) ;
 void* FUNC_13 (TYPE_1__*) ;
 scalar_t__ FUNC_14 (int) ;

const char *
FUNC_15 (int VAR_2, sb *VAR_3, sb *VAR_4,
       int (*VAR_5) (sb *),
       char *VAR_6, unsigned int VAR_7,
       const char **VAR_8)
{
  macro_entry *VAR_9;
  sb VAR_10;
  const char *VAR_11 = ((void*)0);

  VAR_9 = (macro_entry *) FUNC_14 (sizeof (macro_entry));
  FUNC_10 (&VAR_9->sub);
  FUNC_10 (&VAR_10);
  VAR_9->file = VAR_6;
  VAR_9->line = VAR_7;

  VAR_9->formal_count = 0;
  VAR_9->formals = 0;
  VAR_9->formal_hash = FUNC_8 ();

  VAR_2 = FUNC_12 (VAR_2, VAR_3);
  if (! FUNC_2 ("MACRO", "ENDM", &VAR_9->sub, VAR_5))
    VAR_11 = FUNC_1("unexpected end of file in macro `%s' definition");
  if (VAR_4 != ((void*)0) && VAR_4->len != 0)
    {
      FUNC_9 (&VAR_10, VAR_4);
      VAR_9->name = FUNC_13 (&VAR_10);
      if (VAR_2 < VAR_3->len && VAR_3->ptr[VAR_2] == '(')
 {

   VAR_2 = FUNC_3 (VAR_9, VAR_2 + 1, VAR_3);
   if (VAR_2 < VAR_3->len && VAR_3->ptr[VAR_2] == ')')
     VAR_2 = FUNC_12 (VAR_2 + 1, VAR_3);
   else if (!VAR_11)
     VAR_11 = FUNC_1("missing `)' after formals in macro definition `%s'");
 }
      else
 {

   VAR_2 = FUNC_3 (VAR_9, VAR_2, VAR_3);
 }
    }
  else
    {
      int VAR_12;

      VAR_2 = FUNC_5 (VAR_2, VAR_3, &VAR_10);
      VAR_9->name = FUNC_13 (&VAR_10);
      if (VAR_10.len == 0)
 VAR_11 = FUNC_1("Missing macro name");
      VAR_12 = FUNC_12 (VAR_2, VAR_3);
      VAR_2 = FUNC_11 (VAR_12, VAR_3);
      if (VAR_2 == VAR_12 || VAR_2 < VAR_3->len)
 VAR_2 = FUNC_3 (VAR_9, VAR_2, VAR_3);
      else
 VAR_2 = VAR_12;
    }
  if (!VAR_11 && VAR_2 < VAR_3->len)
    VAR_11 = FUNC_1("Bad parameter list for macro `%s'");


  for (VAR_2 = 0; VAR_2 < VAR_10.len; VAR_2++)
    VAR_10.ptr[VAR_2] = FUNC_0 (VAR_10.ptr[VAR_2]);
  if (FUNC_6 (VAR_1, VAR_9->name))
    VAR_11 = FUNC_1("Macro `%s' was already defined");
  if (!VAR_11)
    VAR_11 = FUNC_7 (VAR_1, VAR_9->name, (PTR) VAR_9);

  if (VAR_8 != ((void*)0))
    *VAR_8 = VAR_9->name;

  if (!VAR_11)
    VAR_0 = 1;
  else
    FUNC_4 (VAR_9);

  return VAR_11;
}
