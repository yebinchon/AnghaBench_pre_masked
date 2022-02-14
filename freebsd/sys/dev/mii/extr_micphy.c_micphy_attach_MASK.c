
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mii_softc {scalar_t__ mii_mpd_model; } ;
typedef int phandle_t ;
struct TYPE_3__ {int phynode; } ;
typedef TYPE_1__ mii_fdt_phy_config_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 struct mii_softc* FUNC_1 (int ) ;
 int FUNC_2 (struct mii_softc*,int ) ;
 int FUNC_3 (struct mii_softc*,int ) ;
 int VAR_4 ;
 TYPE_1__* FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int *,int) ;
 int FUNC_6 (struct mii_softc*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_5)
{
 mii_fdt_phy_config_t *VAR_6;
 struct mii_softc *VAR_7;
 phandle_t VAR_8;
 device_t VAR_9;
 device_t VAR_10;

 VAR_7 = FUNC_1(VAR_5);

 FUNC_5(VAR_5, VAR_1, &VAR_4, 1);
 FUNC_6(VAR_7);


 if (VAR_7->mii_mpd_model == VAR_2)
  return (0);

 VAR_9 = FUNC_0(VAR_5);
 VAR_10 = FUNC_0(VAR_9);

 if ((VAR_8 = FUNC_7(VAR_10)) == -1)
  return (VAR_0);

 VAR_6 = FUNC_4(VAR_5);

 if (VAR_7->mii_mpd_model == VAR_3)
  FUNC_3(VAR_7, VAR_6->phynode);
 else
  FUNC_2(VAR_7, VAR_6->phynode);

 return (0);
}
