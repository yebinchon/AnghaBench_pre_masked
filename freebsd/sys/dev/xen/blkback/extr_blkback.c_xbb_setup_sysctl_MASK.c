
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ring_pages; } ;
struct xbb_softc {TYPE_1__ ring_config; int max_request_size; int max_request_segments; int max_requests; int request_shortages; int kva_shortages; int total_dispatch; int normal_dispatch; int forced_dispatch; int reqs_completed_with_error; int reqs_queued_for_completion; int reqs_completed; int reqs_received; int no_coalesce_reqs; int flush_interval; int disable_flush; int dev; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sysctl_ctx_list*,int ,int ,char*,int ,int *,int ,char*) ;
 int FUNC_1 (struct sysctl_ctx_list*,int ,int ,char*,int ,int *,int ,char*) ;
 int FUNC_2 (struct sysctl_ctx_list*,int ,int ,char*,int ,int *,char*) ;
 int FUNC_3 (struct sysctl_oid*) ;
 struct sysctl_ctx_list* FUNC_4 (int ) ;
 struct sysctl_oid* FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(struct xbb_softc *VAR_3)
{
 struct sysctl_ctx_list *VAR_4 = ((void*)0);
 struct sysctl_oid *VAR_5 = ((void*)0);

 VAR_4 = FUNC_4(VAR_3->dev);
 if (VAR_4 == ((void*)0))
  return;

 VAR_5 = FUNC_5(VAR_3->dev);
 if (VAR_5 == ((void*)0))
  return;

 FUNC_0(VAR_4, FUNC_3(VAR_5), VAR_2,
         "disable_flush", VAR_1, &VAR_3->disable_flush, 0,
         "fake the flush command");

 FUNC_0(VAR_4, FUNC_3(VAR_5), VAR_2,
         "flush_interval", VAR_1, &VAR_3->flush_interval, 0,
         "send a real flush for N flush requests");

 FUNC_0(VAR_4, FUNC_3(VAR_5), VAR_2,
         "no_coalesce_reqs", VAR_1, &VAR_3->no_coalesce_reqs,0,
         "Don't coalesce contiguous requests");

 FUNC_2(VAR_4, FUNC_3(VAR_5), VAR_2,
    "reqs_received", VAR_1, &VAR_3->reqs_received,
    "how many I/O requests we have received");

 FUNC_2(VAR_4, FUNC_3(VAR_5), VAR_2,
    "reqs_completed", VAR_1, &VAR_3->reqs_completed,
    "how many I/O requests have been completed");

 FUNC_2(VAR_4, FUNC_3(VAR_5), VAR_2,
    "reqs_queued_for_completion", VAR_1,
    &VAR_3->reqs_queued_for_completion,
    "how many I/O requests queued but not yet pushed");

 FUNC_2(VAR_4, FUNC_3(VAR_5), VAR_2,
    "reqs_completed_with_error", VAR_1,
    &VAR_3->reqs_completed_with_error,
    "how many I/O requests completed with error status");

 FUNC_2(VAR_4, FUNC_3(VAR_5), VAR_2,
    "forced_dispatch", VAR_1, &VAR_3->forced_dispatch,
    "how many I/O dispatches were forced");

 FUNC_2(VAR_4, FUNC_3(VAR_5), VAR_2,
    "normal_dispatch", VAR_1, &VAR_3->normal_dispatch,
    "how many I/O dispatches were normal");

 FUNC_2(VAR_4, FUNC_3(VAR_5), VAR_2,
    "total_dispatch", VAR_1, &VAR_3->total_dispatch,
    "total number of I/O dispatches");

 FUNC_2(VAR_4, FUNC_3(VAR_5), VAR_2,
    "kva_shortages", VAR_1, &VAR_3->kva_shortages,
    "how many times we have run out of KVA");

 FUNC_2(VAR_4, FUNC_3(VAR_5), VAR_2,
    "request_shortages", VAR_1,
    &VAR_3->request_shortages,
    "how many times we have run out of requests");

 FUNC_1(VAR_4, FUNC_3(VAR_5), VAR_2,
          "max_requests", VAR_0, &VAR_3->max_requests, 0,
          "maximum outstanding requests (negotiated)");

 FUNC_1(VAR_4, FUNC_3(VAR_5), VAR_2,
          "max_request_segments", VAR_0,
          &VAR_3->max_request_segments, 0,
          "maximum number of pages per requests (negotiated)");

 FUNC_1(VAR_4, FUNC_3(VAR_5), VAR_2,
          "max_request_size", VAR_0,
          &VAR_3->max_request_size, 0,
          "maximum size in bytes of a request (negotiated)");

 FUNC_1(VAR_4, FUNC_3(VAR_5), VAR_2,
          "ring_pages", VAR_0,
          &VAR_3->ring_config.ring_pages, 0,
          "communication channel pages (negotiated)");
}
