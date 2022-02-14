
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urtw_stats {int * txrates; } ;
struct urtw_softc {int sc_dev; struct urtw_stats sc_stats; } ;
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
FUNC_5(struct urtw_softc *VAR_2)
{


 struct sysctl_ctx_list *VAR_3;
 struct sysctl_oid_list *VAR_4, *VAR_5;
 struct sysctl_oid *VAR_6;
 struct urtw_stats *VAR_7 = &VAR_2->sc_stats;

 VAR_3 = FUNC_3(VAR_2->sc_dev);
 VAR_4 = FUNC_1(FUNC_4(VAR_2->sc_dev));

 VAR_6 = FUNC_0(VAR_3, VAR_4, VAR_1, "stats", VAR_0,
     ((void*)0), "URTW statistics");
 VAR_5 = FUNC_1(VAR_6);


 VAR_6 = FUNC_0(VAR_3, VAR_5, VAR_1, "tx", VAR_0,
     ((void*)0), "Tx MAC statistics");
 VAR_4 = FUNC_1(VAR_6);
 FUNC_0(VAR_3, VAR_4, VAR_1, "1m", VAR_0, &VAR_7->txrates[0], 0, "1 Mbit/s");

 FUNC_0(VAR_3, VAR_4, VAR_1, "2m", VAR_0, &VAR_7->txrates[1], 0, "2 Mbit/s");

 FUNC_0(VAR_3, VAR_4, VAR_1, "5.5m", VAR_0, &VAR_7->txrates[2], 0, "5.5 Mbit/s");

 FUNC_0(VAR_3, VAR_4, VAR_1, "6m", VAR_0, &VAR_7->txrates[4], 0, "6 Mbit/s");

 FUNC_0(VAR_3, VAR_4, VAR_1, "9m", VAR_0, &VAR_7->txrates[5], 0, "9 Mbit/s");

 FUNC_0(VAR_3, VAR_4, VAR_1, "11m", VAR_0, &VAR_7->txrates[3], 0, "11 Mbit/s");

 FUNC_0(VAR_3, VAR_4, VAR_1, "12m", VAR_0, &VAR_7->txrates[6], 0, "12 Mbit/s");

 FUNC_0(VAR_3, VAR_4, VAR_1, "18m", VAR_0, &VAR_7->txrates[7], 0, "18 Mbit/s");

 FUNC_0(VAR_3, VAR_4, VAR_1, "24m", VAR_0, &VAR_7->txrates[8], 0, "24 Mbit/s");

 FUNC_0(VAR_3, VAR_4, VAR_1, "36m", VAR_0, &VAR_7->txrates[9], 0, "36 Mbit/s");

 FUNC_0(VAR_3, VAR_4, VAR_1, "48m", VAR_0, &VAR_7->txrates[10], 0, "48 Mbit/s");

 FUNC_0(VAR_3, VAR_4, VAR_1, "54m", VAR_0, &VAR_7->txrates[11], 0, "54 Mbit/s");


}
