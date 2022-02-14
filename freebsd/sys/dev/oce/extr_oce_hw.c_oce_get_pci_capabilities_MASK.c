
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct TYPE_3__ {int pcie_link_speed; int pcie_link_width; int flags; int dev; } ;
typedef TYPE_1__* POCE_SOFTC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ,int ,scalar_t__*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__,int) ;

__attribute__((used)) static
void FUNC_3(POCE_SOFTC VAR_8)
{
 uint32_t VAR_9;





 if (FUNC_0(VAR_8->dev, VAR_7, &VAR_9) == 0) {
  if (VAR_9 != 0)
   VAR_8->flags |= VAR_3;
 }

 if (FUNC_0(VAR_8->dev, VAR_4, &VAR_9) == 0) {
  if (VAR_9 != 0) {
   uint16_t VAR_10 =
       FUNC_2(VAR_8->dev, VAR_9 + 0x12, 2);

   VAR_8->flags |= VAR_2;
   VAR_8->pcie_link_speed = VAR_10 & 0xf;
   VAR_8->pcie_link_width = (VAR_10 >> 4) & 0x3f;
  }
 }

 if (FUNC_0(VAR_8->dev, VAR_5, &VAR_9) == 0) {
  if (VAR_9 != 0)
   VAR_8->flags |= VAR_1;
 }

 if (FUNC_0(VAR_8->dev, VAR_6, &VAR_9) == 0) {
  if (VAR_9 != 0) {
   VAR_9 = FUNC_1(VAR_8->dev);
   VAR_8->flags |= VAR_0;
  }
 }
}
