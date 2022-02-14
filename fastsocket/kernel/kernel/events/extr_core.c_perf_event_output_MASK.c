
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;
struct perf_sample_data {int dummy; } ;
struct perf_output_handle {int dummy; } ;
struct perf_event_header {int size; } ;
struct perf_event {int dummy; } ;


 scalar_t__ FUNC_0 (struct perf_output_handle*,struct perf_event*,int ) ;
 int FUNC_1 (struct perf_output_handle*) ;
 int FUNC_2 (struct perf_output_handle*,struct perf_event_header*,struct perf_sample_data*,struct perf_event*) ;
 int FUNC_3 (struct perf_event_header*,struct perf_sample_data*,struct perf_event*,struct pt_regs*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(struct perf_event *VAR_0,
    struct perf_sample_data *VAR_1,
    struct pt_regs *VAR_2)
{
 struct perf_output_handle VAR_3;
 struct perf_event_header VAR_4;


 FUNC_4();

 FUNC_3(&VAR_4, VAR_1, VAR_0, VAR_2);

 if (FUNC_0(&VAR_3, VAR_0, VAR_4.size))
  goto exit;

 FUNC_2(&VAR_3, &VAR_4, VAR_1, VAR_0);

 FUNC_1(&VAR_3);

exit:
 FUNC_5();
}
