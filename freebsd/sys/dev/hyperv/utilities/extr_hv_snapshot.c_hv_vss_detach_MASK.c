
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * proc_task; } ;
struct TYPE_4__ {int * proc_task; } ;
struct TYPE_6__ {int hv_appvss_dev; int hv_vss_dev; TYPE_2__ app_sc; TYPE_1__ daemon_sc; int pending_mutex; } ;
typedef TYPE_3__ hv_vss_sc ;
typedef int device_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_1)
{
 hv_vss_sc *VAR_2 = (hv_vss_sc*)FUNC_3(VAR_1);
 FUNC_6(&VAR_2->pending_mutex);
 if (VAR_2->daemon_sc.proc_task != ((void*)0)) {
  FUNC_0(VAR_2->daemon_sc.proc_task);
  FUNC_5(VAR_2->daemon_sc.proc_task, VAR_0);
  FUNC_1(VAR_2->daemon_sc.proc_task);
 }
 if (VAR_2->app_sc.proc_task != ((void*)0)) {
  FUNC_0(VAR_2->app_sc.proc_task);
  FUNC_5(VAR_2->app_sc.proc_task, VAR_0);
  FUNC_1(VAR_2->app_sc.proc_task);
 }
 FUNC_4(VAR_1);
 FUNC_2(VAR_2->hv_vss_dev);
 FUNC_2(VAR_2->hv_appvss_dev);
 return (FUNC_7(VAR_1));
}
