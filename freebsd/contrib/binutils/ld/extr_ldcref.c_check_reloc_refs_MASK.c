
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_11__ ;


struct lang_nocrossref {char const* name; struct lang_nocrossref* next; } ;
struct check_refs_info {char* sym_name; TYPE_7__* defsec; int asymbols; scalar_t__ global; TYPE_1__* ncrs; } ;
typedef scalar_t__ bfd_boolean ;
typedef int bfd ;
struct TYPE_18__ {int owner; struct TYPE_18__* output_section; } ;
typedef TYPE_2__ asection ;
struct TYPE_19__ {TYPE_11__** sym_ptr_ptr; int address; } ;
typedef TYPE_3__ arelent ;
struct TYPE_20__ {TYPE_2__* output_section; } ;
struct TYPE_17__ {struct lang_nocrossref* list; } ;
struct TYPE_16__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 char const* FUNC_1 (TYPE_11__*) ;
 long FUNC_2 (int *,TYPE_2__*,TYPE_3__**,int ) ;
 long FUNC_3 (int *,TYPE_2__*) ;
 TYPE_7__* FUNC_4 (TYPE_11__*) ;
 char* FUNC_5 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_7__*) ;
 scalar_t__ FUNC_7 (TYPE_7__*) ;
 int FUNC_8 (int ,int *,...) ;
 int FUNC_9 (TYPE_3__**) ;
 scalar_t__ FUNC_10 (char const*,char const*) ;
 TYPE_3__** FUNC_11 (long) ;

__attribute__((used)) static void
FUNC_12 (bfd *VAR_4, asection *VAR_5, void *VAR_6)
{
  struct check_refs_info *VAR_7 = VAR_6;
  asection *VAR_8;
  const char *VAR_9;
  asection *VAR_10;
  const char *VAR_11;
  struct lang_nocrossref *VAR_12;
  const char *VAR_13;
  bfd_boolean VAR_14;
  long VAR_15;
  arelent **VAR_16;
  long VAR_17;
  arelent **VAR_18, **VAR_19;

  VAR_8 = VAR_5->output_section;
  VAR_9 = FUNC_5 (VAR_8->owner, VAR_8);

  VAR_10 = VAR_7->defsec->output_section;
  VAR_11 = FUNC_5 (VAR_10->owner, VAR_10);


  if (FUNC_10 (VAR_9, VAR_11) == 0)
    return;

  for (VAR_12 = VAR_7->ncrs->list; VAR_12 != ((void*)0); VAR_12 = VAR_12->next)
    if (FUNC_10 (VAR_9, VAR_12->name) == 0)
      break;

  if (VAR_12 == ((void*)0))
    return;
  VAR_13 = VAR_7->sym_name;
  VAR_14 = VAR_7->global;

  VAR_15 = FUNC_3 (VAR_4, VAR_5);
  if (VAR_15 < 0)
    FUNC_8 (FUNC_0("%B%F: could not read relocs: %E\n"), VAR_4);
  if (VAR_15 == 0)
    return;

  VAR_16 = FUNC_11 (VAR_15);
  VAR_17 = FUNC_2 (VAR_4, VAR_5, VAR_16, VAR_7->asymbols);
  if (VAR_17 < 0)
    FUNC_8 (FUNC_0("%B%F: could not read relocs: %E\n"), VAR_4);

  VAR_18 = VAR_16;
  VAR_19 = VAR_18 + VAR_17;
  for (; VAR_18 < VAR_19 && *VAR_18 != ((void*)0); VAR_18++)
    {
      arelent *VAR_20 = *VAR_18;

      if (VAR_20->sym_ptr_ptr != ((void*)0)
   && *VAR_20->sym_ptr_ptr != ((void*)0)
   && ((VAR_14
        && (FUNC_7 (FUNC_4 (*VAR_20->sym_ptr_ptr))
     || FUNC_6 (FUNC_4 (*VAR_20->sym_ptr_ptr))
     || ((*VAR_20->sym_ptr_ptr)->flags & (VAR_0
         | VAR_3)) != 0))
       || (!VAR_14
    && ((*VAR_20->sym_ptr_ptr)->flags & (VAR_1
        | VAR_2)) != 0
    && FUNC_4 (*VAR_20->sym_ptr_ptr) == VAR_7->defsec))
   && (VAR_13 != ((void*)0)
       ? FUNC_10 (FUNC_1 (*VAR_20->sym_ptr_ptr), VAR_13) == 0
       : ((*VAR_20->sym_ptr_ptr)->flags & VAR_2) != 0))
 {




   FUNC_8 (FUNC_0("%X%C: prohibited cross reference from %s to `%T' in %s\n"),
   VAR_4, VAR_5, VAR_20->address, VAR_9,
   FUNC_1 (*VAR_20->sym_ptr_ptr), VAR_11);
 }
    }

  FUNC_9 (VAR_16);
}
