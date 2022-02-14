
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct gdbarch {int (* register_to_value ) (struct frame_info*,int,struct type*,void*) ;} ;
struct frame_info {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct frame_info*,int,struct type*,void*) ;

void
FUNC_3 (struct gdbarch *VAR_2, struct frame_info *VAR_3, int VAR_4, struct type *VAR_5, void *VAR_6)
{
  FUNC_1 (VAR_2 != ((void*)0));
  FUNC_1 (VAR_2->register_to_value != ((void*)0));
  if (VAR_1 >= 2)
    FUNC_0 (VAR_0, "gdbarch_register_to_value called\n");
  VAR_2->register_to_value (VAR_3, VAR_4, VAR_5, VAR_6);
}
