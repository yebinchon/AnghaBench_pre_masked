
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_8__ {int hv_paddr; } ;
struct TYPE_7__ {int hv_paddr; } ;
struct TYPE_6__ {int hv_paddr; } ;
struct vmbus_softc {TYPE_4__ vmbus_mnf2_dma; TYPE_3__ vmbus_mnf1_dma; TYPE_2__ vmbus_evtflags_dma; } ;
struct vmbus_msghc {int dummy; } ;
struct vmbus_message {scalar_t__ msg_data; } ;
struct vmbus_chanmsg_connect_resp {int chm_done; } ;
struct TYPE_5__ {int chm_type; } ;
struct vmbus_chanmsg_connect {int chm_mnf2; int chm_mnf1; int chm_evtflags; int chm_ver; TYPE_1__ chm_hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct vmbus_chanmsg_connect* FUNC_0 (struct vmbus_msghc*) ;
 int FUNC_1 (struct vmbus_softc*,struct vmbus_msghc*) ;
 struct vmbus_msghc* FUNC_2 (struct vmbus_softc*,int) ;
 int FUNC_3 (struct vmbus_softc*,struct vmbus_msghc*) ;
 struct vmbus_message* FUNC_4 (struct vmbus_softc*,struct vmbus_msghc*) ;

__attribute__((used)) static int
FUNC_5(struct vmbus_softc *VAR_3, uint32_t VAR_4)
{
 struct vmbus_chanmsg_connect *VAR_5;
 const struct vmbus_message *VAR_6;
 struct vmbus_msghc *VAR_7;
 int VAR_8, VAR_9 = 0;

 VAR_7 = FUNC_2(VAR_3, sizeof(*VAR_5));
 if (VAR_7 == ((void*)0))
  return VAR_0;

 VAR_5 = FUNC_0(VAR_7);
 VAR_5->chm_hdr.chm_type = VAR_2;
 VAR_5->chm_ver = VAR_4;
 VAR_5->chm_evtflags = VAR_3->vmbus_evtflags_dma.hv_paddr;
 VAR_5->chm_mnf1 = VAR_3->vmbus_mnf1_dma.hv_paddr;
 VAR_5->chm_mnf2 = VAR_3->vmbus_mnf2_dma.hv_paddr;

 VAR_8 = FUNC_1(VAR_3, VAR_7);
 if (VAR_8) {
  FUNC_3(VAR_3, VAR_7);
  return VAR_8;
 }

 VAR_6 = FUNC_4(VAR_3, VAR_7);
 VAR_9 = ((const struct vmbus_chanmsg_connect_resp *)
     VAR_6->msg_data)->chm_done;

 FUNC_3(VAR_3, VAR_7);

 return (VAR_9 ? 0 : VAR_1);
}
