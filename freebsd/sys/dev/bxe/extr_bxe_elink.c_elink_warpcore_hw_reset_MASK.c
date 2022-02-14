
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elink_phy {int dummy; } ;
struct elink_params {struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bxe_softc*,int ,int) ;
 int FUNC_1 (struct elink_params*,int ) ;

__attribute__((used)) static void FUNC_2(struct elink_phy *VAR_4,
        struct elink_params *VAR_5)
{
 struct bxe_softc *VAR_6 = VAR_5->sc;
 FUNC_1(VAR_5, 0);

 FUNC_0(VAR_6, VAR_3, 0x0c0e);


 FUNC_0(VAR_6, VAR_0, 1);
 FUNC_0(VAR_6, VAR_1, 0);
 FUNC_0(VAR_6, VAR_2, 0);
}
