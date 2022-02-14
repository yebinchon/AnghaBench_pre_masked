
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; scalar_t__ i; scalar_t__* s; } ;
typedef TYPE_1__ obj_attribute ;
typedef int bfd_boolean ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bfd_boolean
FUNC_0 (obj_attribute *VAR_2)
{
  if ((VAR_2->type & 1) && VAR_2->i != 0)
    return VAR_0;
  if ((VAR_2->type & 2) && VAR_2->s && *VAR_2->s)
    return VAR_0;

  return VAR_1;
}
