
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct bfd_link_info {int relocatable; } ;
struct TYPE_6__ {size_t section_count; } ;
typedef TYPE_1__ bfd ;


 size_t FUNC_0 (TYPE_1__*) ;
 size_t FUNC_1 (TYPE_1__*) ;
 size_t FUNC_2 (TYPE_1__*) ;

int
FUNC_3 (bfd *VAR_0, struct bfd_link_info *VAR_1)
{
  size_t VAR_2;

  if (!VAR_1->relocatable)
    VAR_2 = FUNC_1 (VAR_0) + FUNC_0 (VAR_0);
  else
    VAR_2 = FUNC_1 (VAR_0);

  VAR_2 += VAR_0->section_count * FUNC_2 (VAR_0);
  return VAR_2;
}
