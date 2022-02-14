
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct vmbus_xact_ctx {int dummy; } ;
struct vmbus_chanpkt_hdr {int dummy; } ;
struct TYPE_4__ {struct vmbus_xact_ctx* hs_xact_ctx; } ;
typedef TYPE_1__ hv_kbd_sc ;


 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (struct vmbus_chanpkt_hdr*) ;
 int FUNC_2 (struct vmbus_chanpkt_hdr*) ;
 int FUNC_3 (struct vmbus_xact_ctx*,int ,int ) ;

__attribute__((used)) static void
FUNC_4(hv_kbd_sc *VAR_0, struct vmbus_chanpkt_hdr *VAR_1)
{
 struct vmbus_xact_ctx *VAR_2 = VAR_0->hs_xact_ctx;
 if (VAR_2 != ((void*)0)) {
  FUNC_0(VAR_0, "hvkbd is ready\n");
  FUNC_3(VAR_2, FUNC_1(VAR_1),
      FUNC_2(VAR_1));
 }
}
