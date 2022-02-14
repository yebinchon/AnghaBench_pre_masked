
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct bfd_link_info {int dummy; } ;
typedef int bfd_vma ;
typedef int bfd_reloc_status_type ;
typedef int bfd_byte ;
typedef scalar_t__ bfd_boolean ;
typedef int bfd ;
typedef int asymbol ;
typedef int asection ;
struct TYPE_8__ {int addend; int ** sym_ptr_ptr; } ;
typedef TYPE_2__ arelent ;
struct TYPE_7__ {int value; int flags; int * section; } ;
struct TYPE_9__ {int other; TYPE_1__ symbol; } ;
typedef TYPE_3__ aout_symbol_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 TYPE_3__* FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int,int *) ;
 int VAR_5 ;
 int FUNC_7 (TYPE_2__*,struct bfd_link_info*,int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static bfd_reloc_status_type
FUNC_9 (bfd *VAR_6,
  struct bfd_link_info *VAR_7,
  arelent *VAR_8,
  void * VAR_9,
  unsigned int VAR_10,
  unsigned int VAR_11,
  asection *VAR_12,
  bfd_boolean VAR_13)
{
  int VAR_14 = FUNC_5 (VAR_6, (bfd_byte *) VAR_9 + VAR_10);
  asymbol *VAR_15 = *(VAR_8->sym_ptr_ptr);
  aout_symbol_type *VAR_16 = FUNC_4 (VAR_15);
  bfd_vma VAR_17;

  VAR_17 = FUNC_7 (VAR_8, VAR_7, VAR_12);

  if (FUNC_3 (VAR_16->other))


    VAR_14 = VAR_4 | (VAR_16->other - 1);

  else if (FUNC_2 (VAR_16->other))
    {
      aout_symbol_type *VAR_18 = VAR_16+1;


      FUNC_0 (FUNC_1 (VAR_18->other));



      VAR_14 = VAR_0 | ((VAR_14
       + FUNC_8 (VAR_18->symbol.section)
       + VAR_18->symbol.value + VAR_8->addend
       - VAR_11
       - FUNC_8 (VAR_12))
      & VAR_1);
    }
  else if ((VAR_16->symbol.flags & VAR_2) != 0)
    {




      FUNC_0 (! VAR_13);
      FUNC_0 (VAR_16->symbol.section == VAR_12);
    }
  else
    VAR_14 = VAR_3 | (((VAR_14 & VAR_1)
      + VAR_17
      + VAR_8->addend
      - (VAR_13 ? VAR_11 : 0)
      - FUNC_8 (VAR_12))
     & VAR_1);

  FUNC_6 (VAR_6, (bfd_vma) VAR_14, (bfd_byte *) VAR_9 + VAR_11);
  return VAR_5;
}
