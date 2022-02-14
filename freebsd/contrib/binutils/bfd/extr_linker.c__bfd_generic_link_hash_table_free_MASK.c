
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int table; } ;
struct generic_link_hash_table {TYPE_1__ root; } ;
struct bfd_link_hash_table {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct generic_link_hash_table*) ;

void
FUNC_2 (struct bfd_link_hash_table *VAR_0)
{
  struct generic_link_hash_table *VAR_1
    = (struct generic_link_hash_table *) VAR_0;

  FUNC_0 (&VAR_1->root.table);
  FUNC_1 (VAR_1);
}
