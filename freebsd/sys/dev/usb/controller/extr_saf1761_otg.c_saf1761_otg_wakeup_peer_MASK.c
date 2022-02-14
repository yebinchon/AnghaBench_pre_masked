
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {int bus_mtx; } ;
struct TYPE_3__ {int status_suspend; } ;
struct saf1761_otg_softc {TYPE_2__ sc_bus; TYPE_1__ sc_flags; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct saf1761_otg_softc*,int ) ;
 int FUNC_2 (struct saf1761_otg_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static void
FUNC_4(struct saf1761_otg_softc *VAR_3)
{
 uint16_t VAR_4;

 if (!(VAR_3->sc_flags.status_suspend))
  return;

 FUNC_0(5, "\n");

 VAR_4 = FUNC_1(VAR_3, VAR_0);
 FUNC_2(VAR_3, VAR_0, VAR_4 | VAR_1);
 FUNC_2(VAR_3, VAR_0, VAR_4 & ~VAR_1);


 FUNC_3(&VAR_3->sc_bus.bus_mtx, VAR_2 / 125);
}
