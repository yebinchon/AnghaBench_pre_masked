
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elf32_arm_link_hash_table {int plt_header_size; int plt_entry_size; void* srelbss; void* sdynbss; void* srelplt; void* splt; int srelplt2; scalar_t__ vxworks_p; int sgot; } ;
struct bfd_link_info {scalar_t__ shared; } ;
typedef int bfd_boolean ;
typedef int bfd ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 char* FUNC_1 (struct elf32_arm_link_hash_table*,char*) ;
 int VAR_1 ;
 int FUNC_2 (int *,struct bfd_link_info*) ;
 int FUNC_3 () ;
 void* FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,struct bfd_link_info*) ;
 struct elf32_arm_link_hash_table* FUNC_6 (struct bfd_link_info*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (int *,struct bfd_link_info*,int *) ;

__attribute__((used)) static bfd_boolean
FUNC_8 (bfd *VAR_5, struct bfd_link_info *VAR_6)
{
  struct elf32_arm_link_hash_table *VAR_7;

  VAR_7 = FUNC_6 (VAR_6);
  if (!VAR_7->sgot && !FUNC_5 (VAR_5, VAR_6))
    return VAR_0;

  if (!FUNC_2 (VAR_5, VAR_6))
    return VAR_0;

  VAR_7->splt = FUNC_4 (VAR_5, ".plt");
  VAR_7->srelplt = FUNC_4 (VAR_5,
        FUNC_1 (VAR_7, ".plt"));
  VAR_7->sdynbss = FUNC_4 (VAR_5, ".dynbss");
  if (!VAR_6->shared)
    VAR_7->srelbss = FUNC_4 (VAR_5,
          FUNC_1 (VAR_7, ".bss"));

  if (VAR_7->vxworks_p)
    {
      if (!FUNC_7 (VAR_5, VAR_6, &VAR_7->srelplt2))
 return VAR_0;

      if (VAR_6->shared)
 {
   VAR_7->plt_header_size = 0;
   VAR_7->plt_entry_size
     = 4 * FUNC_0 (VAR_4);
 }
      else
 {
   VAR_7->plt_header_size
     = 4 * FUNC_0 (VAR_2);
   VAR_7->plt_entry_size
     = 4 * FUNC_0 (VAR_3);
 }
    }

  if (!VAR_7->splt
      || !VAR_7->srelplt
      || !VAR_7->sdynbss
      || (!VAR_6->shared && !VAR_7->srelbss))
    FUNC_3 ();

  return VAR_1;
}
