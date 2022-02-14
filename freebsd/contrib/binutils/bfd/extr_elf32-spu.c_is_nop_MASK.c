
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int bfd_vma ;
typedef int bfd_boolean ;
struct TYPE_4__ {scalar_t__ size; int owner; } ;
typedef TYPE_1__ asection ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_1__*,unsigned char*,int ,int) ;

__attribute__((used)) static bfd_boolean
FUNC_1 (asection *VAR_2, bfd_vma VAR_3)
{
  unsigned char VAR_4[4];

  if (VAR_3 + 4 > VAR_2->size
      || !FUNC_0 (VAR_2->owner, VAR_2, VAR_4, VAR_3, 4))
    return VAR_0;
  if ((VAR_4[0] & 0xbf) == 0 && (VAR_4[1] & 0xe0) == 0x20)
    return VAR_1;
  if (VAR_4[0] == 0 && VAR_4[1] == 0 && VAR_4[2] == 0 && VAR_4[3] == 0)
    return VAR_1;
  return VAR_0;
}
