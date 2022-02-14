
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct elf_backend_data {int dummy; } ;
typedef int bfd_vma ;
struct TYPE_5__ {scalar_t__ flavour; struct TYPE_5__ const* alternative_target; } ;
typedef TYPE_1__ const bfd_target ;


 scalar_t__ VAR_0 ;
 struct elf_backend_data* FUNC_0 (TYPE_1__ const*) ;

__attribute__((used)) static void
FUNC_1 (const bfd_target *VAR_1, bfd_vma VAR_2,
        int VAR_3, const bfd_target *VAR_4)
{
  if (VAR_1->flavour == VAR_0)
    {
      const struct elf_backend_data *VAR_5;

      VAR_5 = FUNC_0 (VAR_1);
      *((bfd_vma *) ((char *) VAR_5 + VAR_3)) = VAR_2;
    }

  if (VAR_1->alternative_target
      && VAR_1->alternative_target != VAR_4)
    FUNC_1 (VAR_1->alternative_target, VAR_2, VAR_3,
     VAR_4);
}
