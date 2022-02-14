
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef void* u32 ;
struct pyrf_evsel {int evsel; } ;
struct perf_event_attr {int sample_type; scalar_t__ sample_freq; void* sample_id_all; void* mmap_data; void* precise_ip; void* watermark; void* task; void* enable_on_exec; void* inherit_stat; void* freq; void* comm; void* mmap; void* exclude_idle; void* exclude_hv; void* exclude_kernel; void* exclude_user; void* exclusive; void* pinned; void* inherit; void* disabled; scalar_t__ sample_period; int bp_len; int bp_addr; int bp_type; int wakeup_events; int read_format; int config; int type; } ;
typedef int PyObject ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *,char*,char**,int *,int *,scalar_t__*,scalar_t__*,int*,int *,void**,void**,void**,void**,void**,void**,void**,void**,void**,void**,void**,void**,void**,void**,void**,void**,void**,void**,int *,int *,int *,int *,int*) ;
 int FUNC_1 (int *,struct perf_event_attr*,int) ;

__attribute__((used)) static int FUNC_2(struct pyrf_evsel *VAR_4,
       PyObject *VAR_5, PyObject *VAR_6)
{
 struct perf_event_attr VAR_7 = {
  .type = VAR_3,
  .config = VAR_0,
  .sample_type = VAR_1 | VAR_2,
 };
 static char *VAR_8[] = {
  "type",
  "config",
  "sample_freq",
  "sample_period",
  "sample_type",
  "read_format",
  "disabled",
  "inherit",
  "pinned",
  "exclusive",
  "exclude_user",
  "exclude_kernel",
  "exclude_hv",
  "exclude_idle",
  "mmap",
  "comm",
  "freq",
  "inherit_stat",
  "enable_on_exec",
  "task",
  "watermark",
  "precise_ip",
  "mmap_data",
  "sample_id_all",
  "wakeup_events",
  "bp_type",
  "bp_addr",
  "bp_len",
   ((void*)0)
 };
 u64 VAR_9 = 0;
 u32 VAR_10 = 0,
     VAR_11 = 0,
     VAR_12 = 0,
     VAR_13 = 0,
     VAR_14 = 0,
     VAR_15 = 0,
     VAR_16 = 0,
     VAR_17 = 0,
     VAR_18 = 0,
     VAR_19 = 0,
     VAR_20 = 1,
     VAR_21 = 0,
     VAR_22 = 0,
     VAR_23 = 0,
     VAR_24 = 0,
     VAR_25 = 0,
     VAR_26 = 0,
     VAR_27 = 1;
 int VAR_28 = 0;

 if (!FUNC_0(VAR_5, VAR_6,
      "|iKiKKiiiiiiiiiiiiiiiiiiiiiKK", VAR_8,
      &VAR_7.type, &VAR_7.config, &VAR_7.sample_freq,
      &VAR_9, &VAR_7.sample_type,
      &VAR_7.read_format, &VAR_10, &VAR_11,
      &VAR_12, &VAR_13, &VAR_14,
      &VAR_15, &VAR_16, &VAR_17,
      &VAR_18, &VAR_19, &VAR_20, &VAR_21,
      &VAR_22, &VAR_23, &VAR_24,
      &VAR_25, &VAR_26, &VAR_27,
      &VAR_7.wakeup_events, &VAR_7.bp_type,
      &VAR_7.bp_addr, &VAR_7.bp_len, &VAR_28))
  return -1;


 if (VAR_9 != 0) {
  if (VAR_7.sample_freq != 0)
   return -1;
  VAR_7.sample_period = VAR_9;
 }


 VAR_7.disabled = VAR_10;
 VAR_7.inherit = VAR_11;
 VAR_7.pinned = VAR_12;
 VAR_7.exclusive = VAR_13;
 VAR_7.exclude_user = VAR_14;
 VAR_7.exclude_kernel = VAR_15;
 VAR_7.exclude_hv = VAR_16;
 VAR_7.exclude_idle = VAR_17;
 VAR_7.mmap = VAR_18;
 VAR_7.comm = VAR_19;
 VAR_7.freq = VAR_20;
 VAR_7.inherit_stat = VAR_21;
 VAR_7.enable_on_exec = VAR_22;
 VAR_7.task = VAR_23;
 VAR_7.watermark = VAR_24;
 VAR_7.precise_ip = VAR_25;
 VAR_7.mmap_data = VAR_26;
 VAR_7.sample_id_all = VAR_27;

 FUNC_1(&VAR_4->evsel, &VAR_7, VAR_28);
 return 0;
}
