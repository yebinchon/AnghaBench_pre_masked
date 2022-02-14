
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct partial_symbol {int dummy; } ;
struct partial_die_info {char* name; int tag; int has_children; int * locdesc; int has_type; int is_external; scalar_t__ lowpc; } ;
struct objfile {int static_psymbols; int global_psymbols; int section_offsets; } ;
struct dwarf2_cu {scalar_t__ language; struct objfile* objfile; } ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct objfile*) ;
 int VAR_4 ;
 int * FUNC_2 (struct partial_symbol const*) ;
 int VAR_5 ;
 struct partial_symbol* FUNC_3 (char*,scalar_t__,int ,int ,int *,int ,scalar_t__,scalar_t__,struct objfile*) ;
 char* FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *,struct objfile*) ;
 scalar_t__ FUNC_6 (int *,struct dwarf2_cu*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_7 (int,char const*) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char*,char const*) ;
 scalar_t__ FUNC_10 (char const*) ;

__attribute__((used)) static void
FUNC_11 (struct partial_die_info *VAR_7,
      struct dwarf2_cu *VAR_8, const char *VAR_9)
{
  struct objfile *VAR_10 = VAR_8->objfile;
  CORE_ADDR VAR_11 = 0;
  char *VAR_12 = VAR_7->name;
  const struct partial_symbol *VAR_13 = ((void*)0);
  CORE_ADDR VAR_14;

  VAR_14 = FUNC_0 (VAR_10->section_offsets, FUNC_1 (VAR_10));




  if (FUNC_7 (VAR_7->tag, VAR_9))
    {
      VAR_12 = FUNC_4 (FUNC_10 (VAR_7->name) + 2 + FUNC_10 (VAR_9) + 1);
      FUNC_9 (VAR_12, VAR_9);
      FUNC_8 (VAR_12, "::");
      FUNC_8 (VAR_12, VAR_7->name);
    }

  switch (VAR_7->tag)
    {
    case 132:
      if (VAR_7->is_external)
 {


   VAR_13 = FUNC_3 (VAR_12, FUNC_10 (VAR_12),
          VAR_5, VAR_0,
          &VAR_10->global_psymbols,
          0, VAR_7->lowpc + VAR_14,
          VAR_8->language, VAR_10);
 }
      else
 {


   VAR_13 = FUNC_3 (VAR_12, FUNC_10 (VAR_12),
          VAR_5, VAR_0,
          &VAR_10->static_psymbols,
          0, VAR_7->lowpc + VAR_14,
          VAR_8->language, VAR_10);
 }
      break;
    case 128:
      if (VAR_7->is_external)
 {
   if (VAR_7->locdesc)
     VAR_11 = FUNC_6 (VAR_7->locdesc, VAR_8);
   if (VAR_7->locdesc || VAR_7->has_type)
     VAR_13 = FUNC_3 (VAR_12, FUNC_10 (VAR_12),
     VAR_5, VAR_2,
     &VAR_10->global_psymbols,
     0, VAR_11 + VAR_14,
     VAR_8->language, VAR_10);
 }
      else
 {

   if (VAR_7->locdesc == ((void*)0))
     return;
   VAR_11 = FUNC_6 (VAR_7->locdesc, VAR_8);


   VAR_13 = FUNC_3 (VAR_12, FUNC_10 (VAR_12),
          VAR_5, VAR_2,
          &VAR_10->static_psymbols,
          0, VAR_11 + VAR_14,
          VAR_8->language, VAR_10);
 }
      break;
    case 130:
    case 137:
    case 131:
      FUNC_3 (VAR_12, FUNC_10 (VAR_12),
      VAR_5, VAR_3,
      &VAR_10->static_psymbols,
      0, (CORE_ADDR) 0, VAR_8->language, VAR_10);
      break;
    case 136:
    case 133:
    case 129:
    case 135:




      if (VAR_7->has_children == 0)
 return;
      FUNC_3 (VAR_12, FUNC_10 (VAR_12),
      VAR_4, VAR_3,
      VAR_8->language == VAR_6
      ? &VAR_10->global_psymbols
      : &VAR_10->static_psymbols,
      0, (CORE_ADDR) 0, VAR_8->language, VAR_10);

      if (VAR_8->language == VAR_6)
 {

   FUNC_3 (VAR_12, FUNC_10 (VAR_12),
          VAR_5, VAR_3,
          &VAR_10->global_psymbols,
          0, (CORE_ADDR) 0, VAR_8->language, VAR_10);
 }
      break;
    case 134:
      FUNC_3 (VAR_12, FUNC_10 (VAR_12),
      VAR_5, VAR_1,
      VAR_8->language == VAR_6
      ? &VAR_10->global_psymbols
      : &VAR_10->static_psymbols,
      0, (CORE_ADDR) 0, VAR_8->language, VAR_10);
      break;
    default:
      break;
    }







  if (VAR_8->language == VAR_6
      && VAR_9 == ((void*)0)
      && VAR_13 != ((void*)0)
      && FUNC_2 (VAR_13) != ((void*)0))
    FUNC_5 (FUNC_2 (VAR_13),
      VAR_10);
}
