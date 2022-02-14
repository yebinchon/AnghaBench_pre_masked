
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch {int (* deprecated_frame_init_saved_regs ) (struct frame_info*) ;} ;
struct frame_info {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct frame_info*) ;

void
FUNC_3 (struct gdbarch *VAR_2, struct frame_info *VAR_3)
{
  FUNC_1 (VAR_2 != ((void*)0));
  FUNC_1 (VAR_2->deprecated_frame_init_saved_regs != ((void*)0));
  if (VAR_1 >= 2)
    FUNC_0 (VAR_0, "gdbarch_deprecated_frame_init_saved_regs called\n");
  VAR_2->deprecated_frame_init_saved_regs (VAR_3);
}
