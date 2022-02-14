
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* entries; } ;
struct TYPE_6__ {int status; TYPE_2__ sim_priv; } ;
union ccb {TYPE_3__ ccb_h; } ;
struct aac_softc {int aac_dev; } ;
struct aac_event {int ev_type; } ;
struct aac_cam {int sim; } ;
struct TYPE_4__ {struct aac_cam* ptr; } ;



 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct aac_event*,int ) ;
 int FUNC_2 (union ccb*) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void
FUNC_4(struct aac_softc *VAR_2, struct aac_event *VAR_3, void *VAR_4)
{
 union ccb *VAR_5;
 struct aac_cam *VAR_6;

 switch (VAR_3->ev_type) {
 case 128:
  VAR_5 = VAR_4;
  VAR_6 = VAR_5->ccb_h.sim_priv.entries[0].ptr;
  FUNC_1(VAR_3, VAR_1);
  FUNC_3(VAR_6->sim, 1);
  VAR_5->ccb_h.status = VAR_0;
  FUNC_2(VAR_5);
  break;
 default:
  FUNC_0(VAR_2->aac_dev, "unknown event %d in aac_cam\n",
      VAR_3->ev_type);
  break;
 }

 return;
}
