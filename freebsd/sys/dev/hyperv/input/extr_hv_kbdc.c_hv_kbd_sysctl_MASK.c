
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sysctl_oid_list {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct TYPE_3__ {int debug; } ;
typedef TYPE_1__ hv_kbd_sc ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,int ,char*) ;
 struct sysctl_oid_list* FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int ) ;
 struct sysctl_ctx_list* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(device_t VAR_2)
{
 struct sysctl_oid_list *VAR_3;
 struct sysctl_ctx_list *VAR_4;
 hv_kbd_sc *VAR_5;

 VAR_5 = FUNC_2(VAR_2);
 VAR_4 = FUNC_3(VAR_2);
 VAR_3 = FUNC_1(FUNC_4(VAR_2));
 FUNC_0(VAR_4, VAR_3, VAR_1, "debug", VAR_0,
     &VAR_5->debug, 0, "debug hyperv keyboard");
}
