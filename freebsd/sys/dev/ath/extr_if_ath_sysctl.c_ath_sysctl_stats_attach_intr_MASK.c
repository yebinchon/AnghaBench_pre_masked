
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct TYPE_2__ {int * sync_intr; } ;
struct ath_softc {TYPE_1__ sc_intr_stats; int sc_dev; } ;
typedef int sn ;


 int VAR_0 ;
 int VAR_1 ;
 struct sysctl_oid* FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,char*) ;
 int FUNC_1 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,int ,char*) ;
 struct sysctl_oid_list* FUNC_2 (struct sysctl_oid*) ;
 struct sysctl_ctx_list* FUNC_3 (int ) ;
 struct sysctl_oid* FUNC_4 (int ) ;
 int FUNC_5 (char*,int,char*,int) ;

__attribute__((used)) static void
FUNC_6(struct ath_softc *VAR_2,
    struct sysctl_oid_list *VAR_3)
{
 struct sysctl_ctx_list *VAR_4 = FUNC_3(VAR_2->sc_dev);
 struct sysctl_oid *VAR_5 = FUNC_4(VAR_2->sc_dev);
 struct sysctl_oid_list *VAR_6 = FUNC_2(VAR_5);
 int VAR_7;
 char VAR_8[8];

 VAR_5 = FUNC_0(VAR_4, VAR_3, VAR_1, "sync_intr",
     VAR_0, ((void*)0), "Sync interrupt statistics");
 VAR_6 = FUNC_2(VAR_5);
 for (VAR_7 = 0; VAR_7 < 32; VAR_7++) {
  FUNC_5(VAR_8, sizeof(VAR_8), "%d", VAR_7);
  FUNC_1(VAR_4, VAR_6, VAR_1, VAR_8, VAR_0,
      &VAR_2->sc_intr_stats.sync_intr[VAR_7], 0, "");
 }
}
