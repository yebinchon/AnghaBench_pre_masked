
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elf_backend_data {scalar_t__ arch; scalar_t__ relocs_compatible; } ;
typedef int bfd_target ;
typedef int bfd_boolean ;


 int VAR_0 ;
 int VAR_1 ;
 struct elf_backend_data* FUNC_0 (int const*) ;

bfd_boolean
FUNC_1 (const bfd_target *VAR_2,
       const bfd_target *VAR_3)
{
  const struct elf_backend_data *VAR_4, *VAR_5;

  if (VAR_2 == VAR_3)
    return VAR_1;

  VAR_5 = FUNC_0 (VAR_2);
  VAR_4 = FUNC_0 (VAR_3);

  if (VAR_5->arch != VAR_4->arch)
    return VAR_0;


  return VAR_5->relocs_compatible == VAR_4->relocs_compatible;
}
