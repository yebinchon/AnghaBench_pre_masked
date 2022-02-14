
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct perf_callchain_entry {scalar_t__ nr; } ;
struct TYPE_3__ {scalar_t__ mm; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 struct perf_callchain_entry* FUNC_0 (int*) ;
 int FUNC_1 (struct perf_callchain_entry*,struct pt_regs*) ;
 int FUNC_2 (struct perf_callchain_entry*,int ) ;
 int FUNC_3 (struct perf_callchain_entry*,struct pt_regs*) ;
 int FUNC_4 (int) ;
 struct pt_regs* FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct pt_regs*) ;

struct perf_callchain_entry *FUNC_7(struct pt_regs *VAR_3)
{
 int VAR_4;
 struct perf_callchain_entry *VAR_5;


 VAR_5 = FUNC_0(&VAR_4);
 if (VAR_4 == -1)
  return ((void*)0);

 if (!VAR_5)
  goto exit_put;

 VAR_5->nr = 0;

 if (!FUNC_6(VAR_3)) {
  FUNC_2(VAR_5, VAR_0);
  FUNC_1(VAR_5, VAR_3);
  if (VAR_2->mm)
   VAR_3 = FUNC_5(VAR_2);
  else
   VAR_3 = ((void*)0);
 }

 if (VAR_3) {
  FUNC_2(VAR_5, VAR_1);
  FUNC_3(VAR_5, VAR_3);
 }

exit_put:
 FUNC_4(VAR_4);

 return VAR_5;
}
