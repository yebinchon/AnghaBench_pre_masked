
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_oid_list {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct bnxt_softc {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,struct bnxt_softc*,int ,int ,char*,char*) ;
 struct sysctl_oid_list* FUNC_1 (int ) ;
 int VAR_3 ;
 struct sysctl_ctx_list* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

int
FUNC_4(struct bnxt_softc *VAR_4)
{
 struct sysctl_ctx_list *VAR_5 = FUNC_2(VAR_4->dev);
 struct sysctl_oid_list *VAR_6;

 VAR_6 = FUNC_1(FUNC_3(VAR_4->dev));;

 FUNC_0(VAR_5, VAR_6, VAR_2, "vlan_only",
     VAR_1|VAR_0, VAR_4, 0, VAR_3, "I",
     "require vlan tag on received packets when vlan is enabled");

 return 0;
}
