
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct bfd_link_info {int dummy; } ;
typedef scalar_t__ bfd_vma ;
typedef int bfd_reloc_status_type ;
typedef void bfd_byte ;
typedef int bfd ;
typedef int asymbol ;
typedef int asection ;
struct TYPE_8__ {scalar_t__ addend; int ** sym_ptr_ptr; } ;
typedef TYPE_2__ arelent ;
struct TYPE_7__ {int section; scalar_t__ value; } ;
struct TYPE_9__ {TYPE_1__ symbol; int other; } ;
typedef TYPE_3__ aout_symbol_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_3__* FUNC_3 (int *) ;
 int FUNC_4 (int *,void*) ;
 int FUNC_5 (int *,scalar_t__,void*) ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (TYPE_2__*,struct bfd_link_info*,int *) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static bfd_reloc_status_type
FUNC_8 (bfd *VAR_3,
   struct bfd_link_info *VAR_4,
   arelent *VAR_5,
   void * VAR_6,
   void * VAR_7,
   asection *VAR_8)
{
  int VAR_9 = FUNC_4 (VAR_3, VAR_6);
  asymbol *VAR_10 = *(VAR_5->sym_ptr_ptr);
  aout_symbol_type *VAR_11 = FUNC_3 (VAR_10);
  bfd_vma VAR_12;

  VAR_12 = FUNC_6 (VAR_5, VAR_4, VAR_8);

  if (FUNC_2 (VAR_11->other))
    {
      aout_symbol_type *VAR_13 = VAR_11+1;
      int VAR_14 = FUNC_4 (VAR_3, (bfd_byte *) VAR_6-4);


      FUNC_0 (FUNC_1 (VAR_13->other));
      VAR_14 &= VAR_1;
      VAR_14 |= VAR_0;
      FUNC_5 (VAR_3, (bfd_vma) VAR_14, (bfd_byte *) VAR_7-4);
      VAR_11 = VAR_13;
      VAR_12 = (VAR_11->symbol.value
        + FUNC_7 (VAR_11->symbol.section));
    }

  VAR_9 += VAR_12 + VAR_5->addend;

  FUNC_5 (VAR_3, (bfd_vma) VAR_9, VAR_7);
  return VAR_2;
}
