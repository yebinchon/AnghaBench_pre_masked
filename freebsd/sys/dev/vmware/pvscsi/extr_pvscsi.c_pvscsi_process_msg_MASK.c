
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int path; } ;
union ccb {TYPE_1__ ccb_h; } ;
struct pvscsi_softc {int dev; int sim; } ;
struct pvscsi_ring_msg_dev_status_changed {int const type; int * lun; int target; int bus; } ;
struct pvscsi_ring_msg_desc {int type; } ;


 int VAR_0 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 union ccb* FUNC_2 () ;
 int FUNC_3 (int *,int *,int ,int ,int ) ;
 int FUNC_4 (union ccb*) ;
 int FUNC_5 (union ccb*) ;

__attribute__((used)) static void
FUNC_6(struct pvscsi_softc *VAR_1, struct pvscsi_ring_msg_desc *VAR_2)
{
 struct pvscsi_ring_msg_dev_status_changed *VAR_3;

 union ccb *VAR_4;
 switch (VAR_2->type) {
 case 129:
 case 128: {
  VAR_3 = (struct pvscsi_ring_msg_dev_status_changed *)VAR_2;

  FUNC_1(VAR_1->dev, "MSG: device %s at scsi%u:%u:%u\n",
      VAR_3->type == 129 ? "addition" : "removal",
      VAR_3->bus, VAR_3->target, VAR_3->lun[1]);

  VAR_4 = FUNC_2();
  if (VAR_4 == ((void*)0)) {
   FUNC_1(VAR_1->dev,
       "Error allocating CCB for dev change.\n");
   break;
  }

  if (FUNC_3(&VAR_4->ccb_h.path, ((void*)0),
      FUNC_0(VAR_1->sim), VAR_3->target, VAR_3->lun[1])
      != VAR_0) {
   FUNC_1(VAR_1->dev,
       "Error creating path for dev change.\n");
   FUNC_4(VAR_4);
   break;
  }

  FUNC_5(VAR_4);
 } break;
 default:
  FUNC_1(VAR_1->dev, "Unknown msg type 0x%x\n", VAR_2->type);
 };
}
