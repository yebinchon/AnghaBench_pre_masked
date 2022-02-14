
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; scalar_t__ value; TYPE_2__* section; } ;
typedef TYPE_1__ asymbol ;
struct TYPE_4__ {int flags; scalar_t__ id; scalar_t__ vma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_2__* VAR_8 ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static int
FUNC_0 (const void *VAR_10, const void *VAR_11)
{
  const asymbol *VAR_12 = * (const asymbol **) VAR_10;
  const asymbol *VAR_13 = * (const asymbol **) VAR_11;


  if ((VAR_12->flags & VAR_3) && !(VAR_13->flags & VAR_3))
    return -1;
  if (!(VAR_12->flags & VAR_3) && (VAR_13->flags & VAR_3))
    return 1;


  if (VAR_12->section == VAR_8 && VAR_13->section != VAR_8)
    return -1;
  if (VAR_12->section != VAR_8 && VAR_13->section == VAR_8)
    return 1;


  if ((VAR_12->section->flags & (VAR_6 | VAR_5 | VAR_7))
      == (VAR_6 | VAR_5)
      && (VAR_13->section->flags & (VAR_6 | VAR_5 | VAR_7))
  != (VAR_6 | VAR_5))
    return -1;

  if ((VAR_12->section->flags & (VAR_6 | VAR_5 | VAR_7))
      != (VAR_6 | VAR_5)
      && (VAR_13->section->flags & (VAR_6 | VAR_5 | VAR_7))
  == (VAR_6 | VAR_5))
    return 1;

  if (VAR_9)
    {
      if (VAR_12->section->id < VAR_13->section->id)
 return -1;

      if (VAR_12->section->id > VAR_13->section->id)
 return 1;
    }

  if (VAR_12->value + VAR_12->section->vma < VAR_13->value + VAR_13->section->vma)
    return -1;

  if (VAR_12->value + VAR_12->section->vma > VAR_13->value + VAR_13->section->vma)
    return 1;



  if ((VAR_12->flags & VAR_2) != 0 && (VAR_13->flags & VAR_2) == 0)
    return -1;

  if ((VAR_12->flags & VAR_2) == 0 && (VAR_13->flags & VAR_2) != 0)
    return 1;

  if ((VAR_12->flags & VAR_1) != 0 && (VAR_13->flags & VAR_1) == 0)
    return -1;

  if ((VAR_12->flags & VAR_1) == 0 && (VAR_13->flags & VAR_1) != 0)
    return 1;

  if ((VAR_12->flags & VAR_4) == 0 && (VAR_13->flags & VAR_4) != 0)
    return -1;

  if ((VAR_12->flags & VAR_4) != 0 && (VAR_13->flags & VAR_4) == 0)
    return 1;

  if ((VAR_12->flags & VAR_0) != 0 && (VAR_13->flags & VAR_0) == 0)
    return -1;

  if ((VAR_12->flags & VAR_0) == 0 && (VAR_13->flags & VAR_0) != 0)
    return 1;

  return 0;
}
