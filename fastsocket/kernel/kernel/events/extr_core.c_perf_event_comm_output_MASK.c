
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct perf_sample_data {int dummy; } ;
struct perf_output_handle {int dummy; } ;
struct perf_event {int dummy; } ;
struct TYPE_4__ {int size; } ;
struct TYPE_3__ {TYPE_2__ header; int tid; int pid; } ;
struct perf_comm_event {TYPE_1__ event_id; int comm_size; int comm; int task; } ;


 int FUNC_0 (struct perf_output_handle*,int ,int ) ;
 int FUNC_1 (struct perf_event*,struct perf_output_handle*,struct perf_sample_data*) ;
 int FUNC_2 (TYPE_2__*,struct perf_sample_data*,struct perf_event*) ;
 int FUNC_3 (struct perf_event*,int ) ;
 int FUNC_4 (struct perf_event*,int ) ;
 int FUNC_5 (struct perf_output_handle*,struct perf_event*,int) ;
 int FUNC_6 (struct perf_output_handle*) ;
 int FUNC_7 (struct perf_output_handle*,TYPE_1__) ;

__attribute__((used)) static void FUNC_8(struct perf_event *VAR_0,
         struct perf_comm_event *VAR_1)
{
 struct perf_output_handle VAR_2;
 struct perf_sample_data VAR_3;
 int VAR_4 = VAR_1->event_id.header.size;
 int VAR_5;

 FUNC_2(&VAR_1->event_id.header, &VAR_3, VAR_0);
 VAR_5 = FUNC_5(&VAR_2, VAR_0,
    VAR_1->event_id.header.size);

 if (VAR_5)
  goto out;

 VAR_1->event_id.pid = FUNC_3(VAR_0, VAR_1->task);
 VAR_1->event_id.tid = FUNC_4(VAR_0, VAR_1->task);

 FUNC_7(&VAR_2, VAR_1->event_id);
 FUNC_0(&VAR_2, VAR_1->comm,
       VAR_1->comm_size);

 FUNC_1(VAR_0, &VAR_2, &VAR_3);

 FUNC_6(&VAR_2);
out:
 VAR_1->event_id.header.size = VAR_4;
}
