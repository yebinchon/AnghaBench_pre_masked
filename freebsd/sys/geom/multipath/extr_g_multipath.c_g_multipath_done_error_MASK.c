
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_provider {char* name; } ;
struct g_multipath_softc {char* sc_name; int sc_mtx; } ;
struct g_geom {struct g_multipath_softc* softc; } ;
struct g_consumer {int index; int private; struct g_provider* provider; } ;
struct bio {int bio_error; uintptr_t bio_children; int bio_inbed; scalar_t__ bio_driver1; struct g_consumer* bio_from; TYPE_1__* bio_to; struct bio* bio_parent; } ;
struct TYPE_2__ {struct g_geom* geom; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bio*) ;
 int VAR_4 ;
 int FUNC_1 (struct g_consumer*,int) ;
 int FUNC_2 (struct bio*) ;
 int FUNC_3 (int ,struct g_consumer*,int ,int *) ;
 int FUNC_4 (struct bio*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,int,char*,char*) ;

__attribute__((used)) static void
FUNC_8(struct bio *VAR_5)
{
 struct bio *VAR_6;
 struct g_geom *VAR_7;
 struct g_multipath_softc *VAR_8;
 struct g_consumer *VAR_9;
 struct g_provider *VAR_10;
 uintptr_t *VAR_11;
 VAR_6 = VAR_5->bio_parent;
 VAR_7 = VAR_6->bio_to->geom;
 VAR_8 = VAR_7->softc;
 VAR_9 = VAR_5->bio_from;
 VAR_10 = VAR_9->provider;
 VAR_11 = (uintptr_t *)&VAR_9->private;

 FUNC_5(&VAR_8->sc_mtx);
 if ((VAR_9->index & VAR_0) == 0) {
  FUNC_7("GEOM_MULTIPATH: Error %d, %s in %s marked FAIL\n",
      VAR_5->bio_error, VAR_10->name, VAR_8->sc_name);
  FUNC_1(VAR_9, VAR_0);
 }
 (*VAR_11)--;
 if (*VAR_11 == 0 && (VAR_9->index & (VAR_1 | VAR_2)) == VAR_1) {
  VAR_9->index |= VAR_2;
  FUNC_6(&VAR_8->sc_mtx);
  FUNC_3(VAR_4, VAR_9, VAR_3, ((void*)0));
 } else
  FUNC_6(&VAR_8->sc_mtx);




 if (VAR_6->bio_children < (uintptr_t)VAR_6->bio_driver1) {
  VAR_6->bio_inbed++;
  FUNC_0(VAR_5);
  FUNC_2(VAR_6);
 } else {
  FUNC_4(VAR_5);
 }
}
