
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct gdbarch {int (* fetch_pointer_argument ) (struct frame_info*,int,struct type*) ;} ;
struct frame_info {int dummy; } ;
typedef int CORE_ADDR ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct frame_info*,int,struct type*) ;

CORE_ADDR
FUNC_3 (struct gdbarch *VAR_2, struct frame_info *VAR_3, int VAR_4, struct type *VAR_5)
{
  FUNC_1 (VAR_2 != ((void*)0));
  FUNC_1 (VAR_2->fetch_pointer_argument != ((void*)0));
  if (VAR_1 >= 2)
    FUNC_0 (VAR_0, "gdbarch_fetch_pointer_argument called\n");
  return VAR_2->fetch_pointer_argument (VAR_3, VAR_4, VAR_5);
}
