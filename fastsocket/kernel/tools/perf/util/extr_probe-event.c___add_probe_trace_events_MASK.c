
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct strlist {int dummy; } ;
struct TYPE_4__ {char* symbol; } ;
struct probe_trace_event {char* event; char* group; TYPE_2__ point; } ;
struct TYPE_3__ {char* function; } ;
struct perf_probe_event {char* event; char* group; TYPE_1__ point; scalar_t__ uprobes; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int,char const*,struct strlist*,int) ;
 struct strlist* FUNC_2 (int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (struct perf_probe_event*) ;
 void* FUNC_8 (char const*) ;
 int FUNC_9 (struct strlist*,char const*) ;
 int FUNC_10 (struct strlist*) ;
 int FUNC_11 (int,struct probe_trace_event*) ;

__attribute__((used)) static int FUNC_12(struct perf_probe_event *VAR_3,
         struct probe_trace_event *VAR_4,
         int VAR_5, bool VAR_6)
{
 int VAR_7, VAR_8, VAR_9;
 struct probe_trace_event *VAR_10 = ((void*)0);
 char VAR_11[64];
 const char *VAR_12, *VAR_13;
 struct strlist *VAR_14;

 if (VAR_3->uprobes)
  VAR_8 = FUNC_4(1);
 else
  VAR_8 = FUNC_3(1);

 if (VAR_8 < 0)
  return VAR_8;

 VAR_14 = FUNC_2(VAR_8, 0);
 if (!VAR_14) {
  FUNC_5("Failed to get current event list.\n");
  return -VAR_0;
 }

 VAR_9 = 0;
 FUNC_6("Added new event%s\n", (VAR_5 > 1) ? "s:" : ":");
 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  VAR_10 = &VAR_4[VAR_7];
  if (VAR_3->event)
   VAR_12 = VAR_3->event;
  else
   if (VAR_3->point.function)
    VAR_12 = VAR_3->point.function;
   else
    VAR_12 = VAR_10->point.symbol;
  if (VAR_3->group)
   VAR_13 = VAR_3->group;
  else
   VAR_13 = VAR_2;


  VAR_9 = FUNC_1(VAR_11, 64, VAR_12,
      VAR_14, VAR_6);
  if (VAR_9 < 0)
   break;
  VAR_12 = VAR_11;

  VAR_10->event = FUNC_8(VAR_12);
  VAR_10->group = FUNC_8(VAR_13);
  if (VAR_10->event == ((void*)0) || VAR_10->group == ((void*)0)) {
   VAR_9 = -VAR_1;
   break;
  }
  VAR_9 = FUNC_11(VAR_8, VAR_10);
  if (VAR_9 < 0)
   break;

  FUNC_9(VAR_14, VAR_12);


  VAR_12 = VAR_3->event;
  VAR_13 = VAR_3->group;
  VAR_3->event = VAR_10->event;
  VAR_3->group = VAR_10->group;
  FUNC_7(VAR_3);

  VAR_3->event = (char *)VAR_12;
  VAR_3->group = (char *)VAR_13;







  VAR_6 = 1;
 }

 if (VAR_9 >= 0) {

  FUNC_6("\nYou can now use it in all perf tools, such as:\n\n");
  FUNC_6("\tperf record -e %s:%s -aR sleep 1\n\n", VAR_10->group,
    VAR_10->event);
 }

 FUNC_10(VAR_14);
 FUNC_0(VAR_8);
 return VAR_9;
}
