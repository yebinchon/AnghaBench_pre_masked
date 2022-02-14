
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elf_link_hash_table {int dynobj; } ;
struct elf_link_hash_entry {int dynindx; int type; int other; scalar_t__ forced_local; int def_regular; } ;
struct elf_backend_data {int (* is_function_type ) (int ) ;} ;
struct bfd_link_info {scalar_t__ executable; } ;
typedef int bfd_boolean ;


 scalar_t__ FUNC_0 (struct elf_link_hash_entry*) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (struct bfd_link_info*,struct elf_link_hash_entry*) ;
 int VAR_3 ;
 struct elf_link_hash_table* FUNC_3 (struct bfd_link_info*) ;
 struct elf_backend_data* FUNC_4 (int ) ;
 int FUNC_5 (struct elf_link_hash_table*) ;
 int FUNC_6 (int ) ;

bfd_boolean
FUNC_7 (struct elf_link_hash_entry *VAR_4,
         struct bfd_link_info *VAR_5,
         bfd_boolean VAR_6)
{
  const struct elf_backend_data *VAR_7;
  struct elf_link_hash_table *VAR_8;


  if (VAR_4 == ((void*)0))
    return VAR_3;



  if (FUNC_0 (VAR_4))
                      ;


  else if (!VAR_4->def_regular)
    return VAR_0;


  if (VAR_4->forced_local)
    return VAR_3;


  if (VAR_4->dynindx == -1)
    return VAR_3;




  if (VAR_5->executable || FUNC_2 (VAR_5, VAR_4))
    return VAR_3;



  if (FUNC_1 (VAR_4->other) == VAR_1)
    return VAR_0;


  if (FUNC_1 (VAR_4->other) != VAR_2)
    return VAR_3;

  VAR_8 = FUNC_3 (VAR_5);
  if (!FUNC_5 (VAR_8))
    return VAR_3;

  VAR_7 = FUNC_4 (VAR_8->dynobj);


  if (!VAR_7->is_function_type (VAR_4->type))
    return VAR_3;




  return VAR_6;
}
