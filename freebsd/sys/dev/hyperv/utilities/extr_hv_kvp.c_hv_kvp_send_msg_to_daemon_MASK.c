
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct hv_kvp_msg {int dummy; } ;
struct TYPE_3__ {int hv_kvp_selinfo; int dev_sema; struct hv_kvp_msg daemon_kvp_msg; struct hv_kvp_msg* host_kvp_msg; } ;
typedef TYPE_1__ hv_kvp_sc ;


 int FUNC_0 (struct hv_kvp_msg*,struct hv_kvp_msg*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(hv_kvp_sc *VAR_0)
{
 struct hv_kvp_msg *VAR_1 = VAR_0->host_kvp_msg;
 struct hv_kvp_msg *VAR_2 = &VAR_0->daemon_kvp_msg;


 FUNC_0(VAR_1, VAR_2);


 FUNC_2(&VAR_0->dev_sema);


 FUNC_1(&VAR_0->hv_kvp_selinfo);
}
