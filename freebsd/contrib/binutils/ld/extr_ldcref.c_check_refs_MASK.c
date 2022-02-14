
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct lang_nocrossrefs {int dummy; } ;
struct check_refs_info {char const* sym_name; int ** asymbols; struct lang_nocrossrefs* ncrs; int * defsec; int global; } ;
struct TYPE_8__ {long symbol_count; int ** asymbols; } ;
typedef TYPE_1__ lang_input_statement_type ;
typedef int bfd_boolean ;
struct TYPE_9__ {TYPE_1__* usrdata; } ;
typedef TYPE_2__ bfd ;
typedef int asymbol ;
typedef int asection ;


 int FUNC_0 (char*) ;
 long FUNC_1 (TYPE_2__*,int **) ;
 long FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int ,struct check_refs_info*) ;
 int VAR_0 ;
 int FUNC_4 (int ,TYPE_2__*) ;
 int FUNC_5 (int **) ;
 int ** FUNC_6 (long) ;

__attribute__((used)) static void
FUNC_7 (const char *VAR_1,
     bfd_boolean VAR_2,
     asection *VAR_3,
     bfd *VAR_4,
     struct lang_nocrossrefs *VAR_5)
{
  lang_input_statement_type *VAR_6;
  asymbol **VAR_7;
  struct check_refs_info VAR_8;







  VAR_6 = VAR_4->usrdata;
  if (VAR_6 != ((void*)0) && VAR_6->asymbols != ((void*)0))
    VAR_7 = VAR_6->asymbols;
  else
    {
      long VAR_9;
      long VAR_10;

      VAR_9 = FUNC_2 (VAR_4);
      if (VAR_9 < 0)
 FUNC_4 (FUNC_0("%B%F: could not read symbols; %E\n"), VAR_4);
      VAR_7 = FUNC_6 (VAR_9);
      VAR_10 = FUNC_1 (VAR_4, VAR_7);
      if (VAR_10 < 0)
 FUNC_4 (FUNC_0("%B%F: could not read symbols: %E\n"), VAR_4);
      if (VAR_6 != ((void*)0))
 {
   VAR_6->asymbols = VAR_7;
   VAR_6->symbol_count = VAR_10;
 }
    }

  VAR_8.sym_name = VAR_1;
  VAR_8.global = VAR_2;
  VAR_8.defsec = VAR_3;
  VAR_8.ncrs = VAR_5;
  VAR_8.asymbols = VAR_7;
  FUNC_3 (VAR_4, VAR_0, &VAR_8);

  if (VAR_6 == ((void*)0))
    FUNC_5 (VAR_7);
}
