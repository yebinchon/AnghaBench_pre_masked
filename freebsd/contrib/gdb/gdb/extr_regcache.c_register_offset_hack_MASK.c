
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regcache_descr {int nr_cooked_registers; int* register_offset; } ;
struct gdbarch {int dummy; } ;


 int FUNC_0 (int) ;
 struct regcache_descr* FUNC_1 (struct gdbarch*) ;

int
FUNC_2 (struct gdbarch *VAR_0, int VAR_1)
{
  struct regcache_descr *VAR_2 = FUNC_1 (VAR_0);
  FUNC_0 (VAR_1 >= 0 && VAR_1 < VAR_2->nr_cooked_registers);
  return VAR_2->register_offset[VAR_1];
}
