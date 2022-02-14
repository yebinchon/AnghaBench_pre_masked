
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch {int (* deprecated_init_frame_pc ) (int,struct frame_info*) ;} ;
struct frame_info {int dummy; } ;
typedef int CORE_ADDR ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int,struct frame_info*) ;

CORE_ADDR
FUNC_3 (struct gdbarch *VAR_2, int VAR_3, struct frame_info *VAR_4)
{
  FUNC_1 (VAR_2 != ((void*)0));
  FUNC_1 (VAR_2->deprecated_init_frame_pc != ((void*)0));
  if (VAR_1 >= 2)
    FUNC_0 (VAR_0, "gdbarch_deprecated_init_frame_pc called\n");
  return VAR_2->deprecated_init_frame_pc (VAR_3, VAR_4);
}
