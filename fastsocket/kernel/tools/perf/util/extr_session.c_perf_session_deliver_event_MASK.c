
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int lost; } ;
struct TYPE_5__ {int type; } ;
union perf_event {TYPE_2__ lost; TYPE_1__ header; } ;
typedef int u64 ;
struct perf_tool {int (* sample ) (struct perf_tool*,union perf_event*,struct perf_sample*,struct perf_evsel*,struct machine*) ;int (* mmap ) (struct perf_tool*,union perf_event*,struct perf_sample*,struct machine*) ;int (* comm ) (struct perf_tool*,union perf_event*,struct perf_sample*,struct machine*) ;int (* fork ) (struct perf_tool*,union perf_event*,struct perf_sample*,struct machine*) ;int (* exit ) (struct perf_tool*,union perf_event*,struct perf_sample*,struct machine*) ;int (* lost ) (struct perf_tool*,union perf_event*,struct perf_sample*,struct machine*) ;int (* read ) (struct perf_tool*,union perf_event*,struct perf_sample*,struct perf_evsel*,struct machine*) ;int (* throttle ) (struct perf_tool*,union perf_event*,struct perf_sample*,struct machine*) ;int (* unthrottle ) (struct perf_tool*,union perf_event*,struct perf_sample*,struct machine*) ;} ;
struct TYPE_7__ {int nr_unknown_events; int total_lost; int nr_unprocessable_samples; int nr_unknown_id; } ;
struct TYPE_8__ {TYPE_3__ stats; } ;
struct perf_session {TYPE_4__ hists; int evlist; } ;
struct perf_sample {int id; } ;
struct perf_evsel {int hists; } ;
struct machine {int dummy; } ;
 int FUNC_0 (struct perf_session*,union perf_event*,int ,struct perf_sample*) ;
 int FUNC_1 (struct perf_evsel*,union perf_event*,struct perf_sample*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct perf_tool*,union perf_event*,struct perf_sample*,struct machine*) ;
 struct perf_evsel* FUNC_4 (int ,int ) ;
 struct machine* FUNC_5 (struct perf_session*,union perf_event*) ;
 int FUNC_6 (struct perf_tool*,union perf_event*,struct perf_sample*,struct perf_evsel*,struct machine*) ;
 int FUNC_7 (struct perf_tool*,union perf_event*,struct perf_sample*,struct machine*) ;
 int FUNC_8 (struct perf_tool*,union perf_event*,struct perf_sample*,struct machine*) ;
 int FUNC_9 (struct perf_tool*,union perf_event*,struct perf_sample*,struct machine*) ;
 int FUNC_10 (struct perf_tool*,union perf_event*,struct perf_sample*,struct machine*) ;
 int FUNC_11 (struct perf_tool*,union perf_event*,struct perf_sample*,struct machine*) ;
 int FUNC_12 (struct perf_tool*,union perf_event*,struct perf_sample*,struct perf_evsel*,struct machine*) ;
 int FUNC_13 (struct perf_tool*,union perf_event*,struct perf_sample*,struct machine*) ;
 int FUNC_14 (struct perf_tool*,union perf_event*,struct perf_sample*,struct machine*) ;

__attribute__((used)) static int FUNC_15(struct perf_session *VAR_0,
          union perf_event *VAR_1,
          struct perf_sample *VAR_2,
          struct perf_tool *VAR_3,
          u64 VAR_4)
{
 struct perf_evsel *VAR_5;
 struct machine *VAR_6;

 FUNC_0(VAR_0, VAR_1, VAR_4, VAR_2);

 VAR_5 = FUNC_4(VAR_0->evlist, VAR_2->id);
 if (VAR_5 != ((void*)0) && VAR_1->header.type != 130) {
  FUNC_2(&VAR_5->hists, VAR_1->header.type);
 }

 VAR_6 = FUNC_5(VAR_0, VAR_1);

 switch (VAR_1->header.type) {
 case 130:
  FUNC_1(VAR_5, VAR_1, VAR_2);
  if (VAR_5 == ((void*)0)) {
   ++VAR_0->hists.stats.nr_unknown_id;
   return 0;
  }
  if (VAR_6 == ((void*)0)) {
   ++VAR_0->hists.stats.nr_unprocessable_samples;
   return 0;
  }
  return VAR_3->sample(VAR_3, VAR_1, VAR_2, VAR_5, VAR_6);
 case 132:
  return VAR_3->mmap(VAR_3, VAR_1, VAR_2, VAR_6);
 case 136:
  return VAR_3->comm(VAR_3, VAR_1, VAR_2, VAR_6);
 case 134:
  return VAR_3->fork(VAR_3, VAR_1, VAR_2, VAR_6);
 case 135:
  return VAR_3->exit(VAR_3, VAR_1, VAR_2, VAR_6);
 case 133:
  if (VAR_3->lost == FUNC_3)
   VAR_0->hists.stats.total_lost += VAR_1->lost.lost;
  return VAR_3->lost(VAR_3, VAR_1, VAR_2, VAR_6);
 case 131:
  return VAR_3->read(VAR_3, VAR_1, VAR_2, VAR_5, VAR_6);
 case 129:
  return VAR_3->throttle(VAR_3, VAR_1, VAR_2, VAR_6);
 case 128:
  return VAR_3->unthrottle(VAR_3, VAR_1, VAR_2, VAR_6);
 default:
  ++VAR_0->hists.stats.nr_unknown_events;
  return -1;
 }
}
