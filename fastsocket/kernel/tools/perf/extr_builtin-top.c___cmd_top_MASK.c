
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct sched_param {scalar_t__ sched_priority; } ;
struct perf_top {scalar_t__ samples; TYPE_2__* session; TYPE_1__* evlist; scalar_t__ realtime_prio; int tool; int target; } ;
typedef int pthread_t ;
struct TYPE_6__ {TYPE_1__* evlist; int host_machine; } ;
struct TYPE_5__ {int nr_fds; int pollfd; int threads; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 (int *,int ,int ,int *) ;
 int FUNC_2 (int *,int ,int *) ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_2__* FUNC_4 (int *,int ,int,int,int *) ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (struct perf_top*) ;
 int FUNC_8 (struct perf_top*) ;
 int FUNC_9 (struct perf_top*) ;
 int FUNC_10 (int ,int ,int) ;
 scalar_t__ FUNC_11 (int *,int *,int ,struct perf_top*) ;
 scalar_t__ FUNC_12 (int ,int ,struct sched_param*) ;
 int FUNC_13 (char*) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static int FUNC_14(struct perf_top *VAR_7)
{
 pthread_t VAR_8;
 int VAR_9;




 VAR_7->session = FUNC_4(((void*)0), VAR_1, 0, 0, ((void*)0));
 if (VAR_7->session == ((void*)0))
  return -VAR_0;

 VAR_9 = FUNC_8(VAR_7);
 if (VAR_9)
  goto out_delete;

 if (FUNC_6(&VAR_7->target))
  FUNC_1(&VAR_7->tool, VAR_7->evlist->threads,
        VAR_5,
        &VAR_7->session->host_machine);
 else
  FUNC_2(&VAR_7->tool, VAR_5,
            &VAR_7->session->host_machine);
 FUNC_9(VAR_7);
 VAR_7->session->evlist = VAR_7->evlist;
 FUNC_5(VAR_7->session);


 FUNC_10(VAR_7->evlist->pollfd, VAR_7->evlist->nr_fds, 100);

 FUNC_7(VAR_7);

 if (FUNC_11(&VAR_8, ((void*)0), (VAR_6 > 0 ? VAR_4 :
           VAR_3), VAR_7)) {
  FUNC_13("Could not create display thread.\n");
  FUNC_0(-1);
 }

 if (VAR_7->realtime_prio) {
  struct sched_param VAR_10;

  VAR_10.sched_priority = VAR_7->realtime_prio;
  if (FUNC_12(0, VAR_2, &VAR_10)) {
   FUNC_13("Could not set realtime priority.\n");
   FUNC_0(-1);
  }
 }

 while (1) {
  u64 VAR_11 = VAR_7->samples;

  FUNC_7(VAR_7);

  if (VAR_11 == VAR_7->samples)
   VAR_9 = FUNC_10(VAR_7->evlist->pollfd, VAR_7->evlist->nr_fds, 100);
 }

out_delete:
 FUNC_3(VAR_7->session);
 VAR_7->session = ((void*)0);

 return 0;
}
