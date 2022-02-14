
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmbus_softc {int vmbus_dev; } ;
struct vmbus_msghc {int dummy; } ;
struct TYPE_2__ {int chm_type; } ;
struct vmbus_chanmsg_disconnect {TYPE_1__ chm_hdr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 struct vmbus_chanmsg_disconnect* FUNC_1 (struct vmbus_msghc*) ;
 int FUNC_2 (struct vmbus_msghc*) ;
 struct vmbus_msghc* FUNC_3 (struct vmbus_softc*,int) ;
 int FUNC_4 (struct vmbus_softc*,struct vmbus_msghc*) ;

__attribute__((used)) static void
FUNC_5(struct vmbus_softc *VAR_1)
{
 struct vmbus_chanmsg_disconnect *VAR_2;
 struct vmbus_msghc *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_3(VAR_1, sizeof(*VAR_2));
 if (VAR_3 == ((void*)0)) {
  FUNC_0(VAR_1->vmbus_dev,
      "can not get msg hypercall for disconnect\n");
  return;
 }

 VAR_2 = FUNC_1(VAR_3);
 VAR_2->chm_hdr.chm_type = VAR_0;

 VAR_4 = FUNC_2(VAR_3);
 FUNC_4(VAR_1, VAR_3);

 if (VAR_4) {
  FUNC_0(VAR_1->vmbus_dev,
      "disconnect msg hypercall failed\n");
 }
}
