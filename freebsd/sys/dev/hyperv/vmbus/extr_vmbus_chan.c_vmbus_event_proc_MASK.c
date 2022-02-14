
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmbus_softc {int dummy; } ;
struct vmbus_evtflags {int evt_flags; } ;


 struct vmbus_evtflags* FUNC_0 (struct vmbus_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct vmbus_softc*,int ,struct vmbus_evtflags*) ;

void
FUNC_2(struct vmbus_softc *VAR_3, int VAR_4)
{
 struct vmbus_evtflags *VAR_5;





 VAR_5 = FUNC_0(VAR_3, VAR_1, VAR_4) + VAR_0;
 FUNC_1(VAR_3, VAR_5->evt_flags,
     FUNC_0(VAR_3, VAR_2, VAR_4));
}
