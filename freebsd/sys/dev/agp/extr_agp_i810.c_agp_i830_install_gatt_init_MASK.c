
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct agp_i810_softc {TYPE_1__* gatt; int * sc_res; } ;
struct TYPE_2__ {int ag_physical; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct agp_i810_softc *VAR_1)
{
 uint32_t VAR_2;





 VAR_2 = FUNC_0(VAR_1->sc_res[0], VAR_0);
 VAR_2 |= 1;
 FUNC_1(VAR_1->sc_res[0], VAR_0, VAR_2);

 VAR_1->gatt->ag_physical = VAR_2 & ~1;
}
