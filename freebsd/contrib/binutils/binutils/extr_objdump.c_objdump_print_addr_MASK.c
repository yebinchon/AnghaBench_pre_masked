
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct objdump_disasm_info {int sec; int abfd; TYPE_1__* reloc; } ;
struct disassemble_info {scalar_t__ application_data; int stream; int (* fprintf_func ) (int ,char*) ;} ;
typedef int bfd_vma ;
typedef int bfd_boolean ;
typedef int asymbol ;
struct TYPE_2__ {int ** sym_ptr_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int * FUNC_3 (int ,struct disassemble_info*,int *) ;
 int FUNC_4 (int ,int ,int *,int ,struct disassemble_info*,int ) ;
 int FUNC_5 (int ,struct disassemble_info*,int ) ;
 int VAR_2 ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static void
FUNC_7 (bfd_vma VAR_3,
      struct disassemble_info *VAR_4,
      bfd_boolean VAR_5)
{
  struct objdump_disasm_info *VAR_6;
  asymbol *VAR_7 = ((void*)0);
  bfd_boolean VAR_8 = VAR_0;

  if (VAR_2 < 1)
    {
      (*VAR_4->fprintf_func) (VAR_4->stream, "0x");
      FUNC_5 (VAR_3, VAR_4, VAR_5);
      return;
    }

  VAR_6 = (struct objdump_disasm_info *) VAR_4->application_data;

  if (VAR_6->reloc != ((void*)0)
      && VAR_6->reloc->sym_ptr_ptr != ((void*)0)
      && * VAR_6->reloc->sym_ptr_ptr != ((void*)0))
    {
      VAR_7 = * VAR_6->reloc->sym_ptr_ptr;


      VAR_3 += FUNC_0 (VAR_7);

      if (FUNC_2 (FUNC_1 (VAR_7)))
 VAR_8 = VAR_1;
    }

  if (!VAR_8)
    VAR_7 = FUNC_3 (VAR_3, VAR_4, ((void*)0));

  FUNC_4 (VAR_6->abfd, VAR_6->sec, VAR_7, VAR_3, VAR_4,
          VAR_5);
}
