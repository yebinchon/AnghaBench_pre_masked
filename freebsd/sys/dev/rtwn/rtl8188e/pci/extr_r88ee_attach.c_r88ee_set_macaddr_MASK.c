
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int ic_macaddr; } ;
struct rtwn_softc {TYPE_1__ sc_ic; } ;
struct TYPE_5__ {int macaddr; } ;
struct TYPE_6__ {TYPE_2__ pci; } ;
struct r88e_rom {TYPE_3__ diff_d0; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct rtwn_softc *VAR_0, uint8_t *VAR_1)
{
 struct r88e_rom *VAR_2 = (struct r88e_rom *)VAR_1;

 FUNC_0(VAR_0->sc_ic.ic_macaddr, VAR_2->diff_d0.pci.macaddr);
}
