
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regcache_descr {int* sizeof_register; } ;
struct gdbarch {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 struct regcache_descr* FUNC_2 (struct gdbarch*) ;

int
FUNC_3 (struct gdbarch *VAR_2, int VAR_3)
{
  struct regcache_descr *VAR_4 = FUNC_2 (VAR_2);
  int VAR_5;
  FUNC_1 (VAR_3 >= 0 && VAR_3 < (VAR_1 + VAR_0));
  VAR_5 = VAR_4->sizeof_register[VAR_3];


  FUNC_1 (VAR_5 == FUNC_0 (VAR_3));


  return VAR_5;
}
