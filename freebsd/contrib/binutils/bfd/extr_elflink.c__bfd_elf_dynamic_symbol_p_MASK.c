
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct elf_link_hash_table {int dynobj; } ;
struct TYPE_4__ {scalar_t__ link; } ;
struct TYPE_5__ {TYPE_1__ i; } ;
struct TYPE_6__ {scalar_t__ type; TYPE_2__ u; } ;
struct elf_link_hash_entry {int dynindx; int def_regular; int type; int other; scalar_t__ forced_local; TYPE_3__ root; } ;
struct elf_backend_data {int (* is_function_type ) (int ) ;} ;
struct bfd_link_info {scalar_t__ executable; } ;
typedef int bfd_boolean ;


 int FUNC_0 (int ) ;
 int VAR_0 ;



 scalar_t__ FUNC_1 (struct bfd_link_info*,struct elf_link_hash_entry*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct elf_link_hash_table* FUNC_2 (struct bfd_link_info*) ;
 struct elf_backend_data* FUNC_3 (int ) ;
 int FUNC_4 (struct elf_link_hash_table*) ;
 int FUNC_5 (int ) ;

bfd_boolean
FUNC_6 (struct elf_link_hash_entry *VAR_4,
      struct bfd_link_info *VAR_5,
      bfd_boolean VAR_6)
{
  bfd_boolean VAR_7;
  const struct elf_backend_data *VAR_8;
  struct elf_link_hash_table *VAR_9;

  if (VAR_4 == ((void*)0))
    return VAR_0;

  while (VAR_4->root.type == VAR_2
  || VAR_4->root.type == VAR_3)
    VAR_4 = (struct elf_link_hash_entry *) VAR_4->root.u.i.link;


  if (VAR_4->dynindx == -1)
    return VAR_0;
  if (VAR_4->forced_local)
    return VAR_0;



  VAR_7 = VAR_5->executable || FUNC_1 (VAR_5, VAR_4);

  switch (FUNC_0 (VAR_4->other))
    {
    case 129:
    case 130:
      return VAR_0;

    case 128:
      VAR_9 = FUNC_2 (VAR_5);
      if (!FUNC_4 (VAR_9))
 return VAR_0;

      VAR_8 = FUNC_3 (VAR_9->dynobj);




      if (!VAR_6 || !VAR_8->is_function_type (VAR_4->type))
 VAR_7 = VAR_1;
      break;

    default:
      break;
    }


  if (!VAR_4->def_regular)
    return VAR_1;



  return !VAR_7;
}
