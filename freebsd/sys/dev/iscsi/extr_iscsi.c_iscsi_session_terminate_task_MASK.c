
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iscsi_session {int dummy; } ;
struct iscsi_outstanding {TYPE_2__* io_ccb; } ;
typedef int cam_status ;
struct TYPE_3__ {int status; int path; } ;
struct TYPE_4__ {TYPE_1__ ccb_h; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iscsi_session*,char*) ;
 int FUNC_1 (struct iscsi_session*) ;
 int FUNC_2 (struct iscsi_session*,struct iscsi_outstanding*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static void
FUNC_5(struct iscsi_session *VAR_3,
    struct iscsi_outstanding *VAR_4, cam_status VAR_5)
{

 FUNC_1(VAR_3);

 if (VAR_4->io_ccb != ((void*)0)) {
  VAR_4->io_ccb->ccb_h.status &= ~(VAR_1 | VAR_2);
  VAR_4->io_ccb->ccb_h.status |= VAR_5;
  if ((VAR_4->io_ccb->ccb_h.status & VAR_0) == 0) {
   VAR_4->io_ccb->ccb_h.status |= VAR_0;
   FUNC_4(VAR_4->io_ccb->ccb_h.path, 1);
   FUNC_0(VAR_3, "freezing devq");
  }
  FUNC_3(VAR_4->io_ccb);
 }
 FUNC_2(VAR_3, VAR_4);
}
