
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
struct gdbarch {int (* print_registers_info ) (struct gdbarch*,struct ui_file*,struct frame_info*,int,int) ;} ;
struct frame_info {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct gdbarch*,struct ui_file*,struct frame_info*,int,int) ;

void
FUNC_3 (struct gdbarch *VAR_2, struct ui_file *VAR_3, struct frame_info *VAR_4, int VAR_5, int VAR_6)
{
  FUNC_1 (VAR_2 != ((void*)0));
  FUNC_1 (VAR_2->print_registers_info != ((void*)0));
  if (VAR_1 >= 2)
    FUNC_0 (VAR_0, "gdbarch_print_registers_info called\n");
  VAR_2->print_registers_info (VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
}
