
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct perf_record_opts {int target; scalar_t__ pipe_output; } ;
struct TYPE_4__ {scalar_t__ pid; int cork_fd; } ;
struct perf_evlist {TYPE_2__ workload; TYPE_1__* threads; } ;
struct TYPE_3__ {scalar_t__* map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char const*,char**) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int ,int ) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (char const*) ;
 scalar_t__ FUNC_10 (int*) ;
 int FUNC_11 (int,char*,int) ;

int FUNC_12(struct perf_evlist *VAR_3,
      struct perf_record_opts *VAR_4,
      const char *VAR_5[])
{
 int VAR_6[2], VAR_7[2];
 char VAR_8;

 if (FUNC_10(VAR_6) < 0) {
  FUNC_9("failed to create 'ready' pipe");
  return -1;
 }

 if (FUNC_10(VAR_7) < 0) {
  FUNC_9("failed to create 'go' pipe");
  goto out_close_ready_pipe;
 }

 VAR_3->workload.pid = FUNC_5();
 if (VAR_3->workload.pid < 0) {
  FUNC_9("failed to fork");
  goto out_close_pipes;
 }

 if (!VAR_3->workload.pid) {
  if (VAR_4->pipe_output)
   FUNC_1(2, 1);

  FUNC_0(VAR_6[0]);
  FUNC_0(VAR_7[1]);
  FUNC_4(VAR_7[0], VAR_1, VAR_0);






  FUNC_2("", (char **)VAR_5);




  FUNC_0(VAR_6[1]);




  if (FUNC_11(VAR_7[0], &VAR_8, 1) == -1)
   FUNC_9("unable to read pipe");

  FUNC_2(VAR_5[0], (char **)VAR_5);

  FUNC_9(VAR_5[0]);
  FUNC_7(FUNC_6(), VAR_2);
  FUNC_3(-1);
 }

 if (FUNC_8(&VAR_4->target))
  VAR_3->threads->map[0] = VAR_3->workload.pid;

 FUNC_0(VAR_6[1]);
 FUNC_0(VAR_7[0]);



 if (FUNC_11(VAR_6[0], &VAR_8, 1) == -1) {
  FUNC_9("unable to read pipe");
  goto out_close_pipes;
 }

 VAR_3->workload.cork_fd = VAR_7[1];
 FUNC_0(VAR_6[0]);
 return 0;

out_close_pipes:
 FUNC_0(VAR_7[0]);
 FUNC_0(VAR_7[1]);
out_close_ready_pipe:
 FUNC_0(VAR_6[0]);
 FUNC_0(VAR_6[1]);
 return -1;
}
