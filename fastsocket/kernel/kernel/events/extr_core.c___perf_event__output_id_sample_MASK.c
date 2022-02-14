
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct perf_sample_data {int type; int cpu_entry; int stream_id; int id; int time; int tid_entry; } ;
struct perf_output_handle {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct perf_output_handle*,int ) ;

__attribute__((used)) static void FUNC_1(struct perf_output_handle *VAR_5,
        struct perf_sample_data *VAR_6)
{
 u64 VAR_7 = VAR_6->type;

 if (VAR_7 & VAR_3)
  FUNC_0(VAR_5, VAR_6->tid_entry);

 if (VAR_7 & VAR_4)
  FUNC_0(VAR_5, VAR_6->time);

 if (VAR_7 & VAR_1)
  FUNC_0(VAR_5, VAR_6->id);

 if (VAR_7 & VAR_2)
  FUNC_0(VAR_5, VAR_6->stream_id);

 if (VAR_7 & VAR_0)
  FUNC_0(VAR_5, VAR_6->cpu_entry);
}
