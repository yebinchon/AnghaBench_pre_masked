
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ arch; } ;
typedef TYPE_1__ bfd_arch_info_type ;



__attribute__((used)) static const bfd_arch_info_type *
FUNC_0 (const bfd_arch_info_type *VAR_0, const bfd_arch_info_type *VAR_1)
{
  if (VAR_0->arch != VAR_1->arch)
    return ((void*)0);




  return VAR_0;
}
