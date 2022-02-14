
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct pt_regs {int dummy; } ;
struct perf_sample_data {int dummy; } ;
struct TYPE_2__ {int type; scalar_t__ config; } ;
struct perf_event {TYPE_1__ attr; } ;
typedef enum perf_type_id { ____Placeholder_perf_type_id } perf_type_id ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct perf_event*,struct pt_regs*) ;
 int FUNC_1 (struct perf_event*,struct perf_sample_data*) ;

__attribute__((used)) static int FUNC_2(struct perf_event *VAR_1,
    enum perf_type_id VAR_2,
    u32 VAR_3,
    struct perf_sample_data *VAR_4,
    struct pt_regs *VAR_5)
{
 if (VAR_1->attr.type != VAR_2)
  return 0;

 if (VAR_1->attr.config != VAR_3)
  return 0;

 if (FUNC_0(VAR_1, VAR_5))
  return 0;

 if (VAR_1->attr.type == VAR_0 &&
   !FUNC_1(VAR_1, VAR_4))
  return 0;

 return 1;
}
