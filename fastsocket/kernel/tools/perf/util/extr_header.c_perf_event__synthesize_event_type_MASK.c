
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int size; int type; } ;
struct TYPE_4__ {union perf_event* name; int event_id; } ;
struct TYPE_6__ {TYPE_2__ header; TYPE_1__ event_type; } ;
union perf_event {TYPE_3__ event_type; } ;
typedef int u64 ;
struct perf_tool {int dummy; } ;
struct machine {int dummy; } ;
typedef int (* perf_event__handler_t ) (struct perf_tool*,union perf_event*,int *,struct machine*) ;
typedef int ev ;


 int VAR_0 ;
 size_t FUNC_0 (size_t,int) ;
 int VAR_1 ;
 int FUNC_1 (union perf_event*,int ,int) ;
 size_t FUNC_2 (union perf_event*) ;
 int FUNC_3 (union perf_event*,char*,int) ;

int FUNC_4(struct perf_tool *VAR_2,
          u64 VAR_3, char *VAR_4,
          perf_event__handler_t VAR_5,
          struct machine *VAR_6)
{
 union perf_event VAR_7;
 size_t VAR_8 = 0;
 int VAR_9 = 0;

 FUNC_1(&VAR_7, 0, sizeof(VAR_7));

 VAR_7.event_type.event_type.event_id = VAR_3;
 FUNC_1(VAR_7.event_type.event_type.name, 0, VAR_0);
 FUNC_3(VAR_7.event_type.event_type.name, VAR_4, VAR_0 - 1);

 VAR_7.event_type.header.type = VAR_1;
 VAR_8 = FUNC_2(VAR_7.event_type.event_type.name);
 VAR_8 = FUNC_0(VAR_8, sizeof(u64));
 VAR_7.event_type.header.size = sizeof(VAR_7.event_type) -
  (sizeof(VAR_7.event_type.event_type.name) - VAR_8);

 VAR_9 = VAR_5(VAR_2, &VAR_7, ((void*)0), VAR_6);

 return VAR_9;
}
