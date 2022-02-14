
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int dummy; } ;
struct pevent_record {unsigned long ts; scalar_t__ size; int cpu; void* data; } ;
struct pevent {int flags; scalar_t__ latency_format; } ;
struct event_format {int name; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 char* FUNC_1 (struct pevent*,int) ;
 int FUNC_2 (struct pevent*,void*) ;
 int FUNC_3 (struct pevent*,struct trace_seq*,struct pevent_record*) ;
 int FUNC_4 (struct trace_seq*,struct event_format*,struct pevent_record*) ;
 struct event_format* FUNC_5 (struct pevent*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct pevent*,void*) ;
 int FUNC_8 (struct trace_seq*,char*,...) ;

void FUNC_9(struct pevent *VAR_3, struct trace_seq *VAR_4,
   struct pevent_record *VAR_5)
{
 static char *VAR_6 = "                    ";
 struct event_format *VAR_7;
 unsigned long VAR_8;
 unsigned long VAR_9;
 unsigned long VAR_10;
 const char *VAR_11;
 void *VAR_12 = VAR_5->data;
 int VAR_13;
 int VAR_14;
 int VAR_15;
 int VAR_16;

 VAR_8 = VAR_5->ts / VAR_0;
 VAR_10 = VAR_5->ts - VAR_8 * VAR_0;

 if (VAR_5->size < 0) {
  FUNC_0("ug! negative record size %d", VAR_5->size);
  return;
 }

 VAR_13 = FUNC_7(VAR_3, VAR_12);

 VAR_7 = FUNC_5(VAR_3, VAR_13);
 if (!VAR_7) {
  FUNC_0("ug! no event found for type %d", VAR_13);
  return;
 }

 VAR_14 = FUNC_2(VAR_3, VAR_12);
 VAR_11 = FUNC_1(VAR_3, VAR_14);

 if (VAR_3->latency_format) {
  FUNC_8(VAR_4, "%8.8s-%-5d %3d",
         VAR_11, VAR_14, VAR_5->cpu);
  FUNC_3(VAR_3, VAR_4, VAR_5);
 } else
  FUNC_8(VAR_4, "%16s-%-5d [%03d]", VAR_11, VAR_14, VAR_5->cpu);

 if (VAR_3->flags & VAR_2) {
  VAR_9 = VAR_10;
  VAR_16 = 9;
 } else {
  VAR_9 = (VAR_10 + 500) / VAR_1;
  VAR_16 = 6;
 }

 FUNC_8(VAR_4, " %5lu.%0*lu: %s: ", VAR_8, VAR_16, VAR_9, VAR_7->name);


 VAR_15 = FUNC_6(VAR_7->name);
 if (VAR_15 < 20)
  FUNC_8(VAR_4, "%.*s", 20 - VAR_15, VAR_6);

 FUNC_4(VAR_4, VAR_7, VAR_5);
}
