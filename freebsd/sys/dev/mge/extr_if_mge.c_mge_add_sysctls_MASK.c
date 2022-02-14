
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct mge_softc {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct sysctl_oid* FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int ,char*) ;
 int FUNC_1 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,struct mge_softc*,int ,int ,char*,char*) ;
 struct sysctl_oid_list* FUNC_2 (struct sysctl_oid*) ;
 struct sysctl_ctx_list* FUNC_3 (int ) ;
 struct sysctl_oid* FUNC_4 (int ) ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_5(struct mge_softc *VAR_7)
{
 struct sysctl_ctx_list *VAR_8;
 struct sysctl_oid_list *VAR_9;
 struct sysctl_oid *VAR_10;

 VAR_8 = FUNC_3(VAR_7->dev);
 VAR_9 = FUNC_2(FUNC_4(VAR_7->dev));
 VAR_10 = FUNC_0(VAR_8, VAR_9, VAR_5, "int_coal",
     VAR_0, 0, "MGE Interrupts coalescing");
 VAR_9 = FUNC_2(VAR_10);

 FUNC_1(VAR_8, VAR_9, VAR_5, "rx_time",
     VAR_2 | VAR_1, VAR_7, VAR_3, VAR_6,
     "I", "IC RX time threshold");
 FUNC_1(VAR_8, VAR_9, VAR_5, "tx_time",
     VAR_2 | VAR_1, VAR_7, VAR_4, VAR_6,
     "I", "IC TX time threshold");
}
