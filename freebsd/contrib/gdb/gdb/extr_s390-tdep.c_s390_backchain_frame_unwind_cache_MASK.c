
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s390_unwind_cache {int func; int local_base; scalar_t__ frame_base; TYPE_1__* saved_regs; } ;
struct gdbarch {int dummy; } ;
struct frame_info {int dummy; } ;
typedef int ULONGEST ;
struct TYPE_2__ {scalar_t__ addr; } ;
typedef scalar_t__ LONGEST ;
typedef scalar_t__ CORE_ADDR ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct frame_info*) ;
 int FUNC_1 (struct frame_info*,size_t) ;
 int FUNC_2 (struct gdbarch*) ;
 struct gdbarch* FUNC_3 (struct frame_info*) ;
 scalar_t__ FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (scalar_t__,int,scalar_t__*) ;

__attribute__((used)) static void
FUNC_6 (struct frame_info *VAR_3,
       struct s390_unwind_cache *VAR_4)
{
  struct gdbarch *VAR_5 = FUNC_3 (VAR_3);
  int VAR_6 = FUNC_2 (VAR_5) / 8;
  CORE_ADDR VAR_7;
  ULONGEST VAR_8;
  LONGEST VAR_9;


  VAR_8 = FUNC_1 (VAR_3, VAR_2);
  VAR_7 = FUNC_4 (VAR_8, VAR_6);





  if (VAR_7 != 0
      && FUNC_5 (VAR_7 + 15*VAR_6, VAR_6, &VAR_9)
      && (CORE_ADDR)VAR_9 == VAR_7)
    {



      VAR_4->saved_regs[VAR_2].addr = VAR_7 + 15*VAR_6;
      VAR_4->saved_regs[VAR_1].addr = VAR_7 + 14*VAR_6;


      VAR_4->saved_regs[VAR_0] = VAR_4->saved_regs[VAR_1];



      VAR_4->frame_base = VAR_7 + 16*VAR_6 + 32;
      VAR_4->local_base = VAR_8;
    }

  VAR_4->func = FUNC_0 (VAR_3);
}
