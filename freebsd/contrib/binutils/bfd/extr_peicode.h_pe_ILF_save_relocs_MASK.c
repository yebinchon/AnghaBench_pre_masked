
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ string_table; scalar_t__ int_reltab; scalar_t__ relcount; int reltab; int abfd; } ;
typedef TYPE_1__ pe_ILF_vars ;
typedef int bfd_byte ;
typedef TYPE_2__* asection_ptr ;
struct TYPE_9__ {int keep_relocs; scalar_t__ relocs; } ;
struct TYPE_8__ {int flags; scalar_t__ reloc_count; int relocation; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 TYPE_5__* FUNC_2 (int ,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_3 (pe_ILF_vars * VAR_2,
      asection_ptr VAR_3)
{

  if (FUNC_2 (VAR_2->abfd, VAR_3) == ((void*)0))

    FUNC_1 ();

  FUNC_2 (VAR_2->abfd, VAR_3)->relocs = VAR_2->int_reltab;
  FUNC_2 (VAR_2->abfd, VAR_3)->keep_relocs = VAR_1;

  VAR_3->relocation = VAR_2->reltab;
  VAR_3->reloc_count = VAR_2->relcount;
  VAR_3->flags |= VAR_0;

  VAR_2->reltab += VAR_2->relcount;
  VAR_2->int_reltab += VAR_2->relcount;
  VAR_2->relcount = 0;

  FUNC_0 ((bfd_byte *) VAR_2->int_reltab < (bfd_byte *) VAR_2->string_table);
}
