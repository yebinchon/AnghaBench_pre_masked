
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dest_hi; int len; int dst; int dest_lo; int extcode; scalar_t__ src; scalar_t__ pri; int tcode; scalar_t__ tlrt; } ;
struct TYPE_5__ {TYPE_1__ lreq; } ;
struct fw_pkt {TYPE_2__ mode; } ;
struct TYPE_6__ {void** payload; struct fw_pkt hdr; scalar_t__ spd; } ;
struct fw_xfer {int hand; TYPE_3__ send; } ;
struct firewire_comm {int irm; int nodeid; int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct firewire_comm*,int,struct fw_xfer*) ;
 int VAR_6 ;
 struct fw_xfer* FUNC_1 (int ,int,int) ;
 int FUNC_2 (struct fw_xfer*) ;
 void* FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(void *VAR_7)
{
 struct fw_xfer *VAR_8;
 struct firewire_comm *VAR_9 = VAR_7;
 struct fw_pkt *VAR_10;
 int VAR_11 = 0;

 VAR_8 = FUNC_1(VAR_5, 8, 4);
 if (VAR_8 == ((void*)0))
  return;
 VAR_8->send.spd = 0;
 VAR_9->status = VAR_2;

 VAR_10 = &VAR_8->send.hdr;
 VAR_10->mode.lreq.dest_hi = 0xffff;
 VAR_10->mode.lreq.tlrt = 0;
 VAR_10->mode.lreq.tcode = VAR_4;
 VAR_10->mode.lreq.pri = 0;
 VAR_10->mode.lreq.src = 0;
 VAR_10->mode.lreq.len = 8;
 VAR_10->mode.lreq.extcode = VAR_1;
 VAR_10->mode.lreq.dst = VAR_3 | VAR_9->irm;
 VAR_10->mode.lreq.dest_lo = 0xf0000000 | VAR_0;
 VAR_8->send.payload[0] = FUNC_3(0x3f);
 VAR_8->send.payload[1] = FUNC_3(VAR_9->nodeid);
 VAR_8->hand = VAR_6;

 VAR_11 = FUNC_0(VAR_9, -1, VAR_8);
 if (VAR_11) {
  FUNC_2(VAR_8);
  return;
 }
 return;
}
