
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int table; } ;
struct xcoff_link_hash_table {TYPE_1__ root; int debug_strtab; } ;
struct bfd_link_hash_table {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct xcoff_link_hash_table*) ;

void
FUNC_3 (struct bfd_link_hash_table *VAR_0)
{
  struct xcoff_link_hash_table *VAR_1 = (struct xcoff_link_hash_table *) VAR_0;

  FUNC_0 (VAR_1->debug_strtab);
  FUNC_1 (&VAR_1->root.table);
  FUNC_2 (VAR_1);
}
