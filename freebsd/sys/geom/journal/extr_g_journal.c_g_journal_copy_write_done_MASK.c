
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct g_journal_softc {scalar_t__ sc_copy_in_progress; scalar_t__ sc_journal_copying; int sc_copy_queue; } ;
struct bio {scalar_t__ bio_cflags; scalar_t__ bio_error; int bio_length; int bio_data; TYPE_2__* bio_from; } ;
struct TYPE_4__ {TYPE_1__* geom; } ;
struct TYPE_3__ {struct g_journal_softc* softc; } ;


 int FUNC_0 (int ,struct bio*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,struct bio*,char*,...) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (struct bio*) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void
FUNC_6(struct bio *VAR_1)
{
 struct g_journal_softc *VAR_2;

 FUNC_3(VAR_1->bio_cflags == VAR_0,
     ("Invalid bio (%d != %d).", VAR_1->bio_cflags, VAR_0));

 VAR_2 = VAR_1->bio_from->geom->softc;
 VAR_2->sc_copy_in_progress--;

 if (VAR_1->bio_error != 0) {
  FUNC_2(0, VAR_1, "[copy] Error while writing data (error=%d)",
      VAR_1->bio_error);
 }
 FUNC_0(VAR_2->sc_copy_queue, VAR_1);
 FUNC_5(VAR_1->bio_data, VAR_1->bio_length);
 FUNC_2(4, VAR_1, "DONE");
 FUNC_4(VAR_1);

 if (VAR_2->sc_copy_in_progress == 0) {



  FUNC_1(1, "Data has been copied.");
  VAR_2->sc_journal_copying = 0;
 }
}
