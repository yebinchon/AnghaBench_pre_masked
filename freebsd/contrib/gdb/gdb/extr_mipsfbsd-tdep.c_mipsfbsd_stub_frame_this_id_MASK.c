
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mips_frame_cache {TYPE_1__* saved_regs; int base; } ;
struct frame_info {int dummy; } ;
struct frame_id {int dummy; } ;
struct TYPE_4__ {size_t pc; } ;
struct TYPE_3__ {int addr; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 struct frame_id FUNC_0 (int ,int ) ;
 TYPE_2__* FUNC_1 (int ) ;
 struct mips_frame_cache* FUNC_2 (struct frame_info*,void**) ;

__attribute__((used)) static void
FUNC_3 (struct frame_info *VAR_2,
                             void **VAR_3,
                             struct frame_id *VAR_4)
{
  struct mips_frame_cache *VAR_5 =
    FUNC_2 (VAR_2, VAR_3);

    (*VAR_4) = FUNC_0 (VAR_5->base,
        VAR_5->saved_regs[VAR_0 + FUNC_1 (VAR_1)->pc].addr);
}
