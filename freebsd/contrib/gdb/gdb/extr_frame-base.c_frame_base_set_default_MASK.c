
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch {int dummy; } ;
struct frame_base_table {struct frame_base const* default_base; } ;
struct frame_base {int dummy; } ;


 struct frame_base_table* FUNC_0 (struct gdbarch*) ;

void
FUNC_1 (struct gdbarch *VAR_0,
   const struct frame_base *VAR_1)
{
  struct frame_base_table *VAR_2 = FUNC_0 (VAR_0);
  VAR_2->default_base = VAR_1;
}
