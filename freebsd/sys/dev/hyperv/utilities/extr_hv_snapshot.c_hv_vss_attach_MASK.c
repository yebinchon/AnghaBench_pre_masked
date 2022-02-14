
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sysctl_oid_list {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct TYPE_5__ {TYPE_2__* sc; } ;
struct TYPE_6__ {TYPE_1__ app_sc; TYPE_3__* hv_appvss_dev; TYPE_1__ daemon_sc; TYPE_3__* hv_vss_dev; int task; int pending_mutex; int dev; } ;
typedef TYPE_2__ hv_vss_sc ;
typedef int device_t ;
struct TYPE_7__ {TYPE_1__* si_drv1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,int ,char*) ;
 struct sysctl_oid_list* FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ,TYPE_2__*) ;
 int VAR_8 ;
 scalar_t__ FUNC_3 (int ) ;
 struct sysctl_ctx_list* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_6 (int ) ;
 int VAR_12 ;
 int FUNC_7 (char*,int ,int) ;
 int VAR_13 ;
 int FUNC_8 (int,TYPE_3__**,int *,int ,int ,int ,int,int ) ;
 int FUNC_9 (int *,char*,int *,int ) ;
 int FUNC_10 (int ,int ) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_14)
{
 int VAR_15;
 struct sysctl_oid_list *VAR_16;
 struct sysctl_ctx_list *VAR_17;

 hv_vss_sc *VAR_18 = (hv_vss_sc*)FUNC_3(VAR_14);

 VAR_18->dev = VAR_14;
 FUNC_9(&VAR_18->pending_mutex, "hv_vss pending mutex", ((void*)0), VAR_6);

 VAR_17 = FUNC_4(VAR_14);
 VAR_16 = FUNC_1(FUNC_5(VAR_14));

 FUNC_0(VAR_17, VAR_16, VAR_7, "hv_vss_log",
     VAR_1, &VAR_12, 0, "Hyperv VSS service log level");

 FUNC_2(&VAR_18->task, 0, VAR_13, VAR_18);
 FUNC_6(VAR_14);

 VAR_15 = FUNC_8(VAR_4 | VAR_5,
      &VAR_18->hv_vss_dev,
      &VAR_11,
      0,
      VAR_8,
      VAR_3,
      0640,
      VAR_2);

 if (VAR_15 != 0) {
  FUNC_7("Fail to create '%s': %d\n", VAR_2, VAR_15);
  return (VAR_15);
 }
 VAR_18->hv_vss_dev->si_drv1 = &VAR_18->daemon_sc;
 VAR_18->daemon_sc.sc = VAR_18;

 VAR_15 = FUNC_8(VAR_4 | VAR_5,
      &VAR_18->hv_appvss_dev,
      &VAR_9,
      0,
      VAR_8,
      VAR_3,
      0640,
      VAR_0);

 if (VAR_15 != 0) {
  FUNC_7("Fail to create '%s': %d\n", VAR_0, VAR_15);
  return (VAR_15);
 }
 VAR_18->hv_appvss_dev->si_drv1 = &VAR_18->app_sc;
 VAR_18->app_sc.sc = VAR_18;

 return (FUNC_10(VAR_14, VAR_10));
}
