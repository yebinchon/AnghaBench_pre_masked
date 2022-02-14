
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_journal_softc {scalar_t__ sc_flush_in_progress; struct bio* sc_flush_queue; int sc_flush_count; struct g_consumer* sc_jconsumer; } ;
struct g_consumer {int dummy; } ;
struct bio {scalar_t__ bio_joffset; scalar_t__ bio_offset; } ;


 struct bio* FUNC_0 (struct bio*) ;
 int FUNC_1 (struct bio*,struct bio*,struct bio*) ;
 int FUNC_2 (struct bio*,struct bio*) ;
 int FUNC_3 (int,struct bio*,char*) ;
 int FUNC_4 (struct bio*,struct g_consumer*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_5 (struct bio*) ;
 scalar_t__ VAR_1 ;
 int FUNC_6 (struct g_journal_softc*) ;

__attribute__((used)) static void
FUNC_7(struct g_journal_softc *VAR_2)
{
 struct g_consumer *VAR_3;
 struct bio *VAR_4, *VAR_5, *VAR_6;

 VAR_3 = VAR_2->sc_jconsumer;
 VAR_4 = VAR_6 = ((void*)0);
 while (VAR_2->sc_flush_in_progress < VAR_1) {

  VAR_5 = FUNC_0(VAR_2->sc_flush_queue);
  if (VAR_5 != ((void*)0)) {
   FUNC_2(VAR_2->sc_flush_queue, VAR_5);
   VAR_2->sc_flush_count--;
   VAR_5->bio_offset = VAR_5->bio_joffset;
   VAR_5->bio_joffset = 0;
   VAR_2->sc_flush_in_progress++;
   FUNC_1(VAR_4, VAR_5, VAR_6);
   VAR_6 = VAR_5;
  }

  FUNC_6(VAR_2);

  if (FUNC_0(VAR_2->sc_flush_queue) == ((void*)0))
   break;
 }
 if (VAR_0)
  VAR_2->sc_flush_in_progress += FUNC_5(VAR_4);
 while ((VAR_5 = FUNC_0(VAR_4)) != ((void*)0)) {
  FUNC_2(VAR_4, VAR_5);
  FUNC_3(3, VAR_5, "Flush request send");
  FUNC_4(VAR_5, VAR_3);
 }
}
