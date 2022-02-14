
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u_int ;
struct g_shsec_softc {size_t sc_ndisks; int sc_name; TYPE_3__* sc_provider; TYPE_2__** sc_disks; int sc_geom; } ;
typedef scalar_t__ off_t ;
struct TYPE_7__ {size_t sectorsize; scalar_t__ mediasize; } ;
struct TYPE_6__ {TYPE_1__* provider; } ;
struct TYPE_5__ {scalar_t__ mediasize; scalar_t__ sectorsize; } ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 TYPE_3__* FUNC_2 (int ,char*,int ) ;
 size_t FUNC_3 (struct g_shsec_softc*) ;
 size_t FUNC_4 (size_t,scalar_t__) ;

__attribute__((used)) static void
FUNC_5(struct g_shsec_softc *VAR_0)
{
 off_t VAR_1, VAR_2;
 u_int VAR_3, VAR_4 = 0;

 if (FUNC_3(VAR_0) != VAR_0->sc_ndisks)
  return;

 VAR_0->sc_provider = FUNC_2(VAR_0->sc_geom, "shsec/%s", VAR_0->sc_name);



 VAR_1 = VAR_0->sc_disks[0]->provider->mediasize;
 VAR_1 -= VAR_0->sc_disks[0]->provider->sectorsize;
 VAR_4 = VAR_0->sc_disks[0]->provider->sectorsize;
 for (VAR_3 = 1; VAR_3 < VAR_0->sc_ndisks; VAR_3++) {
  VAR_2 = VAR_0->sc_disks[VAR_3]->provider->mediasize;
  VAR_2 -= VAR_0->sc_disks[VAR_3]->provider->sectorsize;
  if (VAR_2 < VAR_1)
   VAR_1 = VAR_2;
  VAR_4 = FUNC_4(VAR_4,
      VAR_0->sc_disks[VAR_3]->provider->sectorsize);
 }
 VAR_0->sc_provider->sectorsize = VAR_4;
 VAR_0->sc_provider->mediasize = VAR_1;
 FUNC_1(VAR_0->sc_provider, 0);

 FUNC_0(0, "Device %s activated.", VAR_0->sc_name);
}
