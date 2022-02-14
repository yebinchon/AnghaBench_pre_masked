
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amdvi_softc {int event_max; scalar_t__ event; int dev; struct amdvi_ctrl* ctrl; } ;
struct amdvi_event {int dummy; } ;
struct TYPE_2__ {int len; int base; } ;
struct amdvi_ctrl {scalar_t__ evt_tail; scalar_t__ evt_head; TYPE_1__ event; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 uintptr_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int,int ,int) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int
FUNC_3(struct amdvi_softc *VAR_5)
{
 struct amdvi_ctrl *VAR_6;

 VAR_6 = VAR_5->ctrl;
 VAR_6->event.len = 8;
 VAR_5->event_max = 1 << VAR_6->event.len;
 VAR_5->event = FUNC_1(sizeof(struct amdvi_event) *
     VAR_5->event_max, VAR_0, VAR_1 | VAR_2);
 if ((uintptr_t)VAR_5->event & VAR_3) {
  FUNC_0(VAR_5->dev, "Event buffer not aligned on page.");
  return (0);
 }
 VAR_6->event.base = FUNC_2(VAR_5->event) / VAR_4;


 VAR_6->evt_head = 0;
 VAR_6->evt_tail = 0;

 return (0);
}
