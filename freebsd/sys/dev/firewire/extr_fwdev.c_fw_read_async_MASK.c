
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct uio {int dummy; } ;
struct tcode_info {int hdr_len; } ;
struct TYPE_9__ {size_t tcode; } ;
struct TYPE_10__ {TYPE_1__ hdr; int ld; } ;
struct fw_pkt {TYPE_2__ mode; } ;
struct TYPE_11__ {int pay_len; struct fw_pkt* payload; struct fw_pkt hdr; } ;
struct fw_xfer {TYPE_6__* fc; TYPE_3__ recv; scalar_t__ sc; } ;
struct fw_drv1 {int rq; TYPE_6__* fc; } ;
struct fw_bind {int xferlist; } ;
struct TYPE_13__ {struct tcode_info* tcode; } ;
struct TYPE_12__ {int (* irx_post ) (TYPE_4__*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (TYPE_6__*) ;
 int VAR_1 ;
 struct fw_xfer* FUNC_3 (int *) ;
 int FUNC_4 (int *,struct fw_xfer*,int ) ;
 int FUNC_5 (int *,int ) ;
 TYPE_4__* VAR_2 ;
 int FUNC_6 (struct fw_xfer*) ;
 int VAR_3 ;
 int FUNC_7 (int *,int ,int ,char*,int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int) ;
 int FUNC_10 (TYPE_4__*,int ) ;
 int FUNC_11 (struct fw_pkt*,int ,struct uio*) ;

__attribute__((used)) static int
FUNC_12(struct fw_drv1 *VAR_4, struct uio *VAR_5, int VAR_6)
{
 int VAR_7 = 0, VAR_8;
 struct fw_xfer *VAR_9;
 struct fw_bind *VAR_10;
 struct fw_pkt *VAR_11;
 struct tcode_info *VAR_12;

 FUNC_0(VAR_4->fc);
 while ((VAR_9 = FUNC_3(&VAR_4->rq)) == ((void*)0) && VAR_7 == 0)
  VAR_7 = FUNC_7(&VAR_4->rq, FUNC_1(VAR_4->fc), VAR_0, "fwra", 0);

 if (VAR_7 != 0) {
  FUNC_2(VAR_4->fc);
  return (VAR_7);
 }

 VAR_8 = FUNC_8();
 FUNC_5(&VAR_4->rq, VAR_3);
 FUNC_2(VAR_9->fc);
 FUNC_9(VAR_8);
 VAR_11 = &VAR_9->recv.hdr;




 VAR_12 = &VAR_9->fc->tcode[VAR_11->mode.hdr.tcode];
 VAR_7 = FUNC_11(VAR_11, VAR_12->hdr_len, VAR_5);
 if (VAR_7)
  goto out;
 VAR_7 = FUNC_11(VAR_9->recv.payload, VAR_9->recv.pay_len, VAR_5);

out:

 VAR_10 = (struct fw_bind *)VAR_9->sc;
 FUNC_6(VAR_9);
 VAR_9->recv.pay_len = VAR_1;
 FUNC_0(VAR_9->fc);
 FUNC_4(&VAR_10->xferlist, VAR_9, VAR_3);
 FUNC_2(VAR_9->fc);
 return (VAR_7);
}
