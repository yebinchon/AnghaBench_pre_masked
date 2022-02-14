
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch {int (* deprecated_frame_chain_valid ) (int ,struct frame_info*) ;} ;
struct frame_info {int dummy; } ;
typedef int CORE_ADDR ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,struct frame_info*) ;

int
FUNC_3 (struct gdbarch *VAR_2, CORE_ADDR VAR_3, struct frame_info *VAR_4)
{
  FUNC_1 (VAR_2 != ((void*)0));
  FUNC_1 (VAR_2->deprecated_frame_chain_valid != ((void*)0));
  if (VAR_1 >= 2)
    FUNC_0 (VAR_0, "gdbarch_deprecated_frame_chain_valid called\n");
  return VAR_2->deprecated_frame_chain_valid (VAR_3, VAR_4);
}
