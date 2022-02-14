
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_rr_softc {scalar_t__ sc_in_flight; struct g_rr_queue* sc_active; int sc_rr_tailq; } ;
struct g_rr_queue {scalar_t__ q_status; int q_bioq; scalar_t__ q_service; int q_flags; } ;
struct bio {scalar_t__ bio_length; } ;
struct TYPE_2__ {scalar_t__ bypass; int queue_depth; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct g_rr_queue* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct g_rr_queue*,int ) ;
 int FUNC_2 (int *,struct g_rr_queue*,int ) ;
 struct bio* FUNC_3 (int *) ;
 struct bio* FUNC_4 (int *) ;
 int FUNC_5 (struct g_rr_queue*) ;
 int FUNC_6 (struct g_rr_queue*) ;
 scalar_t__ FUNC_7 (struct g_rr_queue*,struct bio*) ;
 scalar_t__ FUNC_8 (int *,int ) ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static struct bio *
FUNC_9(void *VAR_5, int VAR_6)
{
 struct g_rr_softc *VAR_7 = VAR_5;
 struct g_rr_queue *VAR_8;
 struct bio *VAR_9, *VAR_10;
 int VAR_11;

 VAR_8 = VAR_7->sc_active;
 if (VAR_3.bypass == 0 && !VAR_6) {
  if (VAR_7->sc_in_flight >= FUNC_8(&VAR_3.queue_depth, 0))
   return (((void*)0));


  if (VAR_8 != ((void*)0) && VAR_8->q_status != VAR_2) {







   return (((void*)0));
  }
 } else if (VAR_8 != ((void*)0) && VAR_8->q_status != VAR_2) {
  FUNC_6(VAR_8);
  VAR_7->sc_active = VAR_8 = ((void*)0);
 }






 if (VAR_8 == ((void*)0)) {
  VAR_8 = FUNC_0(&VAR_7->sc_rr_tailq);
  if (VAR_8 == ((void*)0))
   return (((void*)0));

  FUNC_2(&VAR_7->sc_rr_tailq, VAR_8, VAR_4);
  VAR_7->sc_active = VAR_8;
  VAR_8->q_service = 0;
  VAR_8->q_flags &= ~VAR_0;
 }

 VAR_9 = FUNC_4(&VAR_8->q_bioq);
 VAR_8->q_service += VAR_9->bio_length;
 VAR_11 = FUNC_5(VAR_8);
 VAR_10 = FUNC_3(&VAR_8->q_bioq);
  if (VAR_11) {
  VAR_7->sc_active = ((void*)0);

  if (VAR_10 != ((void*)0))
   FUNC_1(&VAR_7->sc_rr_tailq, VAR_8, VAR_4);
  else
   FUNC_6(VAR_8);
 } else if (VAR_10 != ((void*)0)) {
  VAR_8->q_status = VAR_2;
 } else {
  if (!VAR_6 && FUNC_7(VAR_8, VAR_9)) {

   VAR_8->q_status = VAR_1;
  } else {

   FUNC_6(VAR_8);
   VAR_7->sc_active = ((void*)0);
  }
 }


 VAR_7->sc_in_flight++;

 return (VAR_9);
}
