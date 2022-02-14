
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct uio {int uio_resid; } ;
struct tcode_info {int hdr_len; } ;
struct TYPE_9__ {int pay_len; int spd; int * payload; int hdr; } ;
struct fw_xfer {int resp; int flag; TYPE_4__* fc; TYPE_3__ send; int hand; int * sc; } ;
struct TYPE_7__ {size_t tcode; } ;
struct TYPE_8__ {TYPE_1__ hdr; } ;
struct fw_pkt {TYPE_2__ mode; } ;
struct fw_drv1 {int rq; TYPE_4__* fc; } ;
typedef scalar_t__ caddr_t ;
struct TYPE_10__ {struct tcode_info* tcode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,struct fw_xfer*,int ) ;
 int FUNC_3 (struct fw_pkt*,int *,int) ;
 int FUNC_4 (struct fw_pkt*,int) ;
 int FUNC_5 (TYPE_4__*,int,struct fw_xfer*) ;
 struct fw_xfer* FUNC_6 (int ,int,int ) ;
 int FUNC_7 (struct fw_xfer*) ;
 int FUNC_8 (struct fw_xfer*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (scalar_t__,int,struct uio*) ;

__attribute__((used)) static int
FUNC_10(struct fw_drv1 *VAR_6, struct uio *VAR_7, int VAR_8)
{
 struct fw_xfer *VAR_9;
 struct fw_pkt VAR_10;
 struct tcode_info *VAR_11;
 int VAR_12;

 FUNC_4(&VAR_10, sizeof(struct fw_pkt));
 if ((VAR_12 = FUNC_9((caddr_t)&VAR_10, sizeof(uint32_t), VAR_7)))
  return (VAR_12);
 VAR_11 = &VAR_6->fc->tcode[VAR_10.mode.hdr.tcode];
 if ((VAR_12 = FUNC_9((caddr_t)&VAR_10 + sizeof(uint32_t),
     VAR_11->hdr_len - sizeof(uint32_t), VAR_7)))
  return (VAR_12);

 if ((VAR_9 = FUNC_6(VAR_2, VAR_7->uio_resid,
     VAR_3 )) == ((void*)0))
  return (VAR_0);

 FUNC_3(&VAR_10, &VAR_9->send.hdr, sizeof(struct fw_pkt));
 VAR_9->send.pay_len = VAR_7->uio_resid;
 if (VAR_7->uio_resid > 0) {
  if ((VAR_12 = FUNC_9((caddr_t)&VAR_9->send.payload[0],
      VAR_7->uio_resid, VAR_7)))
   goto out;
 }

 VAR_9->fc = VAR_6->fc;
 VAR_9->sc = ((void*)0);
 VAR_9->hand = VAR_4;
 VAR_9->send.spd = 2 ;

 if ((VAR_12 = FUNC_5(VAR_9->fc, -1, VAR_9)))
  goto out;

 if ((VAR_12 = FUNC_8(VAR_9)))
  goto out;

 if (VAR_9->resp != 0) {
  VAR_12 = VAR_9->resp;
  goto out;
 }

 if (VAR_9->flag & VAR_1) {
  FUNC_0(VAR_9->fc);
  FUNC_2(&VAR_6->rq, VAR_9, VAR_5);
  FUNC_1(VAR_9->fc);
  return (0);
 }

out:
 FUNC_7(VAR_9);
 return (VAR_12);
}
