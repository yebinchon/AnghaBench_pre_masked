
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {scalar_t__ ic_promisc; } ;
struct run_softc {TYPE_1__ sc_ic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct run_softc*,int ,char*,char*) ;
 int FUNC_1 (struct run_softc*,int ,int *) ;
 int FUNC_2 (struct run_softc*,int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct run_softc *VAR_3)
{
        uint32_t VAR_4;

 FUNC_1(VAR_3, VAR_1, &VAR_4);

 VAR_4 |= VAR_0;
        if (VAR_3->sc_ic.ic_promisc > 0)
  VAR_4 &= ~VAR_0;

 FUNC_2(VAR_3, VAR_1, VAR_4);

        FUNC_0(VAR_3, VAR_2, "%s promiscuous mode\n",
     (VAR_3->sc_ic.ic_promisc > 0) ? "entering" : "leaving");
}
