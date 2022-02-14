
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elink_phy {int dummy; } ;
struct elink_params {struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bxe_softc*,struct elink_phy*,int ,int ,int) ;
 int FUNC_2 (struct bxe_softc*,struct elink_phy*,int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct elink_phy *VAR_3,
            struct elink_params *VAR_4)
{
 struct bxe_softc *VAR_5 = VAR_4->sc;

 FUNC_0(VAR_5, "Configure WC for LPI pass through\n");
 FUNC_2(VAR_5, VAR_3, VAR_0,
    VAR_2, 0x7c);
 FUNC_1(VAR_5, VAR_3, VAR_0,
     VAR_1, 0xc000);
}
