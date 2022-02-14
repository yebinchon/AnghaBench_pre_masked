
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ifnet {scalar_t__ if_softc; } ;
struct TYPE_2__ {int phy_id; } ;
typedef TYPE_1__ cvm_oct_private_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct ifnet*,int ,int ) ;
 int FUNC_3 (struct ifnet*,int ,int ,int) ;
 int FUNC_4 (struct ifnet*) ;

__attribute__((used)) static int
FUNC_5(struct ifnet *VAR_5, int VAR_6, int VAR_7)
{
 cvm_oct_private_t *VAR_8 = (cvm_oct_private_t *)VAR_5->if_softc;
 int VAR_9;

 VAR_9 = FUNC_4(VAR_5);
 if (VAR_9 != 0)
  return (0);

 FUNC_3(VAR_5, VAR_8->phy_id, VAR_3,
     VAR_1 | VAR_0 |
     VAR_2 | FUNC_0(VAR_6) |
     FUNC_1(VAR_7));

 VAR_9 = FUNC_4(VAR_5);
 if (VAR_9 != 0)
  return (0);

 return (FUNC_2(VAR_5, VAR_8->phy_id, VAR_4));
}
