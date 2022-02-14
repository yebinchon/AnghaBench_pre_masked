
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_rr_softc {int sc_rr_tailq; int sc_wait; struct g_rr_queue* sc_active; } ;
struct g_rr_queue {int q_bionum; int q_bioq; int q_status; } ;
struct bio {struct g_rr_queue* bio_caller1; } ;
struct TYPE_2__ {scalar_t__ bypass; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct g_rr_queue*,int ) ;
 int FUNC_1 (int *,struct bio*) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct g_rr_queue* FUNC_4 (struct g_rr_softc*,struct bio*) ;
 int FUNC_5 (struct g_rr_queue*,struct bio*) ;
 int FUNC_6 (struct g_rr_queue*) ;
 int FUNC_7 (struct g_rr_queue*) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_8(void *VAR_3, struct bio *VAR_4)
{
 struct g_rr_softc *VAR_5 = VAR_3;
 struct g_rr_queue *VAR_6;

 if (VAR_1.bypass)
  return (-1);


 VAR_6 = FUNC_4(VAR_5, VAR_4);
 if (VAR_6 == ((void*)0))
  return (-1);

 if (FUNC_2(&VAR_6->q_bioq) == ((void*)0)) {





  if (VAR_6 == VAR_5->sc_active) {
   VAR_6->q_status = VAR_0;
   FUNC_3(&VAR_5->sc_wait);
  } else {
   FUNC_7(VAR_6);
   FUNC_0(&VAR_5->sc_rr_tailq, VAR_6, VAR_2);
  }
 }

 VAR_6->q_bionum = 1 + VAR_6->q_bionum - (VAR_6->q_bionum >> 3);

 FUNC_6(VAR_6);
 FUNC_5(VAR_6, VAR_4);


 VAR_4->bio_caller1 = VAR_6;
 FUNC_1(&VAR_6->q_bioq, VAR_4);

 return (0);
}
