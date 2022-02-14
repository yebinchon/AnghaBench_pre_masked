
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spu_link_hash_table {int stub_hash_table; } ;
struct bfd_link_hash_table {int dummy; } ;


 int FUNC_0 (struct bfd_link_hash_table*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2 (struct bfd_link_hash_table *VAR_0)
{
  struct spu_link_hash_table *VAR_1 = (struct spu_link_hash_table *) VAR_0;

  FUNC_1 (&VAR_1->stub_hash_table);
  FUNC_0 (VAR_0);
}
