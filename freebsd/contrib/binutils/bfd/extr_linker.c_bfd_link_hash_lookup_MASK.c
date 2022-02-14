
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bfd_link_hash_table {int table; } ;
struct TYPE_4__ {struct bfd_link_hash_entry* link; } ;
struct TYPE_3__ {TYPE_2__ i; } ;
struct bfd_link_hash_entry {scalar_t__ type; TYPE_1__ u; } ;
typedef scalar_t__ bfd_boolean ;


 scalar_t__ FUNC_0 (int *,char const*,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

struct bfd_link_hash_entry *
FUNC_1 (struct bfd_link_hash_table *VAR_2,
        const char *VAR_3,
        bfd_boolean VAR_4,
        bfd_boolean VAR_5,
        bfd_boolean VAR_6)
{
  struct bfd_link_hash_entry *VAR_7;

  VAR_7 = ((struct bfd_link_hash_entry *)
  FUNC_0 (&VAR_2->table, VAR_3, VAR_4, VAR_5));

  if (VAR_6 && VAR_7 != ((void*)0))
    {
      while (VAR_7->type == VAR_0
      || VAR_7->type == VAR_1)
 VAR_7 = VAR_7->u.i.link;
    }

  return VAR_7;
}
