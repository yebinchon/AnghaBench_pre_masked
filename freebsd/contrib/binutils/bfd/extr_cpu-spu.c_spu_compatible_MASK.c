
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ arch; } ;
typedef TYPE_1__ bfd_arch_info_type ;


 int FUNC_0 (int) ;

 TYPE_1__ const* FUNC_1 (TYPE_1__ const*,TYPE_1__ const*) ;

__attribute__((used)) static const bfd_arch_info_type *
FUNC_2 (const bfd_arch_info_type *VAR_0, const bfd_arch_info_type *VAR_1)
{
  FUNC_0 (VAR_0->arch == 128);
  switch (VAR_1->arch)
    {
    default:
      return ((void*)0);
    case 128:
      return FUNC_1 (VAR_0, VAR_1);
    }

}
