
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_13__ ;


typedef enum elf_ppc64_reloc_type { ____Placeholder_elf_ppc64_reloc_type } elf_ppc64_reloc_type ;
typedef scalar_t__ bfd_vma ;
typedef int bfd_size_type ;
typedef scalar_t__ bfd_signed_vma ;
typedef int bfd_reloc_status_type ;
typedef int bfd_byte ;
typedef scalar_t__ bfd_boolean ;
typedef int bfd ;
struct TYPE_21__ {TYPE_13__* section; scalar_t__ value; } ;
typedef TYPE_4__ asymbol ;
struct TYPE_22__ {TYPE_3__* output_section; scalar_t__ output_offset; } ;
typedef TYPE_5__ asection ;
struct TYPE_23__ {int address; scalar_t__ addend; TYPE_1__* howto; } ;
typedef TYPE_6__ arelent ;
struct TYPE_20__ {scalar_t__ vma; } ;
struct TYPE_19__ {scalar_t__ vma; } ;
struct TYPE_18__ {int type; } ;
struct TYPE_17__ {scalar_t__ output_offset; TYPE_2__* output_section; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,TYPE_6__*,TYPE_4__*,void*,TYPE_5__*,int *,char**) ;
 long FUNC_1 (int *,int *) ;
 int FUNC_2 (TYPE_13__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,long,int *) ;
 int FUNC_5 (int *,TYPE_6__*,TYPE_4__*,void*,TYPE_5__*,int *,char**) ;

__attribute__((used)) static bfd_reloc_status_type
FUNC_6 (bfd *VAR_3, arelent *VAR_4, asymbol *VAR_5,
    void *VAR_6, asection *VAR_7,
    bfd *VAR_8, char **VAR_9)
{
  long VAR_10;
  enum elf_ppc64_reloc_type VAR_11;
  bfd_size_type VAR_12;

  bfd_boolean VAR_13 = VAR_0;




  if (VAR_8 != ((void*)0))
    return FUNC_0 (VAR_3, VAR_4, VAR_5, VAR_6,
      VAR_7, VAR_8, VAR_9);

  VAR_12 = VAR_4->address * FUNC_3 (VAR_3);
  VAR_10 = FUNC_1 (VAR_3, (bfd_byte *) VAR_6 + VAR_12);
  VAR_10 &= ~(0x01 << 21);
  VAR_11 = VAR_4->howto->type;
  if (VAR_11 == VAR_1
      || VAR_11 == VAR_2)
    VAR_10 |= 0x01 << 21;

  if (VAR_13)
    {



      if ((VAR_10 & (0x14 << 21)) == (0x04 << 21))
 VAR_10 |= 0x02 << 21;
      else if ((VAR_10 & (0x14 << 21)) == (0x10 << 21))
 VAR_10 |= 0x08 << 21;
      else
 goto out;
    }
  else
    {
      bfd_vma VAR_14 = 0;
      bfd_vma VAR_15;

      if (!FUNC_2 (VAR_5->section))
 VAR_14 = VAR_5->value;
      VAR_14 += VAR_5->section->output_section->vma;
      VAR_14 += VAR_5->section->output_offset;
      VAR_14 += VAR_4->addend;

      VAR_15 = (VAR_4->address
       + VAR_7->output_offset
       + VAR_7->output_section->vma);


      if ((bfd_signed_vma) (VAR_14 - VAR_15) < 0)
 VAR_10 ^= 0x01 << 21;
    }
  FUNC_4 (VAR_3, VAR_10, (bfd_byte *) VAR_6 + VAR_12);
 out:
  return FUNC_5 (VAR_3, VAR_4, VAR_5, VAR_6,
     VAR_7, VAR_8, VAR_9);
}
