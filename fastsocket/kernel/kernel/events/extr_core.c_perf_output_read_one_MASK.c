
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct perf_output_handle {int dummy; } ;
struct TYPE_2__ {int read_format; } ;
struct perf_event {int child_total_time_running; int child_total_time_enabled; TYPE_1__ attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct perf_output_handle*,int*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct perf_event*) ;
 int FUNC_3 (struct perf_event*) ;

__attribute__((used)) static void FUNC_4(struct perf_output_handle *VAR_3,
     struct perf_event *VAR_4,
     u64 VAR_5, u64 VAR_6)
{
 u64 VAR_7 = VAR_4->attr.read_format;
 u64 VAR_8[4];
 int VAR_9 = 0;

 VAR_8[VAR_9++] = FUNC_2(VAR_4);
 if (VAR_7 & VAR_1) {
  VAR_8[VAR_9++] = VAR_5 +
   FUNC_1(&VAR_4->child_total_time_enabled);
 }
 if (VAR_7 & VAR_2) {
  VAR_8[VAR_9++] = VAR_6 +
   FUNC_1(&VAR_4->child_total_time_running);
 }
 if (VAR_7 & VAR_0)
  VAR_8[VAR_9++] = FUNC_3(VAR_4);

 FUNC_0(VAR_3, VAR_8, VAR_9 * sizeof(u64));
}
