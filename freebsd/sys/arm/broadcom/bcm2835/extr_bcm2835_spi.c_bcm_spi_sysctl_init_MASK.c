
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct bcm_spi_softc {int sc_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,struct bcm_spi_softc*,int,int ,char*,char*) ;
 struct sysctl_oid_list* FUNC_1 (struct sysctl_oid*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct sysctl_ctx_list* FUNC_2 (int ) ;
 struct sysctl_oid* FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct bcm_spi_softc *VAR_9)
{
 struct sysctl_ctx_list *VAR_10;
 struct sysctl_oid *VAR_11;
 struct sysctl_oid_list *VAR_12;




 VAR_10 = FUNC_2(VAR_9->sc_dev);
 VAR_11 = FUNC_3(VAR_9->sc_dev);
 VAR_12 = FUNC_1(VAR_11);
 FUNC_0(VAR_10, VAR_12, VAR_2, "clock",
     VAR_0 | VAR_1, VAR_9, sizeof(*VAR_9),
     VAR_3, "IU", "SPI BUS clock frequency");
 FUNC_0(VAR_10, VAR_12, VAR_2, "cpol",
     VAR_0 | VAR_1, VAR_9, sizeof(*VAR_9),
     VAR_5, "IU", "SPI BUS clock polarity");
 FUNC_0(VAR_10, VAR_12, VAR_2, "cpha",
     VAR_0 | VAR_1, VAR_9, sizeof(*VAR_9),
     VAR_4, "IU", "SPI BUS clock phase");
 FUNC_0(VAR_10, VAR_12, VAR_2, "cspol0",
     VAR_0 | VAR_1, VAR_9, sizeof(*VAR_9),
     VAR_6, "IU", "SPI BUS chip select 0 polarity");
 FUNC_0(VAR_10, VAR_12, VAR_2, "cspol1",
     VAR_0 | VAR_1, VAR_9, sizeof(*VAR_9),
     VAR_7, "IU", "SPI BUS chip select 1 polarity");
 FUNC_0(VAR_10, VAR_12, VAR_2, "cspol2",
     VAR_0 | VAR_1, VAR_9, sizeof(*VAR_9),
     VAR_8, "IU", "SPI BUS chip select 2 polarity");
}
