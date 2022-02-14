
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct sbp_target {int n_xfer; TYPE_7__* fwdev; TYPE_8__* sbp; int xferlist; } ;
struct sbp_dev {struct sbp_target* target; TYPE_4__* login; } ;
struct TYPE_13__ {int tcode; int dst; scalar_t__ pri; scalar_t__ tlrt; scalar_t__ dest_lo; int dest_hi; } ;
struct TYPE_14__ {TYPE_5__ wreqq; } ;
struct fw_pkt {TYPE_6__ mode; } ;
struct TYPE_11__ {int pay_len; struct fw_pkt hdr; int spd; } ;
struct TYPE_9__ {scalar_t__ pay_len; } ;
struct fw_xfer {TYPE_3__ send; scalar_t__ sc; int fc; TYPE_1__ recv; } ;
typedef scalar_t__ caddr_t ;
struct TYPE_10__ {int fc; } ;
struct TYPE_16__ {TYPE_2__ fd; } ;
struct TYPE_15__ {int dst; int speed; } ;
struct TYPE_12__ {scalar_t__ cmd_lo; int cmd_hi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_8__*) ;
 struct fw_xfer* FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ VAR_3 ;
 struct fw_xfer* FUNC_3 (int ,int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static struct fw_xfer *
FUNC_6(struct sbp_dev *VAR_6, int VAR_7, int VAR_8)
{
 struct fw_xfer *VAR_9;
 struct fw_pkt *VAR_10;
 struct sbp_target *VAR_11;
 int VAR_12 = 0;

 FUNC_0(VAR_6->target->sbp);

 VAR_11 = VAR_6->target;
 VAR_9 = FUNC_1(&VAR_11->xferlist);
 if (VAR_9 == ((void*)0)) {
  if (VAR_11->n_xfer > 5 ) {
   FUNC_5("sbp: no more xfer for this target\n");
   return (((void*)0));
  }
  VAR_9 = FUNC_3(VAR_2, 8, 0);
  if (VAR_9 == ((void*)0)) {
   FUNC_5("sbp: fw_xfer_alloc_buf failed\n");
   return ((void*)0);
  }
  VAR_11->n_xfer++;
  if (VAR_3)
   FUNC_5("sbp: alloc %d xfer\n", VAR_11->n_xfer);
  VAR_12 = 1;
 } else {
  FUNC_2(&VAR_11->xferlist, VAR_4);
 }

 if (VAR_12) {
  VAR_9->recv.pay_len = 0;
  VAR_9->send.spd = FUNC_4(VAR_6->target->fwdev->speed, VAR_5);
  VAR_9->fc = VAR_6->target->sbp->fd.fc;
 }

 if (VAR_7 == VAR_1)
  VAR_9->send.pay_len = 8;
 else
  VAR_9->send.pay_len = 0;

 VAR_9->sc = (caddr_t)VAR_6;
 VAR_10 = &VAR_9->send.hdr;
 VAR_10->mode.wreqq.dest_hi = VAR_6->login->cmd_hi;
 VAR_10->mode.wreqq.dest_lo = VAR_6->login->cmd_lo + VAR_8;
 VAR_10->mode.wreqq.tlrt = 0;
 VAR_10->mode.wreqq.tcode = VAR_7;
 VAR_10->mode.wreqq.pri = 0;
 VAR_10->mode.wreqq.dst = VAR_0 | VAR_6->target->fwdev->dst;

 return VAR_9;
}
