
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct g_eli_softc {int sc_flags; TYPE_2__* sc_geom; int sc_queue_mtx; int sc_queue; } ;
struct g_consumer {TYPE_3__* provider; } ;
struct bio {int bio_cmd; TYPE_3__* bio_to; int bio_done; int bio_pflags; struct bio* bio_driver1; } ;
struct TYPE_6__ {int name; int error; TYPE_1__* geom; } ;
struct TYPE_5__ {int consumer; } ;
struct TYPE_4__ {struct g_eli_softc* softc; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,struct bio*,char*) ;
 int VAR_4 ;
 int FUNC_1 (int ,char*) ;
 struct g_consumer* FUNC_2 (int *) ;
 int FUNC_3 (int *,struct bio*) ;
 struct bio* FUNC_4 (struct bio*) ;
 int FUNC_5 (struct g_eli_softc*,struct bio*,int ) ;
 int VAR_5 ;
 int FUNC_6 (struct bio*,int ) ;
 int FUNC_7 (struct bio*,struct g_consumer*) ;
 int VAR_6 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct g_eli_softc*) ;

__attribute__((used)) static void
FUNC_11(struct bio *VAR_7)
{
 struct g_eli_softc *VAR_8;
 struct g_consumer *VAR_9;
 struct bio *VAR_10;

 VAR_8 = VAR_7->bio_to->geom->softc;
 FUNC_1(VAR_8 != ((void*)0),
     ("Provider's error should be set (error=%d)(device=%s).",
     VAR_7->bio_to->error, VAR_7->bio_to->name));
 FUNC_0(2, VAR_7, "Request received.");

 switch (VAR_7->bio_cmd) {
 case 130:
 case 129:
 case 131:
 case 132:
 case 128:
  break;
 case 133:
  if (!(VAR_8->sc_flags & VAR_3))
   break;
 default:
  FUNC_6(VAR_7, VAR_1);
  return;
 }
 VAR_10 = FUNC_4(VAR_7);
 if (VAR_10 == ((void*)0)) {
  FUNC_6(VAR_7, VAR_0);
  return;
 }
 VAR_7->bio_driver1 = VAR_10;
 VAR_7->bio_pflags = VAR_4;
 switch (VAR_7->bio_cmd) {
 case 130:
  if (!(VAR_8->sc_flags & VAR_2)) {
   FUNC_5(VAR_8, VAR_7, 0);
   break;
  }

 case 129:
  FUNC_8(&VAR_8->sc_queue_mtx);
  FUNC_3(&VAR_8->sc_queue, VAR_7);
  FUNC_9(&VAR_8->sc_queue_mtx);
  FUNC_10(VAR_8);
  break;
 case 131:
 case 132:
 case 133:
 case 128:
  if (VAR_7->bio_cmd == 131)
   VAR_10->bio_done = VAR_5;
  else
   VAR_10->bio_done = VAR_6;
  VAR_9 = FUNC_2(&VAR_8->sc_geom->consumer);
  VAR_10->bio_to = VAR_9->provider;
  FUNC_0(2, VAR_10, "Sending request.");
  FUNC_7(VAR_10, VAR_9);
  break;
 }
}
