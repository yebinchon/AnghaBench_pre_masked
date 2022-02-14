
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmbus_softc {int dummy; } ;
struct vmbus_msghc {int dummy; } ;
struct vmbus_channel {int ch_id; struct vmbus_softc* ch_vmbus; } ;
struct TYPE_2__ {int chm_type; } ;
struct vmbus_chanmsg_chfree {int chm_chanid; TYPE_1__ chm_hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct vmbus_channel*,char*,int ,...) ;
 struct vmbus_chanmsg_chfree* FUNC_1 (struct vmbus_msghc*) ;
 int FUNC_2 (struct vmbus_msghc*) ;
 struct vmbus_msghc* FUNC_3 (struct vmbus_softc*,int) ;
 int FUNC_4 (struct vmbus_softc*,struct vmbus_msghc*) ;

__attribute__((used)) static int
FUNC_5(struct vmbus_channel *VAR_3)
{
 struct vmbus_softc *VAR_4 = VAR_3->ch_vmbus;
 struct vmbus_chanmsg_chfree *VAR_5;
 struct vmbus_msghc *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_3(VAR_4, sizeof(*VAR_5));
 if (VAR_6 == ((void*)0)) {
  FUNC_0(VAR_3,
      "can not get msg hypercall for chfree(chan%u)\n",
      VAR_3->ch_id);
  return (VAR_0);
 }

 VAR_5 = FUNC_1(VAR_6);
 VAR_5->chm_hdr.chm_type = VAR_1;
 VAR_5->chm_chanid = VAR_3->ch_id;

 VAR_7 = FUNC_2(VAR_6);
 FUNC_4(VAR_4, VAR_6);

 if (VAR_7) {
  FUNC_0(VAR_3,
      "chfree(chan%u) msg hypercall exec failed: %d\n",
      VAR_3->ch_id, VAR_7);
 } else {
  if (VAR_2)
   FUNC_0(VAR_3, "chan%u freed\n", VAR_3->ch_id);
 }
 return (VAR_7);
}
