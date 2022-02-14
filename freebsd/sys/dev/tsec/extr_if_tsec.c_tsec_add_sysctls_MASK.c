
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsec_softc {int dev; } ;
struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sysctl_oid* FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int ,char*) ;
 int FUNC_1 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,struct tsec_softc*,int ,int ,char*,char*) ;
 struct sysctl_oid_list* FUNC_2 (struct sysctl_oid*) ;
 int VAR_4 ;
 int VAR_5 ;
 struct sysctl_ctx_list* FUNC_3 (int ) ;
 struct sysctl_oid* FUNC_4 (int ) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_5(struct tsec_softc *VAR_8)
{
 struct sysctl_ctx_list *VAR_9;
 struct sysctl_oid_list *VAR_10;
 struct sysctl_oid *VAR_11;

 VAR_9 = FUNC_3(VAR_8->dev);
 VAR_10 = FUNC_2(FUNC_4(VAR_8->dev));
 VAR_11 = FUNC_0(VAR_9, VAR_10, VAR_3, "int_coal",
     VAR_0, 0, "TSEC Interrupts coalescing");
 VAR_10 = FUNC_2(VAR_11);

 FUNC_1(VAR_9, VAR_10, VAR_3, "rx_time",
     VAR_2 | VAR_1, VAR_8, VAR_4, VAR_7,
     "I", "IC RX time threshold (0-65535)");
 FUNC_1(VAR_9, VAR_10, VAR_3, "rx_count",
     VAR_2 | VAR_1, VAR_8, VAR_4, VAR_6,
     "I", "IC RX frame count threshold (0-255)");

 FUNC_1(VAR_9, VAR_10, VAR_3, "tx_time",
     VAR_2 | VAR_1, VAR_8, VAR_5, VAR_7,
     "I", "IC TX time threshold (0-65535)");
 FUNC_1(VAR_9, VAR_10, VAR_3, "tx_count",
     VAR_2 | VAR_1, VAR_8, VAR_5, VAR_6,
     "I", "IC TX frame count threshold (0-255)");
}
