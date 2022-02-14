
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch {struct frame_id (* unwind_dummy_id ) (struct gdbarch*,struct frame_info*) ;} ;
struct frame_info {int dummy; } ;
struct frame_id {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct frame_id FUNC_2 (struct gdbarch*,struct frame_info*) ;

struct frame_id
FUNC_3 (struct gdbarch *VAR_2, struct frame_info *VAR_3)
{
  FUNC_1 (VAR_2 != ((void*)0));
  FUNC_1 (VAR_2->unwind_dummy_id != ((void*)0));
  if (VAR_1 >= 2)
    FUNC_0 (VAR_0, "gdbarch_unwind_dummy_id called\n");
  return VAR_2->unwind_dummy_id (VAR_2, VAR_3);
}
