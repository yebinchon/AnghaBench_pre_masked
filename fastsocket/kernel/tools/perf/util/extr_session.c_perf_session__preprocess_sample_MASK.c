
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; } ;
union perf_event {TYPE_1__ header; } ;
struct TYPE_6__ {int total_invalid_chains; int nr_invalid_chains; } ;
struct TYPE_5__ {TYPE_3__ stats; } ;
struct perf_session {TYPE_2__ hists; int evlist; } ;
struct perf_sample {scalar_t__ period; int callchain; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,union perf_event*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct perf_session *VAR_3,
        union perf_event *VAR_4, struct perf_sample *VAR_5)
{
 if (VAR_4->header.type != VAR_1 ||
     !(FUNC_1(VAR_3->evlist) & VAR_2))
  return 0;

 if (!FUNC_0(VAR_5->callchain, VAR_4)) {
  FUNC_2("call-chain problem with event, skipping it.\n");
  ++VAR_3->hists.stats.nr_invalid_chains;
  VAR_3->hists.stats.total_invalid_chains += VAR_5->period;
  return -VAR_0;
 }
 return 0;
}
