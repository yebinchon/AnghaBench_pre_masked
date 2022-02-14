
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct elf_backend_data {int (* elf_backend_sym_is_global ) (int *,TYPE_1__*) ;} ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_5__ {int flags; } ;
typedef TYPE_1__ asymbol ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 struct elf_backend_data* FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_1__*) ;

__attribute__((used)) static bfd_boolean
FUNC_5 (bfd *VAR_2, asymbol *VAR_3)
{

  const struct elf_backend_data *VAR_4 = FUNC_3 (VAR_2);
  if (VAR_4->elf_backend_sym_is_global)
    return (*VAR_4->elf_backend_sym_is_global) (VAR_2, VAR_3);

  return ((VAR_3->flags & (VAR_0 | VAR_1)) != 0
   || FUNC_2 (FUNC_0 (VAR_3))
   || FUNC_1 (FUNC_0 (VAR_3)));
}
