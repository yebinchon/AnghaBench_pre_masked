
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hv_kvp_dev; int * daemon_task; } ;
typedef TYPE_1__ hv_kvp_sc ;
typedef int device_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_1)
{
 hv_kvp_sc *VAR_2 = (hv_kvp_sc*)FUNC_3(VAR_1);

 if (VAR_2->daemon_task != ((void*)0)) {
  FUNC_0(VAR_2->daemon_task);
  FUNC_4(VAR_2->daemon_task, VAR_0);
  FUNC_1(VAR_2->daemon_task);
 }

 FUNC_2(VAR_2->hv_kvp_dev);
 return (FUNC_5(VAR_1));
}
