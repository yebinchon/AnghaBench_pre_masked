
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ia64_frame_cache {int bsp; int base; } ;
struct frame_info {int dummy; } ;
struct frame_id {int stack_addr; int code_addr; } ;


 int FUNC_0 (int ,char*,int ,int ,int ,struct frame_info*) ;
 struct frame_id FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct frame_info*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct ia64_frame_cache* FUNC_3 (struct frame_info*,void**) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5 (struct frame_info *VAR_2,
          void **VAR_3, struct frame_id *VAR_4)
{
  struct ia64_frame_cache *VAR_5 =
    FUNC_3 (VAR_2, VAR_3);

  (*VAR_4) = FUNC_1 (VAR_5->base, FUNC_2 (VAR_2), VAR_5->bsp);
  if (VAR_1 >= 1)
    FUNC_0 (VAR_0,
   "sigtramp frame id: code 0x%s, stack 0x%s, special 0x%s, next_frame %p\n",
   FUNC_4 (VAR_4->code_addr),
   FUNC_4 (VAR_4->stack_addr),
   FUNC_4 (VAR_5->bsp), VAR_2);
}
