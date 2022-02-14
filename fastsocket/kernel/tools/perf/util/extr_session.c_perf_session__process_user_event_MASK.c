
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
union perf_event {TYPE_1__ header; } ;
typedef int u64 ;
struct perf_tool {int (* attr ) (struct perf_tool*,union perf_event*,int *) ;int (* event_type ) (struct perf_tool*,union perf_event*) ;int (* tracing_data ) (struct perf_tool*,union perf_event*,struct perf_session*) ;int (* build_id ) (struct perf_tool*,union perf_event*,struct perf_session*) ;int (* finished_round ) (struct perf_tool*,union perf_event*,struct perf_session*) ;} ;
struct perf_session {int fd; int evlist; } ;


 int VAR_0 ;





 int VAR_1 ;
 int FUNC_0 (struct perf_session*,union perf_event*,int ,int *) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct perf_session*) ;
 int FUNC_3 (struct perf_tool*,union perf_event*,int *) ;
 int FUNC_4 (struct perf_tool*,union perf_event*) ;
 int FUNC_5 (struct perf_tool*,union perf_event*,struct perf_session*) ;
 int FUNC_6 (struct perf_tool*,union perf_event*,struct perf_session*) ;
 int FUNC_7 (struct perf_tool*,union perf_event*,struct perf_session*) ;

__attribute__((used)) static int FUNC_8(struct perf_session *VAR_2, union perf_event *VAR_3,
         struct perf_tool *VAR_4, u64 VAR_5)
{
 int VAR_6;

 FUNC_0(VAR_2, VAR_3, VAR_5, ((void*)0));


 switch (VAR_3->header.type) {
 case 131:
  VAR_6 = VAR_4->attr(VAR_4, VAR_3, &VAR_2->evlist);
  if (VAR_6 == 0)
   FUNC_2(VAR_2);
  return VAR_6;
 case 129:
  return VAR_4->event_type(VAR_4, VAR_3);
 case 128:

  FUNC_1(VAR_2->fd, VAR_5, VAR_1);
  return VAR_4->tracing_data(VAR_4, VAR_3, VAR_2);
 case 130:
  return VAR_4->build_id(VAR_4, VAR_3, VAR_2);
 case 132:
  return VAR_4->finished_round(VAR_4, VAR_3, VAR_2);
 default:
  return -VAR_0;
 }
}
