
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_session {int dummy; } ;
struct perf_event_attr {int sample_type; } ;
struct perf_evsel {struct perf_event_attr attr; } ;
struct TYPE_2__ {int use_callchain; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ FUNC_1 (struct perf_evsel*,int ,char*,int) ;
 int FUNC_2 (struct perf_session*,char*) ;
 int FUNC_3 (char*) ;
 TYPE_1__ VAR_24 ;

__attribute__((used)) static int FUNC_4(struct perf_evsel *VAR_25,
      struct perf_session *VAR_26)
{
 struct perf_event_attr *VAR_27 = &VAR_25->attr;

 if (FUNC_0(VAR_22) &&
  !FUNC_2(VAR_26, "record -R"))
  return -VAR_3;

 if (FUNC_0(VAR_4)) {
  if (FUNC_1(VAR_25, VAR_14, "IP",
         VAR_7))
   return -VAR_3;

  if (!VAR_23 &&
      !(VAR_27->sample_type & VAR_12))
   VAR_24.use_callchain = 0;
 }

 if (FUNC_0(VAR_0) &&
  FUNC_1(VAR_25, VAR_11, "ADDR",
     VAR_5))
  return -VAR_3;

 if (FUNC_0(VAR_18) && !FUNC_0(VAR_4) && !FUNC_0(VAR_0)) {
  FUNC_3("Display of symbols requested but neither sample IP nor "
      "sample address\nis selected. Hence, no addresses to convert "
         "to symbols.\n");
  return -VAR_3;
 }
 if (FUNC_0(VAR_19) && !FUNC_0(VAR_18)) {
  FUNC_3("Display of offsets requested but symbol is not"
         "selected.\n");
  return -VAR_3;
 }
 if (FUNC_0(VAR_2) && !FUNC_0(VAR_4) && !FUNC_0(VAR_0)) {
  FUNC_3("Display of DSO requested but neither sample IP nor "
      "sample address\nis selected. Hence, no addresses to convert "
         "to DSO.\n");
  return -VAR_3;
 }

 if ((FUNC_0(VAR_17) || FUNC_0(VAR_20)) &&
  FUNC_1(VAR_25, VAR_15, "TID",
     VAR_9|VAR_8))
  return -VAR_3;

 if (FUNC_0(VAR_21) &&
  FUNC_1(VAR_25, VAR_16, "TIME",
     VAR_10))
  return -VAR_3;

 if (FUNC_0(VAR_1) &&
  FUNC_1(VAR_25, VAR_13, "CPU",
     VAR_6))
  return -VAR_3;

 return 0;
}
