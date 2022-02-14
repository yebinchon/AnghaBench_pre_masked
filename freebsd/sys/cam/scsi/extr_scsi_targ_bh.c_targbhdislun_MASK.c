
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ status; void* func_code; } ;
struct TYPE_8__ {TYPE_4__ ccb_h; scalar_t__ enable; } ;
struct TYPE_7__ {union ccb* abort_ccb; TYPE_4__ ccb_h; } ;
union ccb {TYPE_3__ cel; TYPE_2__ cab; } ;
struct targbh_softc {int flags; int immed_notify_slist; struct ccb_accept_tio* accept_tio_list; } ;
struct targbh_cmd_desc {struct ccb_accept_tio* atio_link; } ;
struct ccb_hdr {int dummy; } ;
struct TYPE_6__ {scalar_t__ ccb_descr; } ;
struct ccb_accept_tio {TYPE_1__ ccb_h; } ;
struct cam_periph {int path; scalar_t__ softc; } ;
typedef scalar_t__ cam_status ;
struct TYPE_10__ {int sle; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct ccb_hdr* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 TYPE_5__ VAR_5 ;
 int FUNC_2 (char*,scalar_t__) ;
 int FUNC_3 (union ccb*) ;
 int FUNC_4 (TYPE_4__*,int ,int ) ;

__attribute__((used)) static cam_status
FUNC_5(struct cam_periph *VAR_6)
{
 union ccb VAR_7;
 struct targbh_softc *VAR_8;
 struct ccb_accept_tio* VAR_9;
 struct ccb_hdr *VAR_10;

 VAR_8 = (struct targbh_softc *)VAR_6->softc;
 if ((VAR_8->flags & VAR_2) == 0)
  return VAR_1;




 while ((VAR_9 = VAR_8->accept_tio_list) != ((void*)0)) {

  VAR_8->accept_tio_list =
      ((struct targbh_cmd_desc*)VAR_9->ccb_h.ccb_descr)->atio_link;
  FUNC_4(&VAR_7.cab.ccb_h, VAR_6->path, VAR_0);
  VAR_7.cab.ccb_h.func_code = VAR_3;
  VAR_7.cab.abort_ccb = (union ccb *)VAR_9;
  FUNC_3(&VAR_7);
 }

 while ((VAR_10 = FUNC_0(&VAR_8->immed_notify_slist)) != ((void*)0)) {
  FUNC_1(&VAR_8->immed_notify_slist, VAR_5.sle);
  FUNC_4(&VAR_7.cab.ccb_h, VAR_6->path, VAR_0);
  VAR_7.cab.ccb_h.func_code = VAR_3;
  VAR_7.cab.abort_ccb = (union ccb *)VAR_10;
  FUNC_3(&VAR_7);
 }




 FUNC_4(&VAR_7.cel.ccb_h, VAR_6->path, VAR_0);
 VAR_7.cel.ccb_h.func_code = VAR_4;
 VAR_7.cel.enable = 0;
 FUNC_3(&VAR_7);

 if (VAR_7.cel.ccb_h.status != VAR_1)
  FUNC_2("targbhdislun - Disabling lun on controller failed "
         "with status 0x%x\n", VAR_7.cel.ccb_h.status);
 else
  VAR_8->flags &= ~VAR_2;
 return (VAR_7.cel.ccb_h.status);
}
