
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int time_t ;
struct g_provider {int sectorsize; int mediasize; } ;
struct g_journal_softc {int sc_flags; scalar_t__ sc_current_count; scalar_t__ sc_flush_in_progress; scalar_t__ sc_copy_in_progress; int sc_mtx; int sc_back_queue; int sc_regular_queue; int * sc_worker; int * sc_journal_copying; int * sc_rootmount; int sc_sectorsize; int sc_mediasize; int * sc_name; struct g_geom* sc_geom; TYPE_2__* sc_dconsumer; int sc_bio_flush; TYPE_2__* sc_jconsumer; } ;
struct g_geom {int * name; } ;
struct bio {int bio_cflags; scalar_t__ bio_cmd; scalar_t__ bio_length; scalar_t__ bio_offset; } ;
struct TYPE_4__ {TYPE_1__* provider; } ;
struct TYPE_3__ {int * name; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;


 int FUNC_0 (int,char*,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,struct bio*,char*) ;
 int VAR_6 ;
 struct bio* FUNC_2 (int *) ;
 int FUNC_3 (int *,struct bio*) ;
 int VAR_7 ;
 int FUNC_4 (struct g_provider*,int ) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (struct g_journal_softc*,struct bio*) ;
 int FUNC_7 (struct bio*) ;
 int FUNC_8 (struct g_journal_softc*) ;
 int FUNC_9 (struct bio*) ;
 int FUNC_10 (struct g_journal_softc*) ;
 int FUNC_11 (struct bio*) ;
 int FUNC_12 (struct g_journal_softc*) ;
 int FUNC_13 (struct g_journal_softc*) ;
 int FUNC_14 (struct g_journal_softc*,struct bio*,scalar_t__,scalar_t__) ;
 int FUNC_15 (struct g_journal_softc*) ;
 int FUNC_16 (struct g_journal_softc*) ;
 int FUNC_17 (struct g_journal_softc*,int ) ;
 struct g_provider* FUNC_18 (struct g_geom*,char*,int *) ;
 int FUNC_19 () ;
 int FUNC_20 () ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (char*,int) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int ,int ) ;
 int FUNC_27 (int ) ;
 int FUNC_28 (int ) ;
 int VAR_8 ;
 int FUNC_29 (int **) ;

__attribute__((used)) static void
FUNC_30(void *VAR_9)
{
 struct g_journal_softc *VAR_10;
 struct g_geom *VAR_11;
 struct g_provider *VAR_12;
 struct bio *VAR_13;
 time_t VAR_14;
 int VAR_15;

 FUNC_27(VAR_7);
 FUNC_26(VAR_7, VAR_6);
 FUNC_28(VAR_7);

 VAR_10 = VAR_9;
 VAR_15 = 0;

 if (VAR_10->sc_flags & VAR_0) {
  FUNC_0(0, "Journal %s clean.", VAR_10->sc_name);
  FUNC_13(VAR_10);
 } else {
  FUNC_16(VAR_10);
 }



 VAR_10->sc_bio_flush = 0;
 if (FUNC_5(VAR_10->sc_jconsumer) == 0) {
  VAR_10->sc_bio_flush |= VAR_5;
  FUNC_0(1, "BIO_FLUSH supported by %s.",
      VAR_10->sc_jconsumer->provider->name);
 } else {
  FUNC_0(0, "BIO_FLUSH not supported by %s.",
      VAR_10->sc_jconsumer->provider->name);
 }
 if (VAR_10->sc_jconsumer != VAR_10->sc_dconsumer) {
  if (FUNC_5(VAR_10->sc_dconsumer) == 0) {
   VAR_10->sc_bio_flush |= VAR_4;
   FUNC_0(1, "BIO_FLUSH supported by %s.",
       VAR_10->sc_dconsumer->provider->name);
  } else {
   FUNC_0(0, "BIO_FLUSH not supported by %s.",
       VAR_10->sc_dconsumer->provider->name);
  }
 }

 VAR_11 = VAR_10->sc_geom;
 FUNC_19();
 VAR_12 = FUNC_18(VAR_11, "%s.journal", VAR_10->sc_name);
 VAR_12->mediasize = VAR_10->sc_mediasize;





 VAR_12->sectorsize = VAR_10->sc_sectorsize;
 FUNC_4(VAR_12, 0);
 FUNC_20();
 VAR_14 = VAR_8;

 if (VAR_10->sc_rootmount != ((void*)0)) {
  FUNC_0(1, "root_mount_rel %p", VAR_10->sc_rootmount);
  FUNC_25(VAR_10->sc_rootmount);
  VAR_10->sc_rootmount = ((void*)0);
 }

 for (;;) {

  FUNC_22(&VAR_10->sc_mtx);
  VAR_13 = FUNC_2(&VAR_10->sc_back_queue);
  if (VAR_13 != ((void*)0))
   VAR_15 = (VAR_13->bio_cflags & VAR_3);
  if (VAR_13 == ((void*)0)) {
   VAR_13 = FUNC_2(&VAR_10->sc_regular_queue);
   if (VAR_13 != ((void*)0))
    VAR_15 = 128;
  }
  if (VAR_13 == ((void*)0)) {
try_switch:
   if ((VAR_10->sc_flags & VAR_2) ||
       (VAR_10->sc_flags & VAR_1)) {
    if (VAR_10->sc_current_count > 0) {
     FUNC_23(&VAR_10->sc_mtx);
     FUNC_10(VAR_10);
     FUNC_12(VAR_10);
     continue;
    }
    if (VAR_10->sc_flush_in_progress > 0)
     goto sleep;
    if (VAR_10->sc_copy_in_progress > 0)
     goto sleep;
   }
   if (VAR_10->sc_flags & VAR_2) {
    FUNC_23(&VAR_10->sc_mtx);
    FUNC_15(VAR_10);
    FUNC_29(&VAR_10->sc_journal_copying);
    continue;
   }
   if (VAR_10->sc_flags & VAR_1) {
    FUNC_0(1, "Shutting down worker "
        "thread for %s.", VAR_11->name);
    VAR_10->sc_worker = ((void*)0);
    FUNC_29(&VAR_10->sc_worker);
    FUNC_23(&VAR_10->sc_mtx);
    FUNC_21(0);
   }
sleep:
   FUNC_17(VAR_10, VAR_14);
   continue;
  }




  if ((VAR_10->sc_flags & VAR_2) &&
      VAR_15 == 128 && VAR_13->bio_cmd == 132) {
   FUNC_1(2, VAR_13, "WRITE on SWITCH");
   goto try_switch;
  }
  if (VAR_15 == 128)
   FUNC_3(&VAR_10->sc_regular_queue, VAR_13);
  else
   FUNC_3(&VAR_10->sc_back_queue, VAR_13);
  FUNC_23(&VAR_10->sc_mtx);
  switch (VAR_15) {
  case 128:

   switch (VAR_13->bio_cmd) {
   case 133:
    FUNC_14(VAR_10, VAR_13, VAR_13->bio_offset,
        VAR_13->bio_offset + VAR_13->bio_length);
    break;
   case 132:
    VAR_14 = VAR_8;
    FUNC_6(VAR_10, VAR_13);
    FUNC_12(VAR_10);
    break;
   default:
    FUNC_24("Invalid bio_cmd (%d).", VAR_13->bio_cmd);
   }
   break;
  case 131:
   switch (VAR_13->bio_cmd) {
   case 133:
    if (FUNC_7(VAR_13))
     FUNC_8(VAR_10);
    break;
   case 132:
    FUNC_9(VAR_13);
    FUNC_8(VAR_10);
    break;
   default:
    FUNC_24("Invalid bio_cmd (%d).", VAR_13->bio_cmd);
   }
   break;
  case 130:
   FUNC_11(VAR_13);
   FUNC_12(VAR_10);
   break;
  case 129:
  default:
   FUNC_24("Invalid bio (%d).", VAR_15);
  }
 }
}
