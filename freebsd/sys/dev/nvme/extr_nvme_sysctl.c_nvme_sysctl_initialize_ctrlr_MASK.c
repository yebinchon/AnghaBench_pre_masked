
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct nvme_controller {int num_io_queues; int * ioq; int adminq; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct sysctl_oid* FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,int *,char*) ;
 int FUNC_1 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,struct nvme_controller*,int ,int ,char*,char*) ;
 int FUNC_2 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,int*,int ,char*) ;
 struct sysctl_oid_list* FUNC_3 (struct sysctl_oid*) ;
 struct sysctl_ctx_list* FUNC_4 (int ) ;
 struct sysctl_oid* FUNC_5 (int ) ;
 int FUNC_6 (int *,struct sysctl_ctx_list*,struct sysctl_oid*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_7 (char*,int,char*,int) ;

void
FUNC_8(struct nvme_controller *VAR_14)
{
 struct sysctl_ctx_list *VAR_15;
 struct sysctl_oid *VAR_16, *VAR_17;
 struct sysctl_oid_list *VAR_18;

 char VAR_19[16];
 int VAR_20;

 VAR_15 = FUNC_4(VAR_14->dev);
 VAR_16 = FUNC_5(VAR_14->dev);
 VAR_18 = FUNC_3(VAR_16);

 FUNC_2(VAR_15, VAR_18, VAR_4, "num_io_queues",
     VAR_0, &VAR_14->num_io_queues, 0,
     "Number of I/O queue pairs");

 FUNC_1(VAR_15, VAR_18, VAR_4,
     "int_coal_time", VAR_3 | VAR_1, VAR_14, 0,
     VAR_7, "IU",
     "Interrupt coalescing timeout (in microseconds)");

 FUNC_1(VAR_15, VAR_18, VAR_4,
     "int_coal_threshold", VAR_3 | VAR_1, VAR_14, 0,
     VAR_6, "IU",
     "Interrupt coalescing threshold");

 FUNC_1(VAR_15, VAR_18, VAR_4,
     "timeout_period", VAR_3 | VAR_1, VAR_14, 0,
     VAR_13, "IU",
     "Timeout period (in seconds)");

 FUNC_1(VAR_15, VAR_18, VAR_4,
     "num_cmds", VAR_2 | VAR_0,
     VAR_14, 0, VAR_8, "IU",
     "Number of commands submitted");

 FUNC_1(VAR_15, VAR_18, VAR_4,
     "num_intr_handler_calls", VAR_2 | VAR_0,
     VAR_14, 0, VAR_10, "IU",
     "Number of times interrupt handler was invoked (will "
     "typically be less than number of actual interrupts "
     "generated due to coalescing)");

 FUNC_1(VAR_15, VAR_18, VAR_4,
     "num_retries", VAR_2 | VAR_0,
     VAR_14, 0, VAR_11, "IU",
     "Number of commands retried");

 FUNC_1(VAR_15, VAR_18, VAR_4,
     "num_failures", VAR_2 | VAR_0,
     VAR_14, 0, VAR_9, "IU",
     "Number of commands ending in failure after all retries");

 FUNC_1(VAR_15, VAR_18, VAR_4,
     "reset_stats", VAR_3 | VAR_1, VAR_14, 0,
     VAR_12, "IU", "Reset statistics to zero");

 VAR_17 = FUNC_0(VAR_15, VAR_18, VAR_4, "adminq",
     VAR_0, ((void*)0), "Admin Queue");

 FUNC_6(&VAR_14->adminq, VAR_15, VAR_17);

 for (VAR_20 = 0; VAR_20 < VAR_14->num_io_queues; VAR_20++) {
  FUNC_7(VAR_19, 16, "ioq%d", VAR_20);
  VAR_17 = FUNC_0(VAR_15, VAR_18, VAR_4,
      VAR_19, VAR_0, ((void*)0), "IO Queue");
  FUNC_6(&VAR_14->ioq[VAR_20], VAR_15,
      VAR_17);
 }
}
