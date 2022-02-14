
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pevent {int dummy; } ;
struct TYPE_2__ {int config; } ;
struct perf_evsel {struct event_format* tp_format; int * name; TYPE_1__ attr; } ;
struct event_format {char* system; char* name; } ;
typedef int bf ;


 struct event_format* FUNC_0 (struct pevent*,int ) ;
 int FUNC_1 (char*,int,char*,char*,char*) ;
 int * FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct perf_evsel *VAR_0,
      struct pevent *VAR_1)
{
 struct event_format *VAR_2;
 char VAR_3[128];


 if (VAR_0->tp_format)
  return 0;

 VAR_2 = FUNC_0(VAR_1, VAR_0->attr.config);
 if (VAR_2 == ((void*)0))
  return -1;

 if (!VAR_0->name) {
  FUNC_1(VAR_3, sizeof(VAR_3), "%s:%s", VAR_2->system, VAR_2->name);
  VAR_0->name = FUNC_2(VAR_3);
  if (VAR_0->name == ((void*)0))
   return -1;
 }

 VAR_0->tp_format = VAR_2;
 return 0;
}
