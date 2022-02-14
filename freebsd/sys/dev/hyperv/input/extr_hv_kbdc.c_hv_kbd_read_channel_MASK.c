
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct vmbus_chanpkt_hdr {int cph_type; } ;
struct vmbus_channel {int dummy; } ;
struct TYPE_4__ {scalar_t__ buflen; int dev; int * buf; } ;
typedef TYPE_1__ hv_kbd_sc ;


 int FUNC_0 (TYPE_1__*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,char*,int,...) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (TYPE_1__*,struct vmbus_chanpkt_hdr*) ;
 int * FUNC_6 (scalar_t__,int ,int) ;
 int FUNC_7 (struct vmbus_channel*,struct vmbus_chanpkt_hdr*,scalar_t__*) ;

void
FUNC_8(struct vmbus_channel *VAR_5, void *VAR_6)
{
 uint8_t *VAR_7;
 uint32_t VAR_8 = 0;
 int VAR_9 = 0;

 hv_kbd_sc *VAR_10 = (hv_kbd_sc*)VAR_6;
 VAR_7 = VAR_10->buf;
 VAR_8 = VAR_10->buflen;
 for (;;) {
  struct vmbus_chanpkt_hdr *VAR_11 = (struct vmbus_chanpkt_hdr *)VAR_7;
  uint32_t VAR_12 = VAR_8;

  VAR_9 = FUNC_7(VAR_5, VAR_11, &VAR_12);
  if (FUNC_2(VAR_9 == VAR_1)) {
   VAR_8 = VAR_10->buflen * 2;
   while (VAR_8 < VAR_12)
    VAR_8 *= 2;
   VAR_7 = FUNC_6(VAR_8, VAR_2, VAR_3 | VAR_4);
   FUNC_3(VAR_10->dev, "expand recvbuf %d -> %d\n",
       VAR_10->buflen, VAR_8);
   FUNC_4(VAR_10->buf, VAR_2);
   VAR_10->buf = VAR_7;
   VAR_10->buflen = VAR_8;
   continue;
  } else if (FUNC_2(VAR_9 == VAR_0)) {

   break;
  }
  FUNC_1(!VAR_9, ("vmbus_chan_recv_pkt failed: %d", VAR_9));

  FUNC_0(VAR_10, "event: 0x%x\n", VAR_11->cph_type);
  switch (VAR_11->cph_type) {
  case 130:
  case 128:
   FUNC_3(VAR_10->dev, "unhandled event: %d\n",
       VAR_11->cph_type);
   break;
  case 129:
   FUNC_5(VAR_10, VAR_11);
   break;
  default:
   FUNC_3(VAR_10->dev, "unknown event: %d\n",
       VAR_11->cph_type);
   break;
  }
 }
}
