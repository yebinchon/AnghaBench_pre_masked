
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elink_vars {int dummy; } ;
struct elink_phy {int dummy; } ;
struct elink_params {struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,char*) ;
 int FUNC_1 (struct elink_phy*,struct elink_params*,struct elink_vars*) ;
 int FUNC_2 (struct elink_phy*,struct elink_params*) ;

__attribute__((used)) static void FUNC_3(struct elink_params *VAR_0,
          struct elink_vars *VAR_1,
          struct elink_phy *VAR_2)
{
 struct bxe_softc *VAR_3 = VAR_0->sc;
 FUNC_0(VAR_3, "KR2 recovery\n");
 FUNC_1(VAR_2, VAR_0, VAR_1);
 FUNC_2(VAR_2, VAR_0);
}
