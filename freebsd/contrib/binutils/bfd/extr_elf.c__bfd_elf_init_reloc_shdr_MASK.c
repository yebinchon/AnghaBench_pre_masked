
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct elf_backend_data {TYPE_1__* s; } ;
typedef int bfd_size_type ;
typedef scalar_t__ bfd_boolean ;
typedef int bfd ;
struct TYPE_7__ {int name; } ;
typedef TYPE_2__ asection ;
struct TYPE_8__ {unsigned int sh_name; int sh_addralign; scalar_t__ sh_offset; scalar_t__ sh_size; scalar_t__ sh_addr; scalar_t__ sh_flags; int sh_entsize; int sh_type; } ;
struct TYPE_6__ {int log_file_align; int sizeof_rel; int sizeof_rela; } ;
typedef TYPE_3__ Elf_Internal_Shdr ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ,char*,scalar_t__) ;
 char* FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 struct elf_backend_data* FUNC_3 (int *) ;
 int FUNC_4 (char*,char*,char*,int ) ;
 int FUNC_5 (int ) ;

bfd_boolean
FUNC_6 (bfd *VAR_4,
     Elf_Internal_Shdr *VAR_5,
     asection *VAR_6,
     bfd_boolean VAR_7)
{
  char *VAR_8;
  const struct elf_backend_data *VAR_9 = FUNC_3 (VAR_4);
  bfd_size_type VAR_10 = sizeof ".rela" + FUNC_5 (VAR_6->name);

  VAR_8 = FUNC_1 (VAR_4, VAR_10);
  if (VAR_8 == ((void*)0))
    return VAR_0;
  FUNC_4 (VAR_8, "%s%s", VAR_7 ? ".rela" : ".rel", VAR_6->name);
  VAR_5->sh_name =
    (unsigned int) FUNC_0 (FUNC_2 (VAR_4), VAR_8,
     VAR_0);
  if (VAR_5->sh_name == (unsigned int) -1)
    return VAR_0;
  VAR_5->sh_type = VAR_7 ? VAR_2 : VAR_1;
  VAR_5->sh_entsize = (VAR_7
    ? VAR_9->s->sizeof_rela
    : VAR_9->s->sizeof_rel);
  VAR_5->sh_addralign = 1 << VAR_9->s->log_file_align;
  VAR_5->sh_flags = 0;
  VAR_5->sh_addr = 0;
  VAR_5->sh_size = 0;
  VAR_5->sh_offset = 0;

  return VAR_3;
}
