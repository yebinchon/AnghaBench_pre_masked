
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_journal_softc {scalar_t__ sc_current_count; int sc_current_queue; } ;
struct bio {int bio_length; int bio_completed; } ;


 int FUNC_0 (int,struct bio*,char*,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (struct bio*,int ) ;
 int FUNC_2 (struct g_journal_softc*) ;
 int FUNC_3 (int *,struct bio*,int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_5(struct g_journal_softc *VAR_2, struct bio *VAR_3)
{
 int VAR_4;

 FUNC_0(4, VAR_3, "CURRENT %d", VAR_2->sc_current_count);
 VAR_4 = FUNC_3(&VAR_2->sc_current_queue, VAR_3, VAR_0);
 VAR_2->sc_current_count += VAR_4;
 VAR_4 = FUNC_4(VAR_2->sc_current_queue);
 VAR_2->sc_current_count += VAR_4;




 VAR_3->bio_completed = VAR_3->bio_length;
 FUNC_1(VAR_3, 0);
 if (VAR_2->sc_current_count >= VAR_1) {



  FUNC_2(VAR_2);
 }
}
