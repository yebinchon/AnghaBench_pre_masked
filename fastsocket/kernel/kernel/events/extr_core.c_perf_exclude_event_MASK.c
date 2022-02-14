
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct TYPE_4__ {scalar_t__ exclude_kernel; scalar_t__ exclude_user; } ;
struct TYPE_3__ {int state; } ;
struct perf_event {TYPE_2__ attr; TYPE_1__ hw; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct pt_regs*) ;

__attribute__((used)) static int FUNC_1(struct perf_event *VAR_1,
         struct pt_regs *VAR_2)
{
 if (VAR_1->hw.state & VAR_0)
  return 1;

 if (VAR_2) {
  if (VAR_1->attr.exclude_user && FUNC_0(VAR_2))
   return 1;

  if (VAR_1->attr.exclude_kernel && !FUNC_0(VAR_2))
   return 1;
 }

 return 0;
}
