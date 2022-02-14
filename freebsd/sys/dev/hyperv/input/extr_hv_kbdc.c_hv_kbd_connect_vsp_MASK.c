
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint64_t ;
struct vmbus_xact {int dummy; } ;
struct TYPE_11__ {int dev; int hs_chan; int hs_xact_ctx; } ;
typedef TYPE_2__ hv_kbd_sc ;
struct TYPE_12__ {int status; } ;
typedef TYPE_3__ hv_kbd_proto_resp ;
struct TYPE_10__ {int type; } ;
struct TYPE_13__ {int ver; TYPE_1__ hdr; } ;
typedef TYPE_4__ hv_kbd_proto_req ;


 int FUNC_0 (TYPE_2__*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ,int ,TYPE_4__*,int,int ) ;
 TYPE_3__* FUNC_3 (int ,struct vmbus_xact*,size_t*,int) ;
 int FUNC_4 (struct vmbus_xact*) ;
 int FUNC_5 (struct vmbus_xact*) ;
 struct vmbus_xact* FUNC_6 (int ,int) ;
 int FUNC_7 (struct vmbus_xact*) ;
 TYPE_4__* FUNC_8 (struct vmbus_xact*) ;

__attribute__((used)) static int
FUNC_9(hv_kbd_sc *VAR_7)
{
 int VAR_8;
 size_t VAR_9;
 struct vmbus_xact *VAR_10;
 hv_kbd_proto_req *VAR_11;
 const hv_kbd_proto_resp *VAR_12;

 VAR_10 = FUNC_6(VAR_7->hs_xact_ctx, sizeof(*VAR_11));
 if (VAR_10 == ((void*)0)) {
  FUNC_1(VAR_7->dev, "no xact for kbd init");
  return (VAR_0);
 }
 VAR_11 = FUNC_8(VAR_10);
 VAR_11->hdr.type = VAR_2;
 VAR_11->ver = VAR_4;

 FUNC_4(VAR_10);
 VAR_8 = FUNC_2(VAR_7->hs_chan,
  VAR_6,
  VAR_5,
  VAR_11, sizeof(hv_kbd_proto_req),
  (uint64_t)(uintptr_t)VAR_10);
 if (VAR_8) {
  FUNC_1(VAR_7->dev, "fail to send\n");
  FUNC_5(VAR_10);
  return (VAR_8);
 }
 VAR_12 = FUNC_3(VAR_7->hs_chan, VAR_10, &VAR_9, 1);
 if (VAR_9 < VAR_3) {
  FUNC_1(VAR_7->dev, "hv_kbd init communicate failed\n");
  VAR_8 = VAR_0;
  goto clean;
 }

 if (!(VAR_12->status & VAR_1)) {
  FUNC_1(VAR_7->dev, "hv_kbd protocol request failed\n");
  VAR_8 = VAR_0;
 }
clean:
 FUNC_7(VAR_10);
 FUNC_0(VAR_7, "finish connect vsp\n");
 return (VAR_8);
}
