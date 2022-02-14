
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bfd_link_hash_table {struct bfd_link_hash_entry* undefs_tail; struct bfd_link_hash_entry* undefs; } ;
struct TYPE_3__ {struct bfd_link_hash_entry* next; } ;
struct TYPE_4__ {TYPE_1__ undef; } ;
struct bfd_link_hash_entry {scalar_t__ type; TYPE_2__ u; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

void
FUNC_0 (struct bfd_link_hash_table *VAR_2)
{
  struct bfd_link_hash_entry **VAR_3;

  VAR_3 = &VAR_2->undefs;
  while (*VAR_3 != ((void*)0))
    {
      struct bfd_link_hash_entry *VAR_4 = *VAR_3;

      if (VAR_4->type == VAR_0
   || VAR_4->type == VAR_1)
 {
   *VAR_3 = VAR_4->u.undef.next;
   VAR_4->u.undef.next = ((void*)0);
   if (VAR_4 == VAR_2->undefs_tail)
     {
       if (VAR_3 == &VAR_2->undefs)
  VAR_2->undefs_tail = ((void*)0);
       else


  VAR_2->undefs_tail = (struct bfd_link_hash_entry *)
    ((char *) VAR_3 - ((char *) &VAR_4->u.undef.next - (char *) VAR_4));
       break;
     }
 }
      else
 VAR_3 = &VAR_4->u.undef.next;
    }
}
