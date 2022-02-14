
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdvi_softc {int event_max; int dev; struct amdvi_event* event; struct amdvi_ctrl* ctrl; } ;
struct amdvi_event {int opcode; } ;
struct amdvi_ctrl {int evt_head; int evt_tail; } ;


 int FUNC_0 (int,int,int) ;
 int FUNC_1 (struct amdvi_event*) ;
 int FUNC_2 (int ,char*,int,int,int ) ;

__attribute__((used)) static void
FUNC_3(struct amdvi_softc *VAR_0)
{
 struct amdvi_ctrl *VAR_1;
 struct amdvi_event *VAR_2;
 int VAR_3, VAR_4;

 VAR_1 = VAR_0->ctrl;
 VAR_4 = sizeof(struct amdvi_event);
 for (VAR_3 = 0; VAR_3 < VAR_0->event_max; VAR_3++) {
  VAR_2 = &VAR_0->event[VAR_1->evt_head / VAR_4];
  if (!VAR_2->opcode)
   break;
  FUNC_2(VAR_0->dev, "\t[Event%d: Head:0x%x Tail:0x%x]\n",
      VAR_3, VAR_1->evt_head, VAR_1->evt_tail);
  FUNC_1(VAR_2);
  VAR_1->evt_head = FUNC_0(VAR_1->evt_head, VAR_4,
      VAR_0->event_max);
 }
}
