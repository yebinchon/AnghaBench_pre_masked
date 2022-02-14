
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sysctl_oid_list {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct TYPE_4__ {TYPE_2__* hv_kvp_dev; int task; int pending_mutex; int dev_sema; int dev; } ;
typedef TYPE_1__ hv_kvp_sc ;
typedef int device_t ;
struct TYPE_5__ {TYPE_1__* si_drv1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,int ,char*) ;
 struct sysctl_oid_list* FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ,TYPE_1__*) ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (int ) ;
 struct sysctl_ctx_list* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (int,TYPE_2__**,int *,int ,int ,int ,int,char*) ;
 int FUNC_7 (int *,char*,int *,int ) ;
 int FUNC_8 (int *,int ,char*) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_11)
{
 int VAR_12;
 struct sysctl_oid_list *VAR_13;
 struct sysctl_ctx_list *VAR_14;

 hv_kvp_sc *VAR_15 = (hv_kvp_sc*)FUNC_3(VAR_11);

 VAR_15->dev = VAR_11;
 FUNC_8(&VAR_15->dev_sema, 0, "hv_kvp device semaphore");
 FUNC_7(&VAR_15->pending_mutex, "hv-kvp pending mutex",
  ((void*)0), VAR_4);

 VAR_14 = FUNC_4(VAR_11);
 VAR_13 = FUNC_1(FUNC_5(VAR_11));

 FUNC_0(VAR_14, VAR_13, VAR_5, "hv_kvp_log",
     VAR_0, &VAR_9, 0, "Hyperv KVP service log level");

 FUNC_2(&VAR_15->task, 0, VAR_10, VAR_15);


 VAR_12 = FUNC_6(VAR_2 | VAR_3,
   &VAR_15->hv_kvp_dev,
   &VAR_8,
   0,
   VAR_6,
   VAR_1,
   0640,
   "hv_kvp_dev");

 if (VAR_12 != 0)
  return (VAR_12);
 VAR_15->hv_kvp_dev->si_drv1 = VAR_15;

 return (FUNC_9(VAR_11, VAR_7));
}
