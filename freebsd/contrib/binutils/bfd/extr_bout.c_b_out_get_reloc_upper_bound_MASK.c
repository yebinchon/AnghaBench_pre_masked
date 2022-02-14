
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct relocation_info {int dummy; } ;
typedef TYPE_1__* sec_ptr ;
typedef int bfd ;
typedef int arelent ;
struct TYPE_8__ {int a_drsize; int a_trsize; } ;
struct TYPE_7__ {int flags; int reloc_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 TYPE_5__* FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 (int *) ;

__attribute__((used)) static long
FUNC_6 (bfd *VAR_3, sec_ptr VAR_4)
{
  if (FUNC_0 (VAR_3) != VAR_2)
    {
      FUNC_1 (VAR_1);
      return -1;
    }

  if (VAR_4->flags & VAR_0)
    return sizeof (arelent *) * (VAR_4->reloc_count + 1);

  if (VAR_4 == FUNC_4 (VAR_3))
    return (sizeof (arelent *) *
     ((FUNC_2 (VAR_3)->a_drsize / sizeof (struct relocation_info))
      + 1));

  if (VAR_4 == FUNC_5 (VAR_3))
    return (sizeof (arelent *) *
     ((FUNC_2 (VAR_3)->a_trsize / sizeof (struct relocation_info))
      + 1));

  if (VAR_4 == FUNC_3 (VAR_3))
    return 0;

  FUNC_1 (VAR_1);
  return -1;
}
