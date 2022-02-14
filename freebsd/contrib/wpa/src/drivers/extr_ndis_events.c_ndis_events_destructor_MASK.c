
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ndis_events_data {int pLoc; int pSvc; int event_avail; int write_pipe; int read_pipe; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_4(struct ndis_events_data *VAR_1)
{
 FUNC_0(VAR_1->read_pipe);
 FUNC_0(VAR_1->write_pipe);
 FUNC_0(VAR_1->event_avail);
 FUNC_3(VAR_1->pSvc);
 FUNC_2(VAR_1->pLoc);
 if (--VAR_0 == 0)
  FUNC_1();
}
