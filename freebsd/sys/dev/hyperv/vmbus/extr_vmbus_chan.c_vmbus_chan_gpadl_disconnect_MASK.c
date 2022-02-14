
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct vmbus_softc {int dummy; } ;
struct vmbus_msghc {int dummy; } ;
struct vmbus_channel {int ch_id; struct vmbus_softc* ch_vmbus; } ;
struct TYPE_2__ {int chm_type; } ;
struct vmbus_chanmsg_gpadl_disconn {scalar_t__ chm_gpadl; int chm_chanid; TYPE_1__ chm_hdr; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int FUNC_1 (struct vmbus_channel*,char*,int ,...) ;
 scalar_t__ FUNC_2 (struct vmbus_channel*,int) ;
 struct vmbus_chanmsg_gpadl_disconn* FUNC_3 (struct vmbus_msghc*) ;
 int FUNC_4 (struct vmbus_softc*,struct vmbus_msghc*) ;
 struct vmbus_msghc* FUNC_5 (struct vmbus_softc*,int) ;
 int FUNC_6 (struct vmbus_softc*,struct vmbus_msghc*) ;
 int FUNC_7 (struct vmbus_softc*,struct vmbus_msghc*) ;

int
FUNC_8(struct vmbus_channel *VAR_2, uint32_t VAR_3)
{
 struct vmbus_softc *VAR_4 = VAR_2->ch_vmbus;
 struct vmbus_msghc *VAR_5;
 struct vmbus_chanmsg_gpadl_disconn *VAR_6;
 int VAR_7;

 FUNC_0(VAR_3 != 0, ("GPADL is zero"));

 VAR_5 = FUNC_5(VAR_4, sizeof(*VAR_6));
 if (VAR_5 == ((void*)0)) {
  FUNC_1(VAR_2,
      "can not get msg hypercall for gpadl_disconn(chan%u)\n",
      VAR_2->ch_id);
  return (VAR_0);
 }

 VAR_6 = FUNC_3(VAR_5);
 VAR_6->chm_hdr.chm_type = VAR_1;
 VAR_6->chm_chanid = VAR_2->ch_id;
 VAR_6->chm_gpadl = VAR_3;

 VAR_7 = FUNC_4(VAR_4, VAR_5);
 if (VAR_7) {
  FUNC_6(VAR_4, VAR_5);

  if (FUNC_2(VAR_2, 1)) {




   FUNC_1(VAR_2,
       "gpadl_disconn(revoked chan%u) msg hypercall "
       "exec failed: %d\n", VAR_2->ch_id, VAR_7);
   return (0);
  }
  FUNC_1(VAR_2,
      "gpadl_disconn(chan%u) msg hypercall exec failed: %d\n",
      VAR_2->ch_id, VAR_7);
  return (VAR_7);
 }

 FUNC_7(VAR_4, VAR_5);

 FUNC_6(VAR_4, VAR_5);

 return (0);
}
