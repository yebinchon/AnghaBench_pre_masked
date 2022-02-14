
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch {int dummy; } ;
struct frame_base_table {int dummy; } ;
typedef int frame_base_sniffer_ftype ;


 int FUNC_0 (struct frame_base_table*,int *) ;
 struct frame_base_table* FUNC_1 (struct gdbarch*) ;

void
FUNC_2 (struct gdbarch *VAR_0,
      frame_base_sniffer_ftype *VAR_1)
{
  struct frame_base_table *VAR_2 = FUNC_1 (VAR_0);
  FUNC_0 (VAR_2, VAR_1);
}
