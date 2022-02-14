
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_journal_softc {int sc_flush_in_progress; } ;
struct g_consumer {TYPE_1__* geom; } ;
struct bio {int bio_cflags; scalar_t__ bio_error; int bio_length; int bio_data; struct g_consumer* bio_from; } ;
struct TYPE_2__ {struct g_journal_softc* softc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,struct bio*,char*,...) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct bio*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct bio *VAR_2)
{
 struct g_journal_softc *VAR_3;
 struct g_consumer *VAR_4;

 FUNC_1((VAR_2->bio_cflags & VAR_1) == VAR_0,
     ("Invalid bio (%d != %d).", VAR_2->bio_cflags, VAR_0));

 VAR_4 = VAR_2->bio_from;
 VAR_3 = VAR_4->geom->softc;
 VAR_3->sc_flush_in_progress--;

 if (VAR_2->bio_error != 0) {
  FUNC_0(0, VAR_2, "[flush] Error while writing data (error=%d)",
      VAR_2->bio_error);
 }
 FUNC_3(VAR_2->bio_data, VAR_2->bio_length);
 FUNC_0(4, VAR_2, "DONE");
 FUNC_2(VAR_2);
}
