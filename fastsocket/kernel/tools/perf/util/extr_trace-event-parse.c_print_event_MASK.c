
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int dummy; } ;
struct pevent_record {unsigned long long ts; int cpu; int size; void* data; } ;
struct pevent {int latency_format; } ;


 int VAR_0 ;
 int FUNC_0 (struct pevent*,struct pevent_record*) ;
 int FUNC_1 (struct pevent*,int) ;
 int FUNC_2 (struct pevent*,struct trace_seq*,struct pevent_record*) ;
 int FUNC_3 (struct pevent*,char*,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct trace_seq*) ;
 int FUNC_6 (struct trace_seq*) ;

void FUNC_7(struct pevent *VAR_1, int VAR_2, void *VAR_3, int VAR_4,
   unsigned long long VAR_5, char *VAR_6)
{
 struct pevent_record VAR_7;
 struct trace_seq VAR_8;
 int VAR_9;

 VAR_1->latency_format = VAR_0;

 VAR_7.ts = VAR_5;
 VAR_7.cpu = VAR_2;
 VAR_7.size = VAR_4;
 VAR_7.data = VAR_3;
 VAR_9 = FUNC_0(VAR_1, &VAR_7);

 if (!FUNC_1(VAR_1, VAR_9))
  FUNC_3(VAR_1, VAR_6, VAR_9);

 FUNC_6(&VAR_8);
 FUNC_2(VAR_1, &VAR_8, &VAR_7);
 FUNC_5(&VAR_8);
 FUNC_4("\n");
}
