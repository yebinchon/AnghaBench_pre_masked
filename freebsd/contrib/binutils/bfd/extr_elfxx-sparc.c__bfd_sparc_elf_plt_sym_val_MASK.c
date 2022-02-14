
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int bfd_vma ;
struct TYPE_5__ {int vma; int owner; } ;
typedef TYPE_1__ asection ;
struct TYPE_6__ {int address; } ;
typedef TYPE_2__ arelent ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

bfd_vma
FUNC_1 (bfd_vma VAR_3, const asection *VAR_4, const arelent *VAR_5)
{
  if (FUNC_0 (VAR_4->owner))
    {
      bfd_vma VAR_6;

      VAR_3 += VAR_1 / VAR_0;
      if (VAR_3 < VAR_2)
 return VAR_4->vma + VAR_3 * VAR_0;

      VAR_6 = (VAR_3 - VAR_2) % 160;
      VAR_3 -= VAR_6;
      return VAR_4->vma + VAR_3 * VAR_0 + VAR_6 * 4 * 6;
    }
  else
    return VAR_5->address;
}
