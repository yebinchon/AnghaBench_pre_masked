
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ string; } ;
struct TYPE_8__ {int * abfd; } ;
struct TYPE_9__ {TYPE_1__ undef; } ;
struct TYPE_11__ {TYPE_3__ root; TYPE_2__ u; } ;
struct TYPE_12__ {scalar_t__ non_elf; TYPE_4__ root; } ;
struct ppc_link_hash_entry {int fake; int is_func_descriptor; int is_func; struct ppc_link_hash_entry* oh; TYPE_5__ elf; } ;
struct bfd_link_info {int dummy; } ;
struct bfd_link_hash_entry {int dummy; } ;
typedef int bfd ;
struct TYPE_13__ {scalar_t__ value; int section; int flags; scalar_t__ name; } ;
typedef TYPE_6__ asymbol ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bfd_link_info*,int *,scalar_t__,int ,int ,scalar_t__,int *,int ,int ,struct bfd_link_hash_entry**) ;
 TYPE_6__* FUNC_1 (int *) ;
 int VAR_2 ;

__attribute__((used)) static struct ppc_link_hash_entry *
FUNC_2 (struct bfd_link_info *VAR_3,
   struct ppc_link_hash_entry *VAR_4)
{
  bfd *VAR_5;
  asymbol *VAR_6;
  struct bfd_link_hash_entry *VAR_7;
  struct ppc_link_hash_entry *VAR_8;

  VAR_5 = VAR_4->elf.root.u.undef.abfd;
  VAR_6 = FUNC_1 (VAR_5);
  VAR_6->name = VAR_4->elf.root.root.string + 1;
  VAR_6->section = VAR_2;
  VAR_6->value = 0;
  VAR_6->flags = VAR_0;

  VAR_7 = ((void*)0);
  if (!FUNC_0 (VAR_3, VAR_5, VAR_6->name,
      VAR_6->flags, VAR_6->section,
      VAR_6->value, ((void*)0), VAR_1, VAR_1,
      &VAR_7))
    return ((void*)0);

  VAR_8 = (struct ppc_link_hash_entry *) VAR_7;
  VAR_8->elf.non_elf = 0;
  VAR_8->fake = 1;
  VAR_8->is_func_descriptor = 1;
  VAR_8->oh = VAR_4;
  VAR_4->is_func = 1;
  VAR_4->oh = VAR_8;
  return VAR_8;
}
