
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
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct ifnet*,int ,int ,int) ;
 int FUNC_3 (struct ifnet*) ;

__attribute__((used)) static void
FUNC_4(struct ifnet *VAR_5, int VAR_6, int VAR_7, int VAR_8)
{
 cvm_oct_private_t *VAR_9 = (cvm_oct_private_t *)VAR_5->if_softc;

 FUNC_3(VAR_5);
 FUNC_2(VAR_5, VAR_9->phy_id, VAR_4, VAR_8);
 FUNC_2(VAR_5, VAR_9->phy_id, VAR_3,
     VAR_1 | VAR_0 |
     VAR_2 | FUNC_0(VAR_6) |
     FUNC_1(VAR_7));
 FUNC_3(VAR_5);
}
