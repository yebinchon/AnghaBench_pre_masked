
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct elink_vars {int dummy; } ;
struct elink_phy {int ver_addr; } ;
struct elink_params {int port; struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;
typedef int elink_status_t ;


 int FUNC_0 (struct bxe_softc*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct bxe_softc*,int ,int ,int ) ;
 int FUNC_2 (struct bxe_softc*,struct elink_phy*,int ,int ,int*) ;
 int FUNC_3 (struct bxe_softc*,struct elink_phy*,int ,int ,int) ;
 int FUNC_4 (struct bxe_softc*,int ) ;
 int FUNC_5 (struct elink_params*,struct elink_phy*,struct elink_vars*) ;
 int FUNC_6 (struct bxe_softc*,int ,int ,int ) ;
 int FUNC_7 (struct bxe_softc*,struct elink_phy*,struct elink_params*) ;

__attribute__((used)) static elink_status_t FUNC_8(struct elink_phy *VAR_10,
      struct elink_params *VAR_11,
      struct elink_vars *VAR_12)
{
 uint16_t VAR_13, VAR_14, VAR_15;
 struct bxe_softc *VAR_16 = VAR_11->sc;
 FUNC_0(VAR_16, "Setting the SFX7101 LASI indication\n");


 FUNC_1(VAR_16, VAR_8,
         VAR_9, VAR_11->port);

 FUNC_4(VAR_16, VAR_11->port);
 FUNC_7(VAR_16, VAR_10, VAR_11);

 FUNC_3(VAR_16, VAR_10,
    VAR_3, VAR_4, 0x1);
 FUNC_0(VAR_16, "Setting the SFX7101 LED to blink on traffic\n");
 FUNC_3(VAR_16, VAR_10,
    VAR_3, VAR_7, (1<<3));

 FUNC_5(VAR_11, VAR_10, VAR_12);

 FUNC_2(VAR_16, VAR_10,
   VAR_1, VAR_2, &VAR_15);
 VAR_15 |= 0x200;
 FUNC_3(VAR_16, VAR_10,
    VAR_1, VAR_2, VAR_15);


 FUNC_2(VAR_16, VAR_10,
   VAR_3, VAR_5, &VAR_13);

 FUNC_2(VAR_16, VAR_10,
   VAR_3, VAR_6, &VAR_14);
 FUNC_6(VAR_16, VAR_11->port,
      (uint32_t)(VAR_13<<16 | VAR_14), VAR_10->ver_addr);
 return VAR_0;
}
