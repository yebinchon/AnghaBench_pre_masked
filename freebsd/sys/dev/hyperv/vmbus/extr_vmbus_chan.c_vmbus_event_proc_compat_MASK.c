
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmbus_softc {int vmbus_rx_evtflags; } ;
struct vmbus_evtflags {int * evt_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct vmbus_evtflags* FUNC_0 (struct vmbus_softc*,int ,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int VAR_3 ;
 int FUNC_2 (struct vmbus_softc*,int ,int) ;

void
FUNC_3(struct vmbus_softc *VAR_4, int VAR_5)
{
 struct vmbus_evtflags *VAR_6;

 VAR_6 = FUNC_0(VAR_4, VAR_3, VAR_5) + VAR_2;
 if (FUNC_1(&VAR_6->evt_flags[0], 0)) {
  FUNC_2(VAR_4, VAR_4->vmbus_rx_evtflags,
      VAR_0 >> VAR_1);
 }
}
