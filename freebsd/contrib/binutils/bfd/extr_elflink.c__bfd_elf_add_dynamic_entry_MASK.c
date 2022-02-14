
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct elf_link_hash_table {int dynobj; } ;
struct elf_backend_data {TYPE_2__* s; } ;
struct bfd_link_info {int dummy; } ;
typedef void* bfd_vma ;
typedef int bfd_size_type ;
typedef int bfd_byte ;
typedef int bfd_boolean ;
struct TYPE_9__ {int size; int * contents; } ;
typedef TYPE_3__ asection ;
struct TYPE_7__ {void* d_val; } ;
struct TYPE_10__ {TYPE_1__ d_un; void* d_tag; } ;
struct TYPE_8__ {int sizeof_dyn; int (* swap_dyn_out ) (int ,TYPE_4__*,int *) ;} ;
typedef TYPE_4__ Elf_Internal_Dyn ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_1 (int ,char*) ;
 int * FUNC_2 (int *,int) ;
 struct elf_link_hash_table* FUNC_3 (struct bfd_link_info*) ;
 struct elf_backend_data* FUNC_4 (int ) ;
 int FUNC_5 (struct elf_link_hash_table*) ;
 int FUNC_6 (int ,TYPE_4__*,int *) ;

bfd_boolean
FUNC_7 (struct bfd_link_info *VAR_2,
       bfd_vma VAR_3,
       bfd_vma VAR_4)
{
  struct elf_link_hash_table *VAR_5;
  const struct elf_backend_data *VAR_6;
  asection *VAR_7;
  bfd_size_type VAR_8;
  bfd_byte *VAR_9;
  Elf_Internal_Dyn VAR_10;

  VAR_5 = FUNC_3 (VAR_2);
  if (! FUNC_5 (VAR_5))
    return VAR_0;

  VAR_6 = FUNC_4 (VAR_5->dynobj);
  VAR_7 = FUNC_1 (VAR_5->dynobj, ".dynamic");
  FUNC_0 (VAR_7 != ((void*)0));

  VAR_8 = VAR_7->size + VAR_6->s->sizeof_dyn;
  VAR_9 = FUNC_2 (VAR_7->contents, VAR_8);
  if (VAR_9 == ((void*)0))
    return VAR_0;

  VAR_10.d_tag = VAR_3;
  VAR_10.d_un.d_val = VAR_4;
  VAR_6->s->swap_dyn_out (VAR_5->dynobj, &VAR_10, VAR_9 + VAR_7->size);

  VAR_7->size = VAR_8;
  VAR_7->contents = VAR_9;

  return VAR_1;
}
