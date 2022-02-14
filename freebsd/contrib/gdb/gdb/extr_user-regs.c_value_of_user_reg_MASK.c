
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct user_reg {struct value* (* read ) (struct frame_info*) ;} ;
struct gdbarch {int dummy; } ;
struct frame_info {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct gdbarch*) ;
 int FUNC_2 (struct gdbarch*) ;
 struct gdbarch* FUNC_3 (struct frame_info*) ;
 struct value* FUNC_4 (struct frame_info*) ;
 struct user_reg* FUNC_5 (struct gdbarch*,int) ;

struct value *
FUNC_6 (int VAR_0, struct frame_info *VAR_1)
{
  struct gdbarch *VAR_2 = FUNC_3 (VAR_1);
  int VAR_3 = (FUNC_2 (VAR_2)
   + FUNC_1 (VAR_2));
  struct user_reg *VAR_4 = FUNC_5 (VAR_2, VAR_0 - VAR_3);
  FUNC_0 (VAR_4 != ((void*)0));
  return VAR_4->read (VAR_1);
}
