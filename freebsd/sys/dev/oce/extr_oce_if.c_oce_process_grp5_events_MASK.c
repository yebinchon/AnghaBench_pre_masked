
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int async_type; } ;
struct TYPE_7__ {TYPE_1__ s; } ;
struct oce_mq_cqe {TYPE_2__ u0; } ;
struct oce_async_evt_grp5_os2bmc {int dummy; } ;
struct oce_async_event_grp5_pvid_state {int tag; int enabled; } ;
struct TYPE_8__ {int pvid; } ;
typedef TYPE_3__* POCE_SOFTC ;




 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,struct oce_async_evt_grp5_os2bmc*) ;

__attribute__((used)) static void FUNC_1(POCE_SOFTC VAR_1, struct oce_mq_cqe *VAR_2)
{
 struct oce_async_event_grp5_pvid_state *VAR_3;
 struct oce_async_evt_grp5_os2bmc *VAR_4;

 switch (VAR_2->u0.s.async_type) {
 case 128:

  VAR_3 = (struct oce_async_event_grp5_pvid_state *)VAR_2;
  if (VAR_3->enabled)
   VAR_1->pvid = VAR_3->tag & VAR_0;
  else
   VAR_1->pvid = 0;
  break;
 case 129:
  VAR_4 = (struct oce_async_evt_grp5_os2bmc *)VAR_2;
  FUNC_0(VAR_1, VAR_4);
  break;
 default:
  break;
 }
}
