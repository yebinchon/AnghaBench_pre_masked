
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct vmbus_chanpkt_hdr {int dummy; } ;
struct TYPE_13__ {int dev; } ;
typedef TYPE_2__ hv_kbd_sc ;
struct TYPE_14__ {int status; } ;
typedef TYPE_3__ hv_kbd_proto_resp ;
struct TYPE_12__ {int type; } ;
struct TYPE_15__ {TYPE_1__ hdr; } ;
typedef TYPE_4__ hv_kbd_msg ;
struct TYPE_17__ {int info; int makecode; } ;
struct TYPE_16__ {TYPE_7__ ks; } ;
typedef TYPE_5__ hv_kbd_keystroke ;
typedef enum hv_kbd_msg_type_t { ____Placeholder_hv_kbd_msg_type_t } hv_kbd_msg_type_t ;


 int FUNC_0 (TYPE_2__*,char*,int,...) ;


 void* FUNC_1 (struct vmbus_chanpkt_hdr*) ;
 int FUNC_2 (struct vmbus_chanpkt_hdr*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,struct vmbus_chanpkt_hdr*) ;
 int FUNC_6 (TYPE_2__*,TYPE_7__*) ;

__attribute__((used)) static void
FUNC_7(hv_kbd_sc *VAR_0, struct vmbus_chanpkt_hdr *VAR_1)
{

 const hv_kbd_msg *VAR_2 = FUNC_1(VAR_1);
 const hv_kbd_proto_resp *VAR_3 =
     FUNC_1(VAR_1);
 const hv_kbd_keystroke *VAR_4 =
     FUNC_1(VAR_1);
 uint32_t VAR_5 = FUNC_2(VAR_1);
 enum hv_kbd_msg_type_t VAR_6;
 uint32_t VAR_7;
 uint16_t VAR_8;

 if (VAR_5 <= sizeof(hv_kbd_msg)) {
  FUNC_3(VAR_0->dev, "Illegal packet\n");
  return;
 }
 VAR_6 = VAR_2->hdr.type;
 switch (VAR_6) {
  case 128:
   FUNC_5(VAR_0, VAR_1);
   FUNC_0(VAR_0, "keyboard resp: 0x%x\n",
       VAR_3->status);
   break;
  case 129:
   VAR_7 = VAR_4->ks.info;
   VAR_8 = VAR_4->ks.makecode;
   FUNC_0(VAR_0, "keystroke info: 0x%x, scan: 0x%x\n",
       VAR_7, VAR_8);
   FUNC_6(VAR_0, &VAR_4->ks);
   FUNC_4(VAR_0);
  default:
   break;
 }
}
