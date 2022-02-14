
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppc_link_hash_table {int elf; struct ppc_link_hash_entry* tls_get_addr_fd; struct ppc_link_hash_entry* tls_get_addr; } ;
struct ppc_link_hash_entry {int dummy; } ;
struct bfd_link_info {int dummy; } ;
typedef int bfd ;
typedef int asection ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,struct bfd_link_info*) ;
 scalar_t__ FUNC_1 (int *,char*,int ,int ,int ) ;
 struct ppc_link_hash_table* FUNC_2 (struct bfd_link_info*) ;

asection *
FUNC_3 (bfd *VAR_2, struct bfd_link_info *VAR_3)
{
  struct ppc_link_hash_table *VAR_4;

  VAR_4 = FUNC_2 (VAR_3);
  VAR_4->tls_get_addr = ((struct ppc_link_hash_entry *)
   FUNC_1 (&VAR_4->elf, ".__tls_get_addr",
           VAR_0, VAR_0, VAR_1));
  VAR_4->tls_get_addr_fd = ((struct ppc_link_hash_entry *)
      FUNC_1 (&VAR_4->elf, "__tls_get_addr",
       VAR_0, VAR_0, VAR_1));
  return FUNC_0 (VAR_2, VAR_3);
}
