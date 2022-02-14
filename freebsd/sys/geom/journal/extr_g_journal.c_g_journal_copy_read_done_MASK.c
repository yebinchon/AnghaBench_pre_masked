
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct g_journal_softc {struct g_consumer* sc_dconsumer; int sc_copy_in_progress; } ;
struct g_consumer {int dummy; } ;
struct bio {scalar_t__ bio_cflags; scalar_t__ bio_error; int bio_data; int bio_length; TYPE_3__* bio_to; struct bio* bio_parent; TYPE_2__* bio_from; } ;
struct TYPE_6__ {int name; } ;
struct TYPE_5__ {TYPE_1__* geom; } ;
struct TYPE_4__ {struct g_journal_softc* softc; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,int ,scalar_t__) ;
 int FUNC_1 (int,struct bio*,char*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (struct bio*) ;
 int FUNC_4 (struct bio*,struct g_consumer*) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int
FUNC_6(struct bio *VAR_1)
{
 struct g_journal_softc *VAR_2;
 struct g_consumer *VAR_3;
 struct bio *VAR_4;

 FUNC_2(VAR_1->bio_cflags == VAR_0,
     ("Invalid bio (%d != %d).", VAR_1->bio_cflags, VAR_0));

 VAR_2 = VAR_1->bio_from->geom->softc;
 VAR_4 = VAR_1->bio_parent;

 if (VAR_1->bio_error != 0) {
  FUNC_0(0, "Error while reading data from %s (error=%d).",
      VAR_1->bio_to->name, VAR_1->bio_error);



  FUNC_5(VAR_1->bio_data, VAR_1->bio_length);
  FUNC_3(VAR_4);
  FUNC_3(VAR_1);
  VAR_2->sc_copy_in_progress--;
  return (1);
 }
 VAR_4->bio_data = VAR_1->bio_data;
 VAR_3 = VAR_2->sc_dconsumer;
 FUNC_4(VAR_4, VAR_3);
 FUNC_1(4, VAR_1, "READ DONE");
 FUNC_3(VAR_1);
 return (0);
}
