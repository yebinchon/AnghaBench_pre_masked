
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mps_softc {TYPE_1__* sassc; } ;
struct mps_fw_event_work {int dummy; } ;
struct TYPE_2__ {int ev_queue; } ;


 struct mps_fw_event_work* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct mps_fw_event_work*,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct mps_softc*) ;
 int FUNC_3 (struct mps_softc*) ;
 int FUNC_4 (struct mps_softc*,struct mps_fw_event_work*) ;

void
FUNC_5(void *VAR_1, int VAR_2)
{
 struct mps_fw_event_work *VAR_3;
 struct mps_softc *VAR_4;

 VAR_4 = (struct mps_softc *)VAR_1;
 FUNC_2(VAR_4);
 while ((VAR_3 = FUNC_0(&VAR_4->sassc->ev_queue)) != ((void*)0)) {
  FUNC_1(&VAR_4->sassc->ev_queue, VAR_3, VAR_0);
  FUNC_4(VAR_4, VAR_3);
 }
 FUNC_3(VAR_4);
}
