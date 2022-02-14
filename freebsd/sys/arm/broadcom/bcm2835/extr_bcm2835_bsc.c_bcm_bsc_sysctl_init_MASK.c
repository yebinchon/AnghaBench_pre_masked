
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct bcm_bsc_softc {int sc_debug; int sc_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,int ,char*) ;
 int FUNC_1 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,struct bcm_bsc_softc*,int,int ,char*,char*) ;
 struct sysctl_oid_list* FUNC_2 (struct sysctl_oid*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct sysctl_ctx_list* FUNC_3 (int ) ;
 struct sysctl_oid* FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct bcm_bsc_softc *VAR_8)
{
 struct sysctl_ctx_list *VAR_9;
 struct sysctl_oid *VAR_10;
 struct sysctl_oid_list *VAR_11;




 VAR_9 = FUNC_3(VAR_8->sc_dev);
 VAR_10 = FUNC_4(VAR_8->sc_dev);
 VAR_11 = FUNC_2(VAR_10);
 FUNC_1(VAR_9, VAR_11, VAR_3, "frequency",
     VAR_0 | VAR_2, VAR_8, sizeof(*VAR_8),
     VAR_5, "IU", "I2C BUS clock frequency");
 FUNC_1(VAR_9, VAR_11, VAR_3, "clock_stretch",
     VAR_0 | VAR_2, VAR_8, sizeof(*VAR_8),
     VAR_4, "IU", "I2C BUS clock stretch timeout");
 FUNC_1(VAR_9, VAR_11, VAR_3, "fall_edge_delay",
     VAR_0 | VAR_2, VAR_8, sizeof(*VAR_8),
     VAR_6, "IU", "I2C BUS falling edge delay");
 FUNC_1(VAR_9, VAR_11, VAR_3, "rise_edge_delay",
     VAR_0 | VAR_2, VAR_8, sizeof(*VAR_8),
     VAR_7, "IU", "I2C BUS rising edge delay");
 FUNC_0(VAR_9, VAR_11, VAR_3, "debug",
     VAR_1, &VAR_8->sc_debug, 0,
     "Enable debug; 1=reads/writes, 2=add starts/stops");
}
