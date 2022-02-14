
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int misc; scalar_t__ type; } ;
struct TYPE_5__ {int pid; } ;
union perf_event {TYPE_2__ header; TYPE_1__ ip; } ;
typedef int u8 ;
struct perf_top {int tool; int guest_us_samples; int guest_kernel_samples; int hide_kernel_symbols; int kernel_samples; int hide_user_symbols; int us_samples; int samples; int evlist; struct perf_session* session; } ;
struct TYPE_7__ {int nr_unknown_events; } ;
struct TYPE_8__ {TYPE_3__ stats; } ;
struct perf_session {TYPE_4__ hists; int evlist; } ;
struct perf_sample {int id; } ;
struct perf_evsel {int hists; } ;
struct machine {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;




 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (struct machine*,union perf_event*) ;
 int FUNC_3 (int *,union perf_event*,struct perf_evsel*,struct perf_sample*,struct machine*) ;
 struct perf_evsel* FUNC_4 (int ,int ) ;
 union perf_event* FUNC_5 (int ,int) ;
 int FUNC_6 (int ,union perf_event*,struct perf_sample*) ;
 struct machine* FUNC_7 (struct perf_session*) ;
 struct machine* FUNC_8 (struct perf_session*,int ) ;
 int FUNC_9 (char*,int) ;

__attribute__((used)) static void FUNC_10(struct perf_top *VAR_3, int VAR_4)
{
 struct perf_sample VAR_5;
 struct perf_evsel *VAR_6;
 struct perf_session *VAR_7 = VAR_3->session;
 union perf_event *VAR_8;
 struct machine *VAR_9;
 u8 VAR_10;
 int VAR_11;

 while ((VAR_8 = FUNC_5(VAR_3->evlist, VAR_4)) != ((void*)0)) {
  VAR_11 = FUNC_6(VAR_3->evlist, VAR_8, &VAR_5);
  if (VAR_11) {
   FUNC_9("Can't parse sample, err = %d\n", VAR_11);
   continue;
  }

  VAR_6 = FUNC_4(VAR_7->evlist, VAR_5.id);
  FUNC_0(VAR_6 != ((void*)0));

  VAR_10 = VAR_8->header.misc & VAR_1;

  if (VAR_8->header.type == VAR_2)
   ++VAR_3->samples;

  switch (VAR_10) {
  case 128:
   ++VAR_3->us_samples;
   if (VAR_3->hide_user_symbols)
    continue;
   VAR_9 = FUNC_7(VAR_7);
   break;
  case 129:
   ++VAR_3->kernel_samples;
   if (VAR_3->hide_kernel_symbols)
    continue;
   VAR_9 = FUNC_7(VAR_7);
   break;
  case 131:
   ++VAR_3->guest_kernel_samples;
   VAR_9 = FUNC_8(VAR_7, VAR_8->ip.pid);
   break;
  case 130:
   ++VAR_3->guest_us_samples;





  default:
   continue;
  }


  if (VAR_8->header.type == VAR_2) {
   FUNC_3(&VAR_3->tool, VAR_8, VAR_6,
         &VAR_5, VAR_9);
  } else if (VAR_8->header.type < VAR_0) {
   FUNC_1(&VAR_6->hists, VAR_8->header.type);
   FUNC_2(VAR_9, VAR_8);
  } else
   ++VAR_7->hists.stats.nr_unknown_events;
 }
}
