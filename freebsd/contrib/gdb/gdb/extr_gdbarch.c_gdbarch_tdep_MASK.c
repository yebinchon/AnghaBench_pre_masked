
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch_tdep {int dummy; } ;
struct gdbarch {struct gdbarch_tdep* tdep; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;

struct gdbarch_tdep *
FUNC_1 (struct gdbarch *VAR_2)
{
  if (VAR_1 >= 2)
    FUNC_0 (VAR_0, "gdbarch_tdep called\n");
  return VAR_2->tdep;
}
