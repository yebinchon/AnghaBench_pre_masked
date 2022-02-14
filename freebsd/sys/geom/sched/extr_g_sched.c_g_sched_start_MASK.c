
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct g_sched_softc {int sc_flags; int sc_pending; int sc_data; TYPE_1__* sc_gsched; } ;
struct g_geom {int consumer; int provider; struct g_sched_softc* softc; } ;
struct bio {scalar_t__ bio_cmd; TYPE_2__* bio_caller1; int bio_done; scalar_t__ bio_length; struct g_geom* bio_caller2; TYPE_3__* bio_to; } ;
struct TYPE_7__ {struct g_geom* geom; } ;
struct TYPE_6__ {int gs_write_bytes_in_flight; int gs_writes_in_flight; int gs_bytes_in_flight; int gs_requests; int gs_in_flight; } ;
struct TYPE_5__ {scalar_t__ (* gs_start ) (int ,struct bio*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bio*,char*) ;
 int FUNC_1 (int ,char*) ;
 TYPE_3__* FUNC_2 (int *) ;
 int VAR_4 ;
 int FUNC_3 (int ,struct bio*) ;
 struct bio* FUNC_4 (struct bio*) ;
 int FUNC_5 (struct bio*,int ) ;
 int FUNC_6 (struct bio*,TYPE_3__*) ;
 int FUNC_7 (struct g_geom*) ;
 int VAR_5 ;
 int FUNC_8 (struct g_geom*) ;
 int FUNC_9 (struct g_geom*) ;
 int VAR_6 ;
 TYPE_2__ VAR_7 ;
 scalar_t__ FUNC_10 (int ,struct bio*) ;

__attribute__((used)) static void
FUNC_11(struct bio *VAR_8)
{
 struct g_geom *VAR_9 = VAR_8->bio_to->geom;
 struct g_sched_softc *VAR_10 = VAR_9->softc;
 struct bio *VAR_11;

 FUNC_3(VAR_4, VAR_8);
 FUNC_0(VAR_8, "Request received.");

 VAR_11 = FUNC_4(VAR_8);
 if (VAR_11 == ((void*)0)) {
  FUNC_5(VAR_8, VAR_2);
  return;
 }
 VAR_11->bio_done = VAR_5;
 VAR_11->bio_to = FUNC_2(&VAR_9->provider);
 FUNC_1(VAR_11->bio_to != ((void*)0), ("NULL provider"));


 if (VAR_8->bio_cmd != VAR_0 && VAR_8->bio_cmd != VAR_1)
  goto bypass;

 FUNC_0(VAR_11, "Sending request.");

 FUNC_8(VAR_9);






 if (!VAR_10->sc_gsched || (VAR_10->sc_flags & VAR_3) ||
     VAR_10->sc_gsched->gs_start(VAR_10->sc_data, VAR_11)) {
  FUNC_9(VAR_9);
  goto bypass;
 }




 if (VAR_11->bio_caller1 == ((void*)0))
  VAR_11->bio_caller1 = &VAR_7;

 VAR_11->bio_caller2 = VAR_9;
 VAR_10->sc_pending++;


 VAR_7.gs_in_flight++;
 VAR_7.gs_requests++;
 VAR_7.gs_bytes_in_flight += VAR_8->bio_length;
 if (VAR_8->bio_cmd == VAR_1) {
  VAR_7.gs_writes_in_flight++;
  VAR_7.gs_write_bytes_in_flight += VAR_8->bio_length;
 }
 FUNC_7(VAR_9);
 FUNC_9(VAR_9);
 return;

bypass:
 VAR_11->bio_done = VAR_6;
 VAR_11->bio_caller1 = ((void*)0);
 FUNC_6(VAR_11, FUNC_2(&VAR_9->consumer));
}
