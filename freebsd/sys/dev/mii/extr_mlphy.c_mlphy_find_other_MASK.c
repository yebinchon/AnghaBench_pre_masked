
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mii_dev; } ;
struct mlphy_softc {scalar_t__ ml_dev; TYPE_1__ ml_mii; } ;
struct mii_softc {int dummy; } ;
typedef scalar_t__ device_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,scalar_t__**,int*) ;
 struct mii_softc* FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__*,int ) ;

__attribute__((used)) static struct mii_softc *
FUNC_3(struct mlphy_softc *VAR_1)
{
 device_t *VAR_2;
 struct mii_softc *VAR_3;
 int VAR_4, VAR_5;

 VAR_3 = ((void*)0);
 if (FUNC_0(VAR_1->ml_mii.mii_dev, &VAR_2, &VAR_5) != 0)
  return (((void*)0));
 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
  if (VAR_2[VAR_4] != VAR_1->ml_dev) {
   VAR_3 = FUNC_1(VAR_2[VAR_4]);
   break;
  }
 }
 FUNC_2(VAR_2, VAR_0);
 return (VAR_3);
}
