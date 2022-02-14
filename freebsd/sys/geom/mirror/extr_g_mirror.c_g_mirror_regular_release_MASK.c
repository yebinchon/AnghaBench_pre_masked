
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_mirror_softc {int sc_queue_mtx; int sc_queue; int sc_regular_delayed; } ;
struct bio {int dummy; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *,int *,int ) ;
 struct bio* FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (struct g_mirror_softc*,struct bio*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(struct g_mirror_softc *VAR_2)
{
 struct bio *VAR_3;

 if ((VAR_3 = FUNC_2(&VAR_2->sc_regular_delayed)) == ((void*)0))
  return;
 if (FUNC_4(VAR_2, VAR_3))
  return;

 FUNC_0(2, "Requeuing regular requests after collision.");
 FUNC_5(&VAR_2->sc_queue_mtx);
 FUNC_1(&VAR_2->sc_regular_delayed, &VAR_2->sc_queue, VAR_1);
 FUNC_3(&VAR_2->sc_regular_delayed, &VAR_2->sc_queue, VAR_0, VAR_1);
 FUNC_6(&VAR_2->sc_queue_mtx);
}
