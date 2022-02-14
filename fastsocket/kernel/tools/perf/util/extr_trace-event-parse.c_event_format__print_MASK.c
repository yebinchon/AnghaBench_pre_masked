
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int dummy; } ;
struct pevent_record {int cpu; int size; void* data; } ;
struct event_format {int dummy; } ;
typedef int record ;


 int FUNC_0 (struct pevent_record*,int ,int) ;
 int FUNC_1 (struct trace_seq*,struct event_format*,struct pevent_record*) ;
 int FUNC_2 (struct trace_seq*) ;
 int FUNC_3 (struct trace_seq*) ;

void FUNC_4(struct event_format *VAR_0,
    int VAR_1, void *VAR_2, int VAR_3)
{
 struct pevent_record VAR_4;
 struct trace_seq VAR_5;

 FUNC_0(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.cpu = VAR_1;
 VAR_4.size = VAR_3;
 VAR_4.data = VAR_2;

 FUNC_3(&VAR_5);
 FUNC_1(&VAR_5, VAR_0, &VAR_4);
 FUNC_2(&VAR_5);
}
