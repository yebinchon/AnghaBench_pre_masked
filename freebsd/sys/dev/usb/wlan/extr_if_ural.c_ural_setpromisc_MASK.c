
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {scalar_t__ ic_promisc; } ;
struct ural_softc {TYPE_1__ sc_ic; } ;


 int FUNC_0 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ural_softc*,int ) ;
 int FUNC_2 (struct ural_softc*,int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct ural_softc *VAR_2)
{
 uint32_t VAR_3;

 VAR_3 = FUNC_1(VAR_2, VAR_1);

 VAR_3 &= ~VAR_0;
 if (VAR_2->sc_ic.ic_promisc == 0)
  VAR_3 |= VAR_0;

 FUNC_2(VAR_2, VAR_1, VAR_3);

 FUNC_0("%s promiscuous mode\n", VAR_2->sc_ic.ic_promisc ?
     "entering" : "leaving");
}
