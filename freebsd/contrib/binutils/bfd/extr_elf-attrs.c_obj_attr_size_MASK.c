
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int type; int i; scalar_t__ s; } ;
typedef TYPE_1__ obj_attribute ;
typedef scalar_t__ bfd_vma ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static bfd_vma
FUNC_3 (int VAR_0, obj_attribute *VAR_1)
{
  bfd_vma VAR_2;

  if (FUNC_0 (VAR_1))
    return 0;

  VAR_2 = FUNC_2 (VAR_0);
  if (VAR_1->type & 1)
    VAR_2 += FUNC_2 (VAR_1->i);
  if (VAR_1->type & 2)
    VAR_2 += FUNC_1 ((char *)VAR_1->s) + 1;
  return VAR_2;
}
