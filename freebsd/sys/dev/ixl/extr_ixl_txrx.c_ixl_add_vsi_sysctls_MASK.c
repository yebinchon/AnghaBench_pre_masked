
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct ixl_vsi {int eth_stats; struct sysctl_oid* vsi_node; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct sysctl_oid* FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char const*,int ,int *,char*) ;
 struct sysctl_oid_list* FUNC_1 (struct sysctl_oid*) ;
 struct sysctl_oid* FUNC_2 (int ) ;
 int FUNC_3 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int *) ;

void
FUNC_4(device_t VAR_2, struct ixl_vsi *VAR_3,
    struct sysctl_ctx_list *VAR_4, const char *VAR_5)
{
 struct sysctl_oid *VAR_6;
 struct sysctl_oid_list *VAR_7;
 struct sysctl_oid_list *VAR_8;

 VAR_6 = FUNC_2(VAR_2);
 VAR_7 = FUNC_1(VAR_6);
 VAR_3->vsi_node = FUNC_0(VAR_4, VAR_7, VAR_1, VAR_5,
       VAR_0, ((void*)0), "VSI Number");
 VAR_8 = FUNC_1(VAR_3->vsi_node);

 FUNC_3(VAR_4, VAR_8, &VAR_3->eth_stats);
}
