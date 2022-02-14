
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct isci_softc {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sysctl_ctx_list*,int ,int ,char*,int,struct isci_softc*,int ,int ,char*,char*) ;
 int FUNC_1 (struct sysctl_oid*) ;
 struct sysctl_ctx_list* FUNC_2 (int ) ;
 struct sysctl_oid* FUNC_3 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

void FUNC_4(struct isci_softc *VAR_11)
{
 struct sysctl_ctx_list *VAR_12 = FUNC_2(VAR_11->device);
 struct sysctl_oid *VAR_13 = FUNC_3(VAR_11->device);

 FUNC_0(VAR_12, FUNC_1(VAR_13), VAR_2,
     "coalesce_timeout", VAR_1 | VAR_0, VAR_11, 0,
     VAR_4, "IU",
     "Interrupt coalescing timeout (in microseconds)");

 FUNC_0(VAR_12, FUNC_1(VAR_13), VAR_2,
     "coalesce_number", VAR_1 | VAR_0, VAR_11, 0,
     VAR_3, "IU",
     "Interrupt coalescing number");

 FUNC_0(VAR_12, FUNC_1(VAR_13), VAR_2,
     "reset_remote_device_on_controller0", VAR_1| VAR_0,
     VAR_11, 0, VAR_7, "IU",
     "Reset remote device on controller 0");

 FUNC_0(VAR_12, FUNC_1(VAR_13), VAR_2,
     "reset_remote_device_on_controller1", VAR_1| VAR_0,
     VAR_11, 0, VAR_8, "IU",
     "Reset remote device on controller 1");

 FUNC_0(VAR_12, FUNC_1(VAR_13), VAR_2,
     "stop_phy", VAR_1| VAR_0, VAR_11, 0, VAR_10,
     "IU", "Stop PHY on a controller");

 FUNC_0(VAR_12, FUNC_1(VAR_13), VAR_2,
     "start_phy", VAR_1| VAR_0, VAR_11, 0,
     VAR_9, "IU", "Start PHY on a controller");

 FUNC_0(VAR_12, FUNC_1(VAR_13), VAR_2,
     "log_frozen_lun_masks", VAR_1| VAR_0, VAR_11, 0,
     VAR_6, "IU",
     "Log frozen lun masks to kernel log");

 FUNC_0(VAR_12, FUNC_1(VAR_13), VAR_2,
     "fail_on_task_timeout", VAR_1 | VAR_0, VAR_11, 0,
     VAR_5, "IU",
     "Fail a command that has encountered a task management timeout");
}
