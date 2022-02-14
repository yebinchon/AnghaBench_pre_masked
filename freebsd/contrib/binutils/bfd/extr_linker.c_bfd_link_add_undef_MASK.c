
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bfd_link_hash_table {struct bfd_link_hash_entry* undefs_tail; struct bfd_link_hash_entry* undefs; } ;
struct TYPE_3__ {struct bfd_link_hash_entry* next; } ;
struct TYPE_4__ {TYPE_1__ undef; } ;
struct bfd_link_hash_entry {TYPE_2__ u; } ;


 int FUNC_0 (int ) ;

void
FUNC_1 (struct bfd_link_hash_table *VAR_0,
      struct bfd_link_hash_entry *VAR_1)
{
  FUNC_0 (VAR_1->u.undef.next == ((void*)0));
  if (VAR_0->undefs_tail != ((void*)0))
    VAR_0->undefs_tail->u.undef.next = VAR_1;
  if (VAR_0->undefs == ((void*)0))
    VAR_0->undefs = VAR_1;
  VAR_0->undefs_tail = VAR_1;
}
