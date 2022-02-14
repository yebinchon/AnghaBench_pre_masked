
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct ifnet {scalar_t__ if_softc; } ;
struct TYPE_2__ {int phy_id; } ;
typedef TYPE_1__ cvm_oct_private_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ifnet*,int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct ifnet *VAR_3)
{
 cvm_oct_private_t *VAR_4 = (cvm_oct_private_t *)VAR_3->if_softc;
 uint16_t VAR_5;
 unsigned VAR_6;

 for (VAR_6 = 0; VAR_6 < 10000; VAR_6++) {
  VAR_5 = FUNC_0(VAR_3, VAR_4->phy_id, VAR_2);
  if ((VAR_5 & VAR_1) == 0)
   return (0);
 }
 return (VAR_0);
}
