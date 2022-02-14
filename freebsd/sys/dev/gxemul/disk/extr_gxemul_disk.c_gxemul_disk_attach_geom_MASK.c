
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct gxemul_disk_softc {TYPE_1__* sc_provider; int sc_size; TYPE_2__* sc_geom; int sc_dev; } ;
struct TYPE_6__ {int name; struct gxemul_disk_softc* softc; } ;
struct TYPE_5__ {int mediasize; int sectorsize; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int VAR_1 ;
 TYPE_2__* FUNC_2 (int *,char*,int ) ;
 TYPE_1__* FUNC_3 (TYPE_2__*,char*,int ) ;

__attribute__((used)) static void
FUNC_4(void *VAR_2, int VAR_3)
{
 struct gxemul_disk_softc *VAR_4;

 VAR_4 = VAR_2;

 VAR_4->sc_geom = FUNC_2(&VAR_1, "%s", FUNC_0(VAR_4->sc_dev));
 VAR_4->sc_geom->softc = VAR_4;

 VAR_4->sc_provider = FUNC_3(VAR_4->sc_geom, "%s", VAR_4->sc_geom->name);
 VAR_4->sc_provider->sectorsize = VAR_0;
 VAR_4->sc_provider->mediasize = VAR_4->sc_size;
 FUNC_1(VAR_4->sc_provider, 0);
}
