
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pf_head; } ;
struct pccard_softc {TYPE_1__ card; scalar_t__ sc_enabled_count; int dev; } ;
typedef int device_t ;


 struct pccard_softc* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct pccard_softc*) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_0)
{
 struct pccard_softc *VAR_1 = FUNC_0(VAR_0);
 int VAR_2;

 VAR_1->dev = VAR_0;
 VAR_1->sc_enabled_count = 0;
 if ((VAR_2 = FUNC_3(VAR_1)) != 0)
  return (VAR_2);
 FUNC_1(&VAR_1->card.pf_head);
 return (FUNC_2(VAR_0));
}
