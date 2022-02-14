
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int address; int addend; TYPE_4__* howto; } ;
struct mips_hi16 {void* data; struct mips_hi16* next; int * input_section; TYPE_1__ rel; } ;
typedef int bfd_vma ;
typedef scalar_t__ bfd_reloc_status_type ;
typedef int bfd_byte ;
typedef int bfd ;
typedef int asymbol ;
typedef int asection ;
typedef TYPE_1__ arelent ;
struct TYPE_6__ {scalar_t__ type; } ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (int *,int ,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,scalar_t__,int ,int *) ;
 int FUNC_2 (int *,scalar_t__,int ,int *) ;
 scalar_t__ FUNC_3 (int *,TYPE_1__*,int *,void*,int *,int *,char**) ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (struct mips_hi16*) ;
 struct mips_hi16* VAR_5 ;

bfd_reloc_status_type
FUNC_7 (bfd *VAR_6, arelent *VAR_7, asymbol *VAR_8,
     void *VAR_9, asection *VAR_10,
     bfd *VAR_11, char **VAR_12)
{
  bfd_vma VAR_13;
  bfd_byte *VAR_14 = (bfd_byte *) VAR_9 + VAR_7->address;

  if (VAR_7->address > FUNC_5 (VAR_6, VAR_10))
    return VAR_4;

  FUNC_2 (VAR_6, VAR_7->howto->type, VAR_0,
       VAR_14);
  VAR_13 = FUNC_4 (VAR_6, VAR_14);
  FUNC_1 (VAR_6, VAR_7->howto->type, VAR_0,
     VAR_14);

  while (VAR_5 != ((void*)0))
    {
      bfd_reloc_status_type VAR_15;
      struct mips_hi16 *VAR_16;

      VAR_16 = VAR_5;






      if (VAR_16->rel.howto->type == VAR_1)
 VAR_16->rel.howto = FUNC_0 (VAR_6, VAR_2, VAR_0);



      VAR_16->rel.addend += (VAR_13 + 0x8000) & 0xffff;

      VAR_15 = FUNC_3 (VAR_6, &VAR_16->rel, VAR_8, VAR_16->data,
      VAR_16->input_section, VAR_11,
      VAR_12);
      if (VAR_15 != VAR_3)
 return VAR_15;

      VAR_5 = VAR_16->next;
      FUNC_6 (VAR_16);
    }

  return FUNC_3 (VAR_6, VAR_7, VAR_8, VAR_9,
          VAR_10, VAR_11,
          VAR_12);
}
