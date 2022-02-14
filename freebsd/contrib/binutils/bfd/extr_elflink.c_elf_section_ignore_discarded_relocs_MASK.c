
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct elf_backend_data {scalar_t__ (* elf_backend_ignore_discarded_relocs ) (TYPE_1__*) ;} ;
typedef int bfd_boolean ;
struct TYPE_4__ {int sec_info_type; int owner; } ;
typedef TYPE_1__ asection ;




 int VAR_0 ;
 int VAR_1 ;
 struct elf_backend_data* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static bfd_boolean
FUNC_2 (asection *VAR_2)
{
  const struct elf_backend_data *VAR_3;

  switch (VAR_2->sec_info_type)
    {
    case 128:
    case 129:
      return VAR_1;
    default:
      break;
    }

  VAR_3 = FUNC_0 (VAR_2->owner);
  if (VAR_3->elf_backend_ignore_discarded_relocs != ((void*)0)
      && (*VAR_3->elf_backend_ignore_discarded_relocs) (VAR_2))
    return VAR_1;

  return VAR_0;
}
