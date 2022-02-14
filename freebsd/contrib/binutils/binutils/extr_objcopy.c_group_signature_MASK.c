
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct elf_backend_data {TYPE_1__* s; } ;
typedef int bfd ;
typedef int asymbol ;
struct TYPE_9__ {int * owner; } ;
typedef TYPE_2__ asection ;
struct TYPE_10__ {size_t sh_link; scalar_t__ sh_type; int sh_info; int sh_size; } ;
struct TYPE_11__ {TYPE_3__ this_hdr; } ;
struct TYPE_8__ {int sizeof_sym; } ;
typedef TYPE_3__ Elf_Internal_Shdr ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_1 ;
 TYPE_3__** FUNC_1 (int *) ;
 size_t FUNC_2 (int *) ;
 TYPE_5__* FUNC_3 (TYPE_2__*) ;
 struct elf_backend_data* FUNC_4 (int *) ;
 int ** VAR_2 ;

__attribute__((used)) static asymbol *
FUNC_5 (asection *VAR_3)
{
  bfd *VAR_4 = VAR_3->owner;
  Elf_Internal_Shdr *VAR_5;

  if (FUNC_0 (VAR_4) != VAR_1)
    return ((void*)0);

  VAR_5 = &FUNC_3 (VAR_3)->this_hdr;
  if (VAR_5->sh_link < FUNC_2 (VAR_4))
    {
      const struct elf_backend_data *VAR_6 = FUNC_4 (VAR_4);
      Elf_Internal_Shdr *VAR_7 = FUNC_1 (VAR_4) [VAR_5->sh_link];

      if (VAR_7->sh_type == VAR_0
   && VAR_5->sh_info < VAR_7->sh_size / VAR_6->s->sizeof_sym)
 return VAR_2[VAR_5->sh_info - 1];
    }
  return ((void*)0);
}
