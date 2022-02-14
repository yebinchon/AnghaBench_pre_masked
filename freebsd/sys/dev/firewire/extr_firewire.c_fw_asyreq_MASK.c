
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct tcode_info {int flag; int hdr_len; } ;
struct fw_xferq {scalar_t__ queued; scalar_t__ maxq; int * start; } ;
struct TYPE_10__ {int len; } ;
struct TYPE_9__ {int len; } ;
struct TYPE_8__ {int dest_hi; int dest_lo; } ;
struct TYPE_7__ {int tcode; } ;
struct TYPE_11__ {TYPE_4__ rresb; TYPE_3__ stream; TYPE_2__ rreqq; TYPE_1__ common; } ;
struct fw_pkt {TYPE_5__ mode; } ;
struct TYPE_12__ {int pay_len; struct fw_pkt hdr; } ;
struct fw_xfer {int resp; int tl; struct fw_xferq* q; struct firewire_comm* fc; TYPE_6__ send; int flag; int * hand; } ;
struct firewire_comm {scalar_t__ status; int bdev; int maxrec; struct fw_xferq* ats; struct fw_xferq* atq; struct tcode_info* tcode; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (struct fw_xfer*) ;
 scalar_t__ FUNC_3 (struct firewire_comm*,struct fw_xfer*) ;
 int FUNC_4 (char*,...) ;
 char** VAR_9 ;

int
FUNC_5(struct firewire_comm *VAR_10, int VAR_11, struct fw_xfer *VAR_12)
{
 int VAR_13 = 0;
 struct fw_xferq *VAR_14;
 int VAR_15;
 struct fw_pkt *VAR_16;
 int VAR_17;
 struct tcode_info *VAR_18;

 if (VAR_12 == ((void*)0))
  return VAR_1;
 if (VAR_12->hand == ((void*)0)) {
  FUNC_4("hand == NULL\n");
  return VAR_1;
 }
 VAR_16 = &VAR_12->send.hdr;

 VAR_17 = VAR_16->mode.common.tcode & 0xf;
 VAR_18 = &VAR_10->tcode[VAR_17];
 if (VAR_18->flag == 0) {
  FUNC_4("invalid tcode=%x\n", VAR_17);
  return VAR_1;
 }


 if ((VAR_10->status < VAR_2) &&
     ((VAR_17 != VAR_3) || (VAR_16->mode.rreqq.dest_hi != 0xffff) ||
     (VAR_16->mode.rreqq.dest_lo < 0xf0000000) ||
     (VAR_16->mode.rreqq.dest_lo >= 0xf0001000))) {
  VAR_12->resp = VAR_0;
  VAR_12->flag = VAR_8;
  return (VAR_0);
 }

 if (VAR_18->flag & VAR_6)
  VAR_14 = VAR_10->atq;
 else
  VAR_14 = VAR_10->ats;
 VAR_15 = VAR_18->hdr_len;
 if (VAR_12->send.pay_len > FUNC_0(VAR_10->maxrec)) {
  FUNC_4("send.pay_len > maxrec\n");
  return VAR_1;
 }
 if (VAR_18->flag & VAR_5)
  VAR_15 = VAR_16->mode.stream.len;
 else if (VAR_18->flag & VAR_4)
  VAR_15 = VAR_16->mode.rresb.len;
 else
  VAR_15 = 0;
 if (VAR_15 != VAR_12->send.pay_len) {
  FUNC_4("len(%d) != send.pay_len(%d) %s(%x)\n",
      VAR_15, VAR_12->send.pay_len, VAR_9[VAR_17], VAR_17);
  return VAR_1;
 }

 if (VAR_14->start == ((void*)0)) {
  FUNC_4("xferq->start == NULL\n");
  return VAR_1;
 }
 if (!(VAR_14->queued < VAR_14->maxq)) {
  FUNC_1(VAR_10->bdev, "Discard a packet (queued=%d)\n",
   VAR_14->queued);
  return VAR_0;
 }

 VAR_12->tl = -1;
 if (VAR_18->flag & VAR_7) {
  if (FUNC_3(VAR_10, VAR_12) < 0)
   return VAR_0;
 }

 VAR_12->resp = 0;
 VAR_12->fc = VAR_10;
 VAR_12->q = VAR_14;

 FUNC_2(VAR_12);
 return VAR_13;
}
