
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct perf_trace_event_type {int dummy; } ;
struct perf_header {int frozen; int data_offset; scalar_t__ needs_swap; } ;
struct perf_session {int * evlist; int pevent; scalar_t__ fd_pipe; struct perf_header header; } ;
struct TYPE_7__ {int size; int offset; } ;
struct TYPE_5__ {int size; int offset; } ;
struct perf_file_header {int attr_size; TYPE_3__ event_types; TYPE_1__ attrs; } ;
struct TYPE_6__ {int size; int offset; } ;
struct perf_file_attr {TYPE_2__ ids; int attr; } ;
struct perf_evsel {scalar_t__ needs_swap; } ;
typedef int off_t ;
typedef int f_id ;
struct TYPE_8__ {int nr_events; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int ,int ) ;
 int * FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct perf_evsel*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,struct perf_evsel*,int ,int,int ) ;
 int * FUNC_6 (int *,int *) ;
 scalar_t__ FUNC_7 (int *,int ) ;
 scalar_t__ FUNC_8 (struct perf_evsel*,int,int) ;
 struct perf_evsel* FUNC_9 (int *,int) ;
 scalar_t__ FUNC_10 (struct perf_file_header*,struct perf_header*,int) ;
 int VAR_5 ;
 scalar_t__ FUNC_11 (struct perf_header*,int,int *,int) ;
 int FUNC_12 (struct perf_header*,int,int *,int ) ;
 int FUNC_13 (struct perf_session*,int) ;
 scalar_t__ FUNC_14 (int,struct perf_header*,struct perf_file_attr*) ;
 TYPE_4__ VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;

int FUNC_15(struct perf_session *VAR_9, int VAR_10)
{
 struct perf_header *VAR_11 = &VAR_9->header;
 struct perf_file_header VAR_12;
 struct perf_file_attr VAR_13;
 u64 VAR_14;
 int VAR_15, VAR_16, VAR_17, VAR_18;

 VAR_9->evlist = FUNC_6(((void*)0), ((void*)0));
 if (VAR_9->evlist == ((void*)0))
  return -VAR_1;

 if (VAR_9->fd_pipe)
  return FUNC_13(VAR_9, VAR_10);

 if (FUNC_10(&VAR_12, VAR_11, VAR_10) < 0)
  return -VAR_0;

 VAR_15 = VAR_12.attrs.size / VAR_12.attr_size;
 FUNC_0(VAR_10, VAR_12.attrs.offset, VAR_3);

 for (VAR_17 = 0; VAR_17 < VAR_15; VAR_17++) {
  struct perf_evsel *VAR_19;
  off_t VAR_20;

  if (FUNC_14(VAR_10, VAR_11, &VAR_13) < 0)
   goto out_errno;

  if (VAR_11->needs_swap)
   FUNC_2(&VAR_13.attr);

  VAR_20 = FUNC_0(VAR_10, 0, VAR_2);
  VAR_19 = FUNC_9(&VAR_13.attr, VAR_17);

  if (VAR_19 == ((void*)0))
   goto out_delete_evlist;

  VAR_19->needs_swap = VAR_11->needs_swap;




  FUNC_3(VAR_9->evlist, VAR_19);

  VAR_16 = VAR_13.ids.size / sizeof(u64);





  if (FUNC_8(VAR_19, 1, VAR_16))
   goto out_delete_evlist;

  FUNC_0(VAR_10, VAR_13.ids.offset, VAR_3);

  for (VAR_18 = 0; VAR_18 < VAR_16; VAR_18++) {
   if (FUNC_11(VAR_11, VAR_10, &VAR_14, sizeof(VAR_14)))
    goto out_errno;

   FUNC_5(VAR_9->evlist, VAR_19, 0, VAR_18, VAR_14);
  }

  FUNC_0(VAR_10, VAR_20, VAR_3);
 }

 VAR_6.nr_events = VAR_15;

 if (VAR_12.event_types.size) {
  FUNC_0(VAR_10, VAR_12.event_types.offset, VAR_3);
  VAR_8 = FUNC_1(VAR_12.event_types.size);
  if (VAR_8 == ((void*)0))
   return -VAR_1;
  if (FUNC_11(VAR_11, VAR_10, VAR_8,
          VAR_12.event_types.size))
   goto out_errno;
  VAR_7 = VAR_12.event_types.size / sizeof(struct perf_trace_event_type);
 }

 FUNC_12(VAR_11, VAR_10, &VAR_9->pevent,
          VAR_5);

 FUNC_0(VAR_10, VAR_11->data_offset, VAR_3);

 if (FUNC_7(VAR_9->evlist,
         VAR_9->pevent))
  goto out_delete_evlist;

 VAR_11->frozen = 1;
 return 0;
out_errno:
 return -VAR_4;

out_delete_evlist:
 FUNC_4(VAR_9->evlist);
 VAR_9->evlist = ((void*)0);
 return -VAR_1;
}
