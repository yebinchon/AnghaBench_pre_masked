
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; } ;
union perf_event {TYPE_2__ header; } ;
typedef int u64 ;
struct perf_tool {scalar_t__ ordered_samples; } ;
struct TYPE_3__ {scalar_t__ needs_swap; } ;
struct perf_session {int evlist; int hists; TYPE_1__ header; } ;
struct perf_sample {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (union perf_event*,int ) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int ,union perf_event*,struct perf_sample*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct perf_session*,union perf_event*,struct perf_sample*) ;
 int FUNC_5 (struct perf_session*,union perf_event*,struct perf_tool*,int ) ;
 int FUNC_6 (struct perf_session*,union perf_event*,struct perf_sample*,struct perf_tool*,int ) ;
 int FUNC_7 (struct perf_session*,union perf_event*,struct perf_sample*,int ) ;

__attribute__((used)) static int FUNC_8(struct perf_session *VAR_4,
           union perf_event *VAR_5,
           struct perf_tool *VAR_6,
           u64 VAR_7)
{
 struct perf_sample VAR_8;
 int VAR_9;

 if (VAR_4->header.needs_swap)
  FUNC_0(VAR_5, FUNC_3(VAR_4->evlist));

 if (VAR_5->header.type >= VAR_2)
  return -VAR_0;

 FUNC_1(&VAR_4->hists, VAR_5->header.type);

 if (VAR_5->header.type >= VAR_3)
  return FUNC_5(VAR_4, VAR_5, VAR_6, VAR_7);




 VAR_9 = FUNC_2(VAR_4->evlist, VAR_5, &VAR_8);
 if (VAR_9)
  return VAR_9;


 if (FUNC_4(VAR_4, VAR_5, &VAR_8))
  return 0;

 if (VAR_6->ordered_samples) {
  VAR_9 = FUNC_7(VAR_4, VAR_5, &VAR_8,
            VAR_7);
  if (VAR_9 != -VAR_1)
   return VAR_9;
 }

 return FUNC_6(VAR_4, VAR_5, &VAR_8, VAR_6,
       VAR_7);
}
