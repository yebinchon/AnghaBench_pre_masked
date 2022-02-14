
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
struct gdbarch {int (* print_float_info ) (struct gdbarch*,struct ui_file*,struct frame_info*,char const*) ;} ;
struct frame_info {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct gdbarch*,struct ui_file*,struct frame_info*,char const*) ;

void
FUNC_3 (struct gdbarch *VAR_2, struct ui_file *VAR_3, struct frame_info *VAR_4, const char *VAR_5)
{
  FUNC_1 (VAR_2 != ((void*)0));
  FUNC_1 (VAR_2->print_float_info != ((void*)0));
  if (VAR_1 >= 2)
    FUNC_0 (VAR_0, "gdbarch_print_float_info called\n");
  VAR_2->print_float_info (VAR_2, VAR_3, VAR_4, VAR_5);
}
