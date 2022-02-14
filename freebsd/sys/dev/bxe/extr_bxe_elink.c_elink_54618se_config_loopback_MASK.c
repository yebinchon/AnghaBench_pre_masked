
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct elink_phy {int dummy; } ;
struct elink_params {int port; struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct bxe_softc*,scalar_t__,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct bxe_softc*,struct elink_phy*,int,int*) ;
 int FUNC_3 (struct bxe_softc*,struct elink_phy*,int,int) ;

__attribute__((used)) static void FUNC_4(struct elink_phy *VAR_4,
       struct elink_params *VAR_5)
{
 struct bxe_softc *VAR_6 = VAR_5->sc;
 uint16_t VAR_7;
 uint32_t VAR_8 = VAR_5->port ? VAR_1 : VAR_0;

 FUNC_0(VAR_6, "2PMA/PMD ext_phy_loopback: 54618se\n");



 FUNC_3(VAR_6, VAR_4, 0x09, 3<<11);






 FUNC_2(VAR_6, VAR_4, 0x00, &VAR_7);
 VAR_7 &= ~((1<<6) | (1<<12) | (1<<13));
 VAR_7 |= (1<<6) | (1<<8);
 FUNC_3(VAR_6, VAR_4, 0x00, VAR_7);





 FUNC_3(VAR_6, VAR_4, 0x18, 7);
 FUNC_2(VAR_6, VAR_4, 0x18, &VAR_7);
 FUNC_3(VAR_6, VAR_4, 0x18, VAR_7 | (1<<10) | (1<<15));


 FUNC_1(VAR_6, VAR_2 + VAR_5->port*4, 1);




 FUNC_1(VAR_6, VAR_8 + VAR_3, 0x2710);
}
