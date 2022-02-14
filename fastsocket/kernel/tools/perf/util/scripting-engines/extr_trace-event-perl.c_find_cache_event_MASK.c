
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int config; } ;
struct perf_evsel {struct event_format* tp_format; TYPE_2__ attr; } ;
struct TYPE_3__ {int args; } ;
struct event_format {char* system; char* name; TYPE_1__ print_fmt; } ;


 int FUNC_0 (struct event_format*,char*,int ) ;
 struct event_format** VAR_0 ;
 int FUNC_1 (char*,char*,char*,char*) ;

__attribute__((used)) static inline struct event_format *FUNC_2(struct perf_evsel *VAR_1)
{
 static char VAR_2[256];
 struct event_format *VAR_3;
 int VAR_4 = VAR_1->attr.config;

 if (VAR_0[VAR_4])
  return VAR_0[VAR_4];

 VAR_0[VAR_4] = VAR_3 = VAR_1->tp_format;
 if (!VAR_3)
  return ((void*)0);

 FUNC_1(VAR_2, "%s::%s", VAR_3->system, VAR_3->name);

 FUNC_0(VAR_3, VAR_2, VAR_3->print_fmt.args);

 return VAR_3;
}
