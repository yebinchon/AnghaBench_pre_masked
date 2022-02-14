
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_4__ {scalar_t__ sh_type; } ;
typedef TYPE_1__ Elf_Internal_Shdr ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,TYPE_1__*,char const*,int) ;

__attribute__((used)) static bfd_boolean
FUNC_1 (bfd *VAR_3,
    Elf_Internal_Shdr *VAR_4,
    const char *VAR_5,
    int VAR_6)
{
  if (VAR_4->sh_type != VAR_1)
    return VAR_0;

  if (! FUNC_0 (VAR_3, VAR_4, VAR_5, VAR_6))
    return VAR_0;

  return VAR_2;
}
