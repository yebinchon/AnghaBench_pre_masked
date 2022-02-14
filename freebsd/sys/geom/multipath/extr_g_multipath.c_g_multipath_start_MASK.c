
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_multipath_softc {uintptr_t sc_ndisks; int sc_mtx; } ;
struct g_geom {struct g_multipath_softc* softc; } ;
struct g_consumer {int private; } ;
struct bio {int bio_done; void* bio_driver1; TYPE_1__* bio_to; } ;
struct TYPE_2__ {struct g_geom* geom; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 struct bio* FUNC_1 (struct bio*) ;
 int FUNC_2 (struct bio*) ;
 int FUNC_3 (struct bio*,int ) ;
 int FUNC_4 (struct bio*,struct g_consumer*) ;
 struct g_consumer* FUNC_5 (struct g_geom*,struct bio*) ;
 int VAR_2 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void
FUNC_8(struct bio *VAR_3)
{
 struct g_multipath_softc *VAR_4;
 struct g_geom *VAR_5;
 struct g_consumer *VAR_6;
 struct bio *VAR_7;
 uintptr_t *VAR_8;

 VAR_5 = VAR_3->bio_to->geom;
 VAR_4 = VAR_5->softc;
 FUNC_0(VAR_4 != ((void*)0), ("NULL sc"));
 VAR_7 = FUNC_1(VAR_3);
 if (VAR_7 == ((void*)0)) {
  FUNC_3(VAR_3, VAR_0);
  return;
 }
 FUNC_6(&VAR_4->sc_mtx);
 VAR_6 = FUNC_5(VAR_5, VAR_3);
 if (VAR_6 == ((void*)0)) {
  FUNC_7(&VAR_4->sc_mtx);
  FUNC_2(VAR_7);
  FUNC_3(VAR_3, VAR_1);
  return;
 }
 if ((uintptr_t)VAR_3->bio_driver1 < VAR_4->sc_ndisks)
  VAR_3->bio_driver1 = (void *)(uintptr_t)VAR_4->sc_ndisks;
 VAR_8 = (uintptr_t *)&VAR_6->private;
 (*VAR_8)++;
 FUNC_7(&VAR_4->sc_mtx);
 VAR_7->bio_done = VAR_2;
 FUNC_4(VAR_7, VAR_6);
}
