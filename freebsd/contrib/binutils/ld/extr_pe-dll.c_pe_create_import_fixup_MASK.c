
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_17__ ;
typedef struct TYPE_20__ TYPE_16__ ;


struct bfd_symbol {char* name; } ;
struct bfd_link_hash_entry {scalar_t__ type; } ;
struct TYPE_22__ {int filename; } ;
typedef TYPE_1__ bfd ;
struct TYPE_23__ {int owner; } ;
typedef TYPE_2__ asection ;
struct TYPE_24__ {int address; struct bfd_symbol** sym_ptr_ptr; } ;
typedef TYPE_3__ arelent ;
struct TYPE_25__ {int flags; } ;
struct TYPE_21__ {int text_read_only; } ;
struct TYPE_20__ {scalar_t__ pei386_runtime_pseudo_reloc; int hash; } ;


 int VAR_0 ;
 char* FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*,int ,TYPE_16__*) ;
 scalar_t__ VAR_2 ;
 struct bfd_link_hash_entry* FUNC_3 (int ,char*,int ,int ,int) ;
 TYPE_17__ VAR_3 ;
 int FUNC_4 (char*,...) ;
 TYPE_16__ VAR_4 ;
 TYPE_1__* FUNC_5 (char const*,char*,char*,TYPE_5__*) ;
 char* FUNC_6 (TYPE_3__*) ;
 TYPE_1__* FUNC_7 (char const*,char*,int,TYPE_5__*) ;
 TYPE_1__* FUNC_8 (char const*,TYPE_5__*) ;
 TYPE_5__* VAR_5 ;
 TYPE_1__* FUNC_9 (TYPE_5__*) ;
 scalar_t__ VAR_6 ;
 int FUNC_10 (char*,char*,int) ;
 scalar_t__ VAR_7 ;
 int FUNC_11 (char*,char*,char const*) ;

void
FUNC_12 (arelent *VAR_8, asection *VAR_9, int VAR_10)
{
  char VAR_11[300];
  struct bfd_symbol *VAR_12 = *VAR_8->sym_ptr_ptr;
  struct bfd_link_hash_entry *VAR_13;
  const char *VAR_14 = VAR_12->name;
  char *VAR_15 = FUNC_6 (VAR_8);
  bfd *VAR_16;

  FUNC_11 (VAR_11, FUNC_0 ("_nm_thnk_%s"), VAR_14);

  VAR_13 = FUNC_3 (VAR_4.hash, VAR_11, 0, 0, 1);

  if (!VAR_13 || VAR_13->type != VAR_2)
    {
      bfd *VAR_17 = FUNC_8 (VAR_14, VAR_5);
      FUNC_2 (VAR_17, VAR_17->filename, &VAR_4);


      VAR_3.text_read_only = VAR_0;
      VAR_5->flags &= ~VAR_1;
    }

  if (VAR_10 == 0 || VAR_4.pei386_runtime_pseudo_reloc)
    {
      extern char * VAR_18;
      char * VAR_19 = VAR_18 ? VAR_18 : "unknown";

      VAR_16 = FUNC_5 (VAR_14, VAR_15, VAR_19, VAR_5);
      FUNC_2 (VAR_16, VAR_16->filename, &VAR_4);
    }

  if (VAR_10 != 0)
    {
      if (VAR_4.pei386_runtime_pseudo_reloc)
 {
   if (VAR_6)
     FUNC_10 ("creating runtime pseudo-reloc entry for %s (addend=%d)\n",
     VAR_15, VAR_10);
   VAR_16 = FUNC_7 (VAR_14, VAR_15, VAR_10, VAR_5);
   FUNC_2 (VAR_16, VAR_16->filename, &VAR_4);

   if (VAR_7 == 0)
     {
       VAR_16 = FUNC_9 (VAR_5);
       FUNC_2 (VAR_16, VAR_16->filename, &VAR_4);
     }
   VAR_7++;
 }
      else
 {
   FUNC_4 (FUNC_1("%C: variable '%T' can't be auto-imported. Please read the documentation for ld's --enable-auto-import for details.\n"),
   VAR_9->owner, VAR_9, VAR_8->address, VAR_12->name);
   FUNC_4 ("%X");
 }
    }
}
