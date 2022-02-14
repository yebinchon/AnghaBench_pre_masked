
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_6__ {scalar_t__ reserved; int cpu; } ;
struct TYPE_5__ {int tid; int pid; } ;
struct perf_sample_data {int type; TYPE_3__ cpu_entry; int stream_id; int id; int time; TYPE_2__ tid_entry; } ;
struct perf_event_header {int size; } ;
struct TYPE_4__ {int sample_type; } ;
struct perf_event {int id; scalar_t__ id_header_size; TYPE_1__ attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (struct perf_event*,int ) ;
 int FUNC_2 (struct perf_event*,int ) ;
 int FUNC_3 (struct perf_event*) ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct perf_event_header *VAR_6,
      struct perf_sample_data *VAR_7,
      struct perf_event *VAR_8)
{
 u64 VAR_9 = VAR_8->attr.sample_type;

 VAR_7->type = VAR_9;
 VAR_6->size += VAR_8->id_header_size;

 if (VAR_9 & VAR_3) {

  VAR_7->tid_entry.pid = FUNC_1(VAR_8, VAR_5);
  VAR_7->tid_entry.tid = FUNC_2(VAR_8, VAR_5);
 }

 if (VAR_9 & VAR_4)
  VAR_7->time = FUNC_0();

 if (VAR_9 & VAR_1)
  VAR_7->id = FUNC_3(VAR_8);

 if (VAR_9 & VAR_2)
  VAR_7->stream_id = VAR_8->id;

 if (VAR_9 & VAR_0) {
  VAR_7->cpu_entry.cpu = FUNC_4();
  VAR_7->cpu_entry.reserved = 0;
 }
}
