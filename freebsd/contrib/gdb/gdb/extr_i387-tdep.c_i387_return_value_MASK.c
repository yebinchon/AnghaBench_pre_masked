
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regcache {int dummy; } ;
struct gdbarch_tdep {int dummy; } ;
struct gdbarch {int dummy; } ;
typedef int ULONGEST ;


 int VAR_0 ;
 int VAR_1 ;
 struct gdbarch_tdep* FUNC_0 (struct gdbarch*) ;
 int FUNC_1 (struct regcache*,int ,int*) ;
 int FUNC_2 (struct regcache*,int ,int) ;

void
FUNC_3 (struct gdbarch *VAR_2, struct regcache *VAR_3)
{
  struct gdbarch_tdep *VAR_4 = FUNC_0 (VAR_2);
  ULONGEST VAR_5;
  FUNC_1 (VAR_3, VAR_0, &VAR_5);
  VAR_5 |= (7 << 11);
  FUNC_2 (VAR_3, VAR_0, VAR_5);




  FUNC_2 (VAR_3, VAR_1, 0x3fff);


}
