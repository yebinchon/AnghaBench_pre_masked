
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ppc_link_hash_table {int twiddled_syms; } ;
struct TYPE_8__ {char* string; } ;
struct TYPE_6__ {scalar_t__ link; } ;
struct TYPE_7__ {TYPE_1__ i; } ;
struct TYPE_9__ {scalar_t__ type; TYPE_3__ root; TYPE_2__ u; } ;
struct TYPE_10__ {int ref_regular; unsigned int other; TYPE_4__ root; } ;
struct ppc_link_hash_entry {int was_undefined; TYPE_5__ elf; } ;
struct bfd_link_info {int relocatable; } ;
typedef int bfd_boolean ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 struct ppc_link_hash_entry* FUNC_2 (struct ppc_link_hash_entry*,struct ppc_link_hash_table*) ;
 struct ppc_link_hash_entry* FUNC_3 (struct bfd_link_info*,struct ppc_link_hash_entry*) ;
 struct ppc_link_hash_table* FUNC_4 (struct bfd_link_info*) ;

__attribute__((used)) static bfd_boolean
FUNC_5 (struct ppc_link_hash_entry *VAR_8, struct bfd_link_info *VAR_9)
{
  struct ppc_link_hash_table *VAR_10;
  struct ppc_link_hash_entry *VAR_11;

  if (VAR_8->elf.root.type == VAR_4)
    return VAR_1;

  if (VAR_8->elf.root.type == VAR_7)
    VAR_8 = (struct ppc_link_hash_entry *) VAR_8->elf.root.u.i.link;

  if (VAR_8->elf.root.root.string[0] != '.')
    FUNC_1 ();

  VAR_10 = FUNC_4 (VAR_9);
  VAR_11 = FUNC_2 (VAR_8, VAR_10);
  if (VAR_11 == ((void*)0)
      && !VAR_9->relocatable
      && (VAR_8->elf.root.type == VAR_5
   || VAR_8->elf.root.type == VAR_6)
      && VAR_8->elf.ref_regular)
    {



      VAR_11 = FUNC_3 (VAR_9, VAR_8);
      if (VAR_11 == ((void*)0))
 return VAR_0;
      else
 VAR_11->elf.ref_regular = 1;
    }
  else if (VAR_11 != ((void*)0))
    {
      unsigned VAR_12 = FUNC_0 (VAR_8->elf.other) - 1;
      unsigned VAR_13 = FUNC_0 (VAR_11->elf.other) - 1;
      if (VAR_12 < VAR_13)
 VAR_11->elf.other += VAR_12 - VAR_13;
      else if (VAR_12 > VAR_13)
 VAR_8->elf.other += VAR_13 - VAR_12;

      if ((VAR_11->elf.root.type == VAR_2
    || VAR_11->elf.root.type == VAR_3)
   && VAR_8->elf.root.type == VAR_5)
 {
   VAR_8->elf.root.type = VAR_6;
   VAR_8->was_undefined = 1;
   VAR_10->twiddled_syms = 1;
 }
    }

  return VAR_1;
}
