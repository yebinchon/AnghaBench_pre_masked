
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_event_attr {int read_format; int inherit; int disabled; int enable_on_exec; scalar_t__ exclude_host; scalar_t__ exclude_guest; } ;
struct perf_evsel {struct perf_event_attr attr; } ;
struct TYPE_2__ {int threads; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct perf_evsel*) ;
 int FUNC_1 (struct perf_evsel*) ;
 int FUNC_2 (struct perf_evsel*,int ) ;
 int FUNC_3 (struct perf_evsel*,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_7(struct perf_evsel *VAR_8)
{
 struct perf_event_attr *VAR_9 = &VAR_8->attr;
 bool VAR_10 = 0;
 int VAR_11;

 if (VAR_6)
  VAR_9->read_format = VAR_1 |
        VAR_2;

 VAR_9->inherit = !VAR_5;

retry:
 if (VAR_10)
  VAR_8->attr.exclude_guest = VAR_8->attr.exclude_host = 0;

 if (FUNC_4(&VAR_7)) {
  VAR_11 = FUNC_2(VAR_8, FUNC_0(VAR_8));
  if (VAR_11)
   goto check_ret;
  return 0;
 }

 if (!FUNC_5(&VAR_7) &&
     !FUNC_1(VAR_8)) {
  VAR_9->disabled = 1;
  VAR_9->enable_on_exec = 1;
 }

 VAR_11 = FUNC_3(VAR_8, VAR_4->threads);
 if (!VAR_11)
  return 0;

check_ret:
 if (VAR_11 && VAR_3 == VAR_0) {
  if (!VAR_10 &&
      (VAR_8->attr.exclude_guest || VAR_8->attr.exclude_host)) {
   FUNC_6("Old kernel, cannot exclude "
     "guest or host samples.\n");
   VAR_10 = 1;
   goto retry;
  }
 }
 return VAR_11;
}
