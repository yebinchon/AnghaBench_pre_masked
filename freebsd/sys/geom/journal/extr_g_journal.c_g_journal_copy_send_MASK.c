
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct bio* jj_queue; } ;
struct g_journal_softc {scalar_t__ sc_copy_in_progress; int sc_dconsumer; int sc_copy_queue; int sc_mtx; TYPE_1__ sc_inactive; } ;
struct bio {scalar_t__ bio_joffset; int * bio_data; int bio_cflags; } ;


 struct bio* FUNC_0 (struct bio*) ;
 int FUNC_1 (struct bio*,struct bio*,struct bio*) ;
 int FUNC_2 (int ,struct bio*) ;
 int FUNC_3 (struct bio*,struct bio*) ;
 int VAR_0 ;
 int FUNC_4 (int,struct bio*,char*) ;
 int FUNC_5 (struct bio*,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_6 (struct bio*) ;
 scalar_t__ VAR_2 ;
 int FUNC_7 (struct g_journal_softc*,struct bio*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void
FUNC_10(struct g_journal_softc *VAR_3)
{
 struct bio *VAR_4, *VAR_5, *VAR_6;

 VAR_4 = VAR_6 = ((void*)0);
 FUNC_8(&VAR_3->sc_mtx);
 for (; VAR_3->sc_copy_in_progress < VAR_2;) {
  VAR_5 = FUNC_0(VAR_3->sc_inactive.jj_queue);
  if (VAR_5 == ((void*)0))
   break;
  FUNC_3(VAR_3->sc_inactive.jj_queue, VAR_5);
  VAR_3->sc_copy_in_progress++;
  FUNC_1(VAR_4, VAR_5, VAR_6);
  VAR_6 = VAR_5;
 }
 FUNC_9(&VAR_3->sc_mtx);
 if (VAR_1)
  VAR_3->sc_copy_in_progress += FUNC_6(VAR_4);
 while ((VAR_5 = FUNC_0(VAR_4)) != ((void*)0)) {
  FUNC_3(VAR_4, VAR_5);
  FUNC_2(VAR_3->sc_copy_queue, VAR_5);
  VAR_5->bio_cflags = VAR_0;
  if (VAR_5->bio_data == ((void*)0))
   FUNC_7(VAR_3, VAR_5);
  else {
   VAR_5->bio_joffset = 0;
   FUNC_4(4, VAR_5, "SEND");
   FUNC_5(VAR_5, VAR_3->sc_dconsumer);
  }
 }
}
