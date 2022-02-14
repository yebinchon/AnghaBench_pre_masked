
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct upgt_stat {int st_tx_pending; int st_tx_inactive; int st_tx_active; } ;
struct upgt_softc {int sc_dev; struct upgt_stat sc_stat; } ;
struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sysctl_oid* FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,char*) ;
 struct sysctl_oid_list* FUNC_1 (struct sysctl_oid*) ;
 int FUNC_2 (struct sysctl_ctx_list*,struct sysctl_oid_list*,char*,int *,char*) ;
 struct sysctl_ctx_list* FUNC_3 (int ) ;
 struct sysctl_oid* FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct upgt_softc *VAR_2)
{
 struct sysctl_ctx_list *VAR_3;
 struct sysctl_oid_list *VAR_4;
 struct sysctl_oid *VAR_5;
 struct upgt_stat *VAR_6;

 VAR_6 = &VAR_2->sc_stat;
 VAR_3 = FUNC_3(VAR_2->sc_dev);
 VAR_4 = FUNC_1(FUNC_4(VAR_2->sc_dev));

 VAR_5 = FUNC_0(VAR_3, VAR_4, VAR_1, "stats", VAR_0,
     ((void*)0), "UPGT statistics");
 VAR_4 = FUNC_1(VAR_5);
 FUNC_2(VAR_3, VAR_4, "tx_active",
     &VAR_6->st_tx_active, "Active numbers in TX queue");
 FUNC_2(VAR_3, VAR_4, "tx_inactive",
     &VAR_6->st_tx_inactive, "Inactive numbers in TX queue");
 FUNC_2(VAR_3, VAR_4, "tx_pending",
     &VAR_6->st_tx_pending, "Pending numbers in TX queue");
}
