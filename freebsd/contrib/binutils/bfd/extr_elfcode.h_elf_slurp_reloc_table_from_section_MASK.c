
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_5__ ;
typedef struct TYPE_32__ TYPE_4__ ;
typedef struct TYPE_31__ TYPE_3__ ;
typedef struct TYPE_30__ TYPE_2__ ;
typedef struct TYPE_29__ TYPE_26__ ;
typedef struct TYPE_28__ TYPE_25__ ;
typedef struct TYPE_27__ TYPE_1__ ;


struct elf_backend_data {int (* elf_info_to_howto_rel ) (TYPE_1__*,TYPE_3__*,TYPE_5__*) ;int (* elf_info_to_howto ) (TYPE_1__*,TYPE_3__*,TYPE_5__*) ;} ;
typedef unsigned int bfd_size_type ;
typedef int bfd_byte ;
typedef scalar_t__ bfd_boolean ;
struct TYPE_27__ {int flags; int filename; } ;
typedef TYPE_1__ bfd ;
typedef int asymbol ;
struct TYPE_30__ {int name; scalar_t__ vma; } ;
typedef TYPE_2__ asection ;
struct TYPE_31__ {int addend; int ** sym_ptr_ptr; scalar_t__ address; } ;
typedef TYPE_3__ arelent ;
struct TYPE_33__ {int r_addend; int r_info; scalar_t__ r_offset; } ;
struct TYPE_32__ {int sh_entsize; int sh_size; int sh_offset; } ;
struct TYPE_29__ {int ** symbol_ptr_ptr; } ;
struct TYPE_28__ {int ** symbol_ptr_ptr; } ;
typedef TYPE_4__ Elf_Internal_Shdr ;
typedef TYPE_5__ Elf_Internal_Rela ;
typedef int Elf_External_Rela ;
typedef int Elf_External_Rel ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ,int ,unsigned int,int) ;
 TYPE_26__ VAR_5 ;
 TYPE_25__* VAR_6 ;
 int FUNC_4 (void*,int ,TYPE_1__*) ;
 unsigned int FUNC_5 (TYPE_1__*) ;
 unsigned int FUNC_6 (TYPE_1__*) ;
 void* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (TYPE_1__*,int ,int ) ;
 int FUNC_9 (TYPE_1__*,int *,TYPE_5__*) ;
 int FUNC_10 (TYPE_1__*,int *,TYPE_5__*) ;
 int FUNC_11 (void*) ;
 struct elf_backend_data* FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (int ,int ,int ,unsigned int,int) ;
 int FUNC_14 (TYPE_1__*,TYPE_3__*,TYPE_5__*) ;
 int FUNC_15 (TYPE_1__*,TYPE_3__*,TYPE_5__*) ;

__attribute__((used)) static bfd_boolean
FUNC_16 (bfd *VAR_7,
        asection *VAR_8,
        Elf_Internal_Shdr *VAR_9,
        bfd_size_type VAR_10,
        arelent *VAR_11,
        asymbol **VAR_12,
        bfd_boolean VAR_13)
{
  const struct elf_backend_data * const VAR_14 = FUNC_12 (VAR_7);
  void *VAR_15 = ((void*)0);
  bfd_byte *VAR_16;
  arelent *VAR_17;
  unsigned int VAR_18;
  int VAR_19;
  unsigned int VAR_20;

  VAR_15 = FUNC_7 (VAR_9->sh_size);
  if (VAR_15 == ((void*)0))
    goto error_return;

  if (FUNC_8 (VAR_7, VAR_9->sh_offset, VAR_3) != 0
      || (FUNC_4 (VAR_15, VAR_9->sh_size, VAR_7)
   != VAR_9->sh_size))
    goto error_return;

  VAR_16 = VAR_15;

  VAR_19 = VAR_9->sh_entsize;
  FUNC_0 (VAR_19 == sizeof (Elf_External_Rel)
       || VAR_19 == sizeof (Elf_External_Rela));

  if (VAR_13)
    VAR_20 = FUNC_5 (VAR_7);
  else
    VAR_20 = FUNC_6 (VAR_7);

  for (VAR_18 = 0, VAR_17 = VAR_11;
       VAR_18 < VAR_10;
       VAR_18++, VAR_17++, VAR_16 += VAR_19)
    {
      Elf_Internal_Rela VAR_21;

      if (VAR_19 == sizeof (Elf_External_Rela))
 FUNC_10 (VAR_7, VAR_16, &VAR_21);
      else
 FUNC_9 (VAR_7, VAR_16, &VAR_21);





      if ((VAR_7->flags & (VAR_1 | VAR_0)) == 0 || VAR_13)
 VAR_17->address = VAR_21.r_offset;
      else
 VAR_17->address = VAR_21.r_offset - VAR_8->vma;

      if (FUNC_1 (VAR_21.r_info) == 0)
 VAR_17->sym_ptr_ptr = VAR_6->symbol_ptr_ptr;
      else if (FUNC_1 (VAR_21.r_info) > VAR_20)
 {
   FUNC_3)
     (FUNC_2("%s(%s): relocation %d has invalid symbol index %ld"),
      VAR_7->filename, VAR_8->name, VAR_18, FUNC_1 (VAR_21.r_info));
   VAR_17->sym_ptr_ptr = VAR_5.symbol_ptr_ptr;
 }
      else
 {
   asymbol **VAR_22;

   VAR_22 = VAR_12 + FUNC_1 (VAR_21.r_info) - 1;

   VAR_17->sym_ptr_ptr = VAR_22;
 }

      VAR_17->addend = VAR_21.r_addend;

      if ((VAR_19 == sizeof (Elf_External_Rela)
    && VAR_14->elf_info_to_howto != ((void*)0))
   || VAR_14->elf_info_to_howto_rel == ((void*)0))
 (*VAR_14->elf_info_to_howto) (VAR_7, VAR_17, &VAR_21);
      else
 (*VAR_14->elf_info_to_howto_rel) (VAR_7, VAR_17, &VAR_21);
    }

  if (VAR_15 != ((void*)0))
    FUNC_11 (VAR_15);

  return VAR_4;

 error_return:
  if (VAR_15 != ((void*)0))
    FUNC_11 (VAR_15);
  return VAR_2;
}
