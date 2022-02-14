
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct internal_scnhdr {int s_flags; int s_vaddr; int s_paddr; scalar_t__ s_nreloc; } ;
struct TYPE_11__ {int section_count; } ;
typedef TYPE_1__ bfd ;
struct TYPE_12__ {int lineno_count; int reloc_count; } ;
typedef TYPE_2__ asection ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;
 TYPE_2__* FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_3 (bfd *VAR_1, asection *VAR_2, void * VAR_3)
{
  struct internal_scnhdr *VAR_4 = (struct internal_scnhdr *) VAR_3;
  asection *VAR_5;

  if ((VAR_4->s_flags & VAR_0) == 0)
    return;

  VAR_5 = FUNC_2 (VAR_1, (int) VAR_4->s_nreloc);
  if (VAR_5 == ((void*)0))
    return;

  VAR_5->reloc_count = VAR_4->s_paddr;
  VAR_5->lineno_count = VAR_4->s_vaddr;

  if (!FUNC_1 (VAR_1, VAR_2))
    {
      FUNC_0 (VAR_1, VAR_2);
      --VAR_1->section_count;
    }
}
