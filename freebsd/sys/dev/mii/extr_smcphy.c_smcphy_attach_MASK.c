
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_softc {int dummy; } ;
struct mii_phy_funcs {int dummy; } ;
struct mii_attach_args {int mii_id2; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 struct mii_attach_args* FUNC_1 (int ) ;
 struct mii_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,int,struct mii_phy_funcs const*,int) ;
 int FUNC_4 (struct mii_softc*) ;
 struct mii_phy_funcs VAR_3 ;
 struct mii_phy_funcs VAR_4 ;

__attribute__((used)) static int
FUNC_5(device_t VAR_5)
{
 struct mii_softc *VAR_6;
 struct mii_attach_args *VAR_7;
 const struct mii_phy_funcs *VAR_8;

 VAR_6 = FUNC_2(VAR_5);
 VAR_7 = FUNC_1(VAR_5);
 if (FUNC_0(VAR_7->mii_id2) == VAR_2)
  VAR_8 = &VAR_3;
 else
  VAR_8 = &VAR_4;
 FUNC_3(VAR_5, VAR_0 | VAR_1, VAR_8, 1);
 FUNC_4(VAR_6);

 return (0);
}
