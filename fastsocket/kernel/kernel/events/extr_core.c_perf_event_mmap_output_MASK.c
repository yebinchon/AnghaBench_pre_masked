
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct perf_sample_data {int dummy; } ;
struct perf_output_handle {int dummy; } ;
struct TYPE_4__ {int size; } ;
struct TYPE_3__ {TYPE_2__ header; int tid; int pid; } ;
struct perf_mmap_event {TYPE_1__ event_id; int file_size; int file_name; } ;
struct perf_event {int dummy; } ;


 int FUNC_0 (struct perf_output_handle*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct perf_event*,struct perf_output_handle*,struct perf_sample_data*) ;
 int FUNC_2 (TYPE_2__*,struct perf_sample_data*,struct perf_event*) ;
 int FUNC_3 (struct perf_event*,int ) ;
 int FUNC_4 (struct perf_event*,int ) ;
 int FUNC_5 (struct perf_output_handle*,struct perf_event*,int) ;
 int FUNC_6 (struct perf_output_handle*) ;
 int FUNC_7 (struct perf_output_handle*,TYPE_1__) ;

__attribute__((used)) static void FUNC_8(struct perf_event *VAR_1,
         struct perf_mmap_event *VAR_2)
{
 struct perf_output_handle VAR_3;
 struct perf_sample_data VAR_4;
 int VAR_5 = VAR_2->event_id.header.size;
 int VAR_6;

 FUNC_2(&VAR_2->event_id.header, &VAR_4, VAR_1);
 VAR_6 = FUNC_5(&VAR_3, VAR_1,
    VAR_2->event_id.header.size);
 if (VAR_6)
  goto out;

 VAR_2->event_id.pid = FUNC_3(VAR_1, VAR_0);
 VAR_2->event_id.tid = FUNC_4(VAR_1, VAR_0);

 FUNC_7(&VAR_3, VAR_2->event_id);
 FUNC_0(&VAR_3, VAR_2->file_name,
       VAR_2->file_size);

 FUNC_1(VAR_1, &VAR_3, &VAR_4);

 FUNC_6(&VAR_3);
out:
 VAR_2->event_id.header.size = VAR_5;
}
