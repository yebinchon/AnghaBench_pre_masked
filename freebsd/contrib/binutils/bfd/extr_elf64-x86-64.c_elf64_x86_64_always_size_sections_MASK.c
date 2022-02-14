
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct elf_link_hash_entry {scalar_t__ type; int def_regular; int other; } ;
struct elf_backend_data {int (* elf_backend_hide_symbol ) (struct bfd_link_info*,struct elf_link_hash_entry*,int ) ;int collect; } ;
struct bfd_link_info {int dummy; } ;
struct bfd_link_hash_entry {int dummy; } ;
typedef int bfd_boolean ;
typedef int bfd ;
typedef int asection ;
struct TYPE_3__ {int * tls_sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bfd_link_info*,int *,char*,int ,int *,int ,int *,int ,int ,struct bfd_link_hash_entry**) ;
 TYPE_1__* FUNC_1 (struct bfd_link_info*) ;
 struct elf_link_hash_entry* FUNC_2 (TYPE_1__*,char*,int ,int ,int ) ;
 struct elf_backend_data* FUNC_3 (int *) ;
 int FUNC_4 (struct bfd_link_info*,struct elf_link_hash_entry*,int ) ;

__attribute__((used)) static bfd_boolean
FUNC_5 (bfd *VAR_5,
       struct bfd_link_info *VAR_6)
{
  asection *VAR_7 = FUNC_1 (VAR_6)->tls_sec;

  if (VAR_7)
    {
      struct elf_link_hash_entry *VAR_8;

      VAR_8 = FUNC_2 (FUNC_1 (VAR_6),
          "_TLS_MODULE_BASE_",
          VAR_1, VAR_1, VAR_1);

      if (VAR_8 && VAR_8->type == VAR_2)
 {
   struct bfd_link_hash_entry *VAR_9 = ((void*)0);
   const struct elf_backend_data *VAR_10
     = FUNC_3 (VAR_5);

   if (!(FUNC_0
  (VAR_6, VAR_5, "_TLS_MODULE_BASE_", VAR_0,
   VAR_7, 0, ((void*)0), VAR_1,
   VAR_10->collect, &VAR_9)))
     return VAR_1;
   VAR_8 = (struct elf_link_hash_entry *)VAR_9;
   VAR_8->def_regular = 1;
   VAR_8->other = VAR_3;
   (*VAR_10->elf_backend_hide_symbol) (VAR_6, VAR_8, VAR_4);
 }
    }

  return VAR_4;
}
