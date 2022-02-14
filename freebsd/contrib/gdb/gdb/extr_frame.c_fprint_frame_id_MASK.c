
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
struct frame_id {int special_addr; int code_addr; int stack_addr; } ;


 int FUNC_0 (struct ui_file*,char*,int ,int ,int ) ;
 int FUNC_1 (int ) ;

void
FUNC_2 (struct ui_file *VAR_0, struct frame_id VAR_1)
{
  FUNC_0 (VAR_0, "{stack=0x%s,code=0x%s,special=0x%s}",
        FUNC_1 (VAR_1.stack_addr),
        FUNC_1 (VAR_1.code_addr),
        FUNC_1 (VAR_1.special_addr));
}
