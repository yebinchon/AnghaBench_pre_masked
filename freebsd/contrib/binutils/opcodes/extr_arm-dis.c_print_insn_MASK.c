
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct disassemble_info {int symtab_pos; int symtab_size; scalar_t__ section; int bytes_per_line; unsigned int bytes_per_chunk; int (* read_memory_func ) (int,int *,unsigned int,struct disassemble_info*) ;int flags; int (* memory_error_func ) (int,int,struct disassemble_info*) ;int display_endian; TYPE_8__** symbols; TYPE_8__** symtab; int * disassembler_options; } ;
typedef enum map_type { ____Placeholder_map_type } map_type ;
struct TYPE_11__ {int st_info; } ;
struct TYPE_15__ {TYPE_1__ internal_elf_sym; } ;
typedef TYPE_5__ elf_symbol_type ;
struct TYPE_16__ {TYPE_4__* native; } ;
typedef TYPE_6__ coff_symbol_type ;
typedef int bfd_vma ;
typedef int bfd_byte ;
typedef void* bfd_boolean ;
struct TYPE_17__ {scalar_t__ section; } ;
struct TYPE_13__ {scalar_t__ n_sclass; } ;
struct TYPE_12__ {TYPE_3__ syment; } ;
struct TYPE_14__ {TYPE_2__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned int FUNC_0 (int ) ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 void* VAR_14 ;
 scalar_t__ FUNC_1 (TYPE_8__*) ;
 int FUNC_2 (TYPE_8__*) ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 TYPE_6__* FUNC_3 (TYPE_8__*) ;
 int FUNC_4 (int,struct disassemble_info*,void*) ;
 scalar_t__ VAR_17 ;
 scalar_t__ FUNC_5 (struct disassemble_info*,int,int*) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 int FUNC_6 (int *) ;
 void FUNC_7 (int,struct disassemble_info*,long) ;
 void FUNC_8 (int,struct disassemble_info*,long) ;
 void FUNC_9 (int,struct disassemble_info*,long) ;
 void FUNC_10 (int,struct disassemble_info*,long) ;
 int FUNC_11 (int,int *,unsigned int,struct disassemble_info*) ;
 int FUNC_12 (int,int *,int,struct disassemble_info*) ;
 int FUNC_13 (int,int *,int,struct disassemble_info*) ;
 int FUNC_14 (int,int *,int,struct disassemble_info*) ;
 int FUNC_15 (int,int,struct disassemble_info*) ;

__attribute__((used)) static int
FUNC_16 (bfd_vma VAR_24, struct disassemble_info *VAR_25, bfd_boolean VAR_26)
{
  unsigned char VAR_27[4];
  long VAR_28;
  int VAR_29;
  int VAR_30 = VAR_7;
  int VAR_31 = VAR_7;
  unsigned int VAR_32 = 4;
  void (*VAR_33) (bfd_vma, struct disassemble_info *, long);
  bfd_boolean VAR_34 = VAR_7;

  if (VAR_25->disassembler_options)
    {
      FUNC_6 (VAR_25->disassembler_options);


      VAR_25->disassembler_options = ((void*)0);
    }



  if (VAR_25->symtab != ((void*)0)
      && FUNC_1 (*VAR_25->symtab) == VAR_16)
    {
      bfd_vma VAR_35;
      int VAR_36;
      int VAR_37 = -1;
      enum map_type VAR_38 = VAR_9;

      if (VAR_24 <= VAR_21)
 VAR_22 = -1;
      VAR_30 = (VAR_23 == VAR_11);
      VAR_34 = VAR_7;


      VAR_36 = VAR_25->symtab_pos + 1;
      if (VAR_36 < VAR_22)
 VAR_36 = VAR_22;


      for (; VAR_36 < VAR_25->symtab_size; VAR_36++)
 {
   VAR_35 = FUNC_2 (VAR_25->symtab[VAR_36]);
   if (VAR_35 > VAR_24)
     break;
   if ((VAR_25->section == ((void*)0)
        || VAR_25->section == VAR_25->symtab[VAR_36]->section)
       && FUNC_5 (VAR_25, VAR_36, &VAR_38))
     {
       VAR_37 = VAR_36;
       VAR_34 = VAR_14;
     }
 }

      if (!VAR_34)
 {
   VAR_36 = VAR_25->symtab_pos;
   if (VAR_36 < VAR_22 - 1)
     VAR_36 = VAR_22 - 1;



   for (; VAR_36 >= 0; VAR_36--)
     {
       if (FUNC_5 (VAR_25, VAR_36, &VAR_38))
  {
    VAR_37 = VAR_36;
    VAR_34 = VAR_14;
    break;
  }
     }
 }

      VAR_22 = VAR_37;
      VAR_23 = VAR_38;
      VAR_30 = (VAR_23 == VAR_11);
      VAR_31 = (VAR_23 == VAR_10);





      if (VAR_31)
 {
   VAR_32 = 4 - (VAR_24 & 3);
   for (VAR_36 = VAR_37 + 1; VAR_36 < VAR_25->symtab_size; VAR_36++)
     {
       VAR_35 = FUNC_2 (VAR_25->symtab[VAR_36]);
       if (VAR_35 > VAR_24)
  {
    if (VAR_35 - VAR_24 < VAR_32)
      VAR_32 = VAR_35 - VAR_24;
    break;
  }
     }



   if (VAR_32 == 3)
     VAR_32 = (VAR_24 & 1) ? 1 : 2;
 }
    }

  if (VAR_25->symbols != ((void*)0))
    {
      if (FUNC_1 (*VAR_25->symbols) == VAR_15)
 {
   coff_symbol_type * VAR_39;

   VAR_39 = FUNC_3 (*VAR_25->symbols);
   VAR_30 = ( VAR_39->native->u.syment.n_sclass == VAR_2
        || VAR_39->native->u.syment.n_sclass == VAR_5
        || VAR_39->native->u.syment.n_sclass == VAR_4
        || VAR_39->native->u.syment.n_sclass == VAR_3
        || VAR_39->native->u.syment.n_sclass == VAR_6);
 }
      else if (FUNC_1 (*VAR_25->symbols) == VAR_16
        && !VAR_34)
 {


   elf_symbol_type * VAR_40;
   unsigned int VAR_41;

   VAR_40 = *(elf_symbol_type **)(VAR_25->symbols);
   VAR_41 = FUNC_0 (VAR_40->internal_elf_sym.st_info);

   VAR_30 = (VAR_41 == VAR_13) || (VAR_41 == VAR_12);
 }
    }

  if (VAR_17)
    VAR_30 = VAR_14;

  VAR_25->display_endian = VAR_26 ? VAR_1 : VAR_0;
  VAR_25->bytes_per_line = 4;

  if (VAR_31)
    {
      int VAR_42;


      VAR_25->bytes_per_chunk = VAR_32;
      VAR_33 = FUNC_8;

      VAR_29 = VAR_25->read_memory_func (VAR_24, (bfd_byte *)VAR_27, VAR_32, VAR_25);
      VAR_28 = 0;
      if (VAR_26)
 for (VAR_42 = VAR_32 - 1; VAR_42 >= 0; VAR_42--)
   VAR_28 = VAR_27[VAR_42] | (VAR_28 << 8);
      else
 for (VAR_42 = 0; VAR_42 < (int) VAR_32; VAR_42++)
   VAR_28 = VAR_27[VAR_42] | (VAR_28 << 8);
    }
  else if (!VAR_30)
    {


      VAR_33 = FUNC_7;
      VAR_25->bytes_per_chunk = 4;
      VAR_32 = 4;

      VAR_29 = VAR_25->read_memory_func (VAR_24, (bfd_byte *)VAR_27, 4, VAR_25);
      if (VAR_26)
 VAR_28 = (VAR_27[0]) | (VAR_27[1] << 8) | (VAR_27[2] << 16) | (VAR_27[3] << 24);
      else
 VAR_28 = (VAR_27[3]) | (VAR_27[2] << 8) | (VAR_27[1] << 16) | (VAR_27[0] << 24);
    }
  else
    {




      VAR_33 = FUNC_9;
      VAR_25->bytes_per_chunk = 2;
      VAR_32 = 2;

      VAR_29 = VAR_25->read_memory_func (VAR_24, (bfd_byte *)VAR_27, 2, VAR_25);
      if (VAR_26)
 VAR_28 = (VAR_27[0]) | (VAR_27[1] << 8);
      else
 VAR_28 = (VAR_27[1]) | (VAR_27[0] << 8);

      if (!VAR_29)
 {


   if ((VAR_28 & 0xF800) == 0xF800
       || (VAR_28 & 0xF800) == 0xF000
       || (VAR_28 & 0xF800) == 0xE800)
     {
       VAR_29 = VAR_25->read_memory_func (VAR_24 + 2, (bfd_byte *)VAR_27, 2, VAR_25);
       if (VAR_26)
  VAR_28 = (VAR_27[0]) | (VAR_27[1] << 8) | (VAR_28 << 16);
       else
  VAR_28 = (VAR_27[1]) | (VAR_27[0] << 8) | (VAR_28 << 16);

       VAR_33 = FUNC_10;
       VAR_32 = 4;
     }
 }

      if (VAR_18 != VAR_24)
 FUNC_4(VAR_24, VAR_25, VAR_26);

      if (VAR_20)
 {
   if ((VAR_20 & 0xf) == 0x8)
     VAR_19 = 0;
   else
     VAR_19 = (VAR_20 & 0xe0)
    | ((VAR_20 & 0xf) << 1);
 }
    }

  if (VAR_29)
    {
      VAR_25->memory_error_func (VAR_29, VAR_24, VAR_25);
      return -1;
    }
  if (VAR_25->flags & VAR_8)





    VAR_24 = 0;

  VAR_33 (VAR_24, VAR_25, VAR_28);

  if (VAR_30)
    {
      VAR_20 = VAR_19;
      VAR_18 += VAR_32;
    }
  return VAR_32;
}
