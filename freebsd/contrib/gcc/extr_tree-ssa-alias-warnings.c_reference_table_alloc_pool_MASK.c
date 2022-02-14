
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_map {int dummy; } ;
typedef scalar_t__ alloc_pool ;


 scalar_t__ FUNC_0 (char*,int,int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static inline alloc_pool
FUNC_1 (bool VAR_1)
{
  if (VAR_0 || !VAR_1)
    return VAR_0;

  VAR_0 =
    FUNC_0 ("ref_table_alloc_pool", sizeof (struct tree_map), 20);

  return VAR_0;
}
