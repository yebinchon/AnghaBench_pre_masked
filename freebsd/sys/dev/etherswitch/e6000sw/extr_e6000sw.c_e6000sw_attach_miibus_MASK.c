
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ phy_base; int * ifp; int * miibus; int dev; } ;
typedef TYPE_1__ e6000sw_softc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *,int ,int ,int ,int ,scalar_t__,int ,int ) ;

__attribute__((used)) static int
FUNC_1(e6000sw_softc_t *VAR_4, int VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_0(VAR_4->dev, &VAR_4->miibus[VAR_5], VAR_4->ifp[VAR_5],
     VAR_3, VAR_2, VAR_0,
     VAR_5 + VAR_4->phy_base, VAR_1, 0);
 if (VAR_6 != 0)
  return (VAR_6);

 return (0);
}
