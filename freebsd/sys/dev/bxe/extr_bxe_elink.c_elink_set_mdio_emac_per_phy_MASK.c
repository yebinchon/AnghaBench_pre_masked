
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint8_t ;
struct elink_params {size_t num_phys; TYPE_1__* phy; int chip_id; } ;
struct bxe_softc {int dummy; } ;
struct TYPE_2__ {int mdio_ctrl; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct bxe_softc*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct bxe_softc *VAR_1,
     struct elink_params *VAR_2)
{
 uint8_t VAR_3;


 for (VAR_3 = VAR_0; VAR_3 < VAR_2->num_phys;
       VAR_3++)
  FUNC_0(VAR_1, VAR_2->chip_id,
       VAR_2->phy[VAR_3].mdio_ctrl);
}
