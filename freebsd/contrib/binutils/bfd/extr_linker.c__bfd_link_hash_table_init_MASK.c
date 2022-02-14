
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct bfd_link_hash_table {int table; int type; int * undefs_tail; int * undefs; int creator; } ;
typedef int bfd_boolean ;
struct TYPE_3__ {int xvec; } ;
typedef TYPE_1__ bfd ;


 int FUNC_0 (int *,struct bfd_hash_entry* (*) (struct bfd_hash_entry*,struct bfd_hash_table*,char const*),unsigned int) ;
 int VAR_0 ;

bfd_boolean
FUNC_1
  (struct bfd_link_hash_table *VAR_1,
   bfd *VAR_2,
   struct bfd_hash_entry *(*VAR_3) (struct bfd_hash_entry *,
          struct bfd_hash_table *,
          const char *),
   unsigned int VAR_4)
{
  VAR_1->creator = VAR_2->xvec;
  VAR_1->undefs = ((void*)0);
  VAR_1->undefs_tail = ((void*)0);
  VAR_1->type = VAR_0;

  return FUNC_0 (&VAR_1->table, VAR_3, VAR_4);
}
