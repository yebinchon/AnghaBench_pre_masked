
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_8__ {int * payload; } ;
struct TYPE_5__ {int dest_hi; int dest_lo; int len; scalar_t__ extcode; int tcode; } ;
struct TYPE_6__ {TYPE_1__ wreqb; } ;
struct fw_pkt {TYPE_2__ mode; } ;
struct TYPE_7__ {void* payload; struct fw_pkt hdr; } ;
struct fw_xfer {int fc; TYPE_4__ recv; TYPE_3__ send; } ;
struct fw_device {int dst; } ;
typedef int caddr_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int,struct fw_xfer*) ;
 int FUNC_1 (struct fw_xfer*) ;
 scalar_t__ VAR_1 ;
 struct fw_xfer* FUNC_2 (struct fw_device*,int ,int ,int,int ,void (*) (struct fw_xfer*)) ;
 int FUNC_3 (char*,int,int,int,int) ;

struct fw_xfer *
FUNC_4(
 struct fw_device *VAR_2,
 caddr_t VAR_3,
 uint8_t VAR_4,
 uint16_t VAR_5,
 uint32_t VAR_6,
 int VAR_7,
 void *VAR_8,
 void (*VAR_9)(struct fw_xfer *))
{
 struct fw_xfer *VAR_10;
 struct fw_pkt *VAR_11;

 VAR_10 = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_7, 0, VAR_9);
 if (VAR_10 == ((void*)0))
  return ((void*)0);

 VAR_11 = &VAR_10->send.hdr;
 VAR_11->mode.wreqb.tcode = VAR_0;
 VAR_11->mode.wreqb.dest_hi = VAR_5;
 VAR_11->mode.wreqb.dest_lo = VAR_6;
 VAR_11->mode.wreqb.len = VAR_7;
 VAR_11->mode.wreqb.extcode = 0;

 VAR_10->send.payload = VAR_8;
 VAR_10->recv.payload = ((void*)0);

 if (VAR_1)
  FUNC_3("fwmem_write_block: %d %04x:%08x %d\n", VAR_2->dst,
    VAR_5, VAR_6, VAR_7);
 if (FUNC_0(VAR_10->fc, -1, VAR_10) == 0)
  return VAR_10;

 FUNC_1(VAR_10);
 return ((void*)0);
}
