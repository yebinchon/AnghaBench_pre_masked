
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vmbus_chan_callback_t ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int task_fn_t ;
struct vmbus_softc {int dummy; } ;
struct vmbus_msghc {int dummy; } ;
struct vmbus_message {scalar_t__ msg_data; } ;
struct vmbus_channel {int ch_flags; scalar_t__ ch_bufring_gpadl; int ch_stflags; int ch_sysctl_ctx; int ch_id; int ch_vcpuid; int ch_rxbr; int ch_txbr; int ch_task; int ch_cpuid; struct vmbus_softc* ch_vmbus; int ch_tq; void* ch_cbarg; int ch_cb; } ;
struct vmbus_chanmsg_chopen_resp {int chm_status; } ;
struct TYPE_2__ {int chm_type; } ;
struct vmbus_chanmsg_chopen {scalar_t__ chm_gpadl; int chm_txbr_pgcnt; int chm_udata; int chm_vcpuid; int chm_openid; int chm_chanid; TYPE_1__ chm_hdr; } ;
struct vmbus_chan_br {int cbr_txsz; int cbr_rxsz; int cbr_paddr; int * cbr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int ,int *,struct vmbus_channel*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct vmbus_softc*,int ,int ) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (int ,void const*,int) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct vmbus_channel*) ;
 int FUNC_11 (struct vmbus_channel*,int,int,scalar_t__*) ;
 int FUNC_12 (struct vmbus_channel*,scalar_t__) ;
 scalar_t__ FUNC_13 (struct vmbus_channel*) ;
 int FUNC_14 (struct vmbus_channel*,char*,int,...) ;
 int FUNC_15 (struct vmbus_channel*) ;
 int FUNC_16 (struct vmbus_channel*) ;
 int * VAR_13 ;
 int * VAR_14 ;
 int FUNC_17 (struct vmbus_softc*,struct vmbus_channel*) ;
 struct vmbus_chanmsg_chopen* FUNC_18 (struct vmbus_msghc*) ;
 int FUNC_19 (struct vmbus_softc*,struct vmbus_msghc*) ;
 int FUNC_20 (struct vmbus_softc*,struct vmbus_msghc*) ;
 struct vmbus_msghc* FUNC_21 (struct vmbus_softc*,int) ;
 struct vmbus_message* FUNC_22 (struct vmbus_softc*,struct vmbus_msghc*) ;
 int FUNC_23 (struct vmbus_softc*,struct vmbus_msghc*) ;
 int FUNC_24 (int *,int *,int) ;
 int FUNC_25 (int *,int *,int) ;

int
FUNC_26(struct vmbus_channel *VAR_15, const struct vmbus_chan_br *VAR_16,
    const void *VAR_17, int VAR_18, vmbus_chan_callback_t VAR_19, void *VAR_20)
{
 struct vmbus_softc *VAR_21 = VAR_15->ch_vmbus;
 const struct vmbus_message *VAR_22;
 struct vmbus_chanmsg_chopen *VAR_23;
 struct vmbus_msghc *VAR_24;
 uint32_t VAR_25;
 int VAR_26, VAR_27, VAR_28;
 task_fn_t *VAR_29;
 uint8_t *VAR_30;

 if (VAR_18 > VAR_6) {
  FUNC_14(VAR_15,
      "invalid udata len %d for chan%u\n", VAR_18, VAR_15->ch_id);
  return (VAR_0);
 }

 VAR_30 = VAR_16->cbr;
 VAR_27 = VAR_16->cbr_txsz;
 VAR_28 = VAR_16->cbr_rxsz;
 FUNC_0((VAR_27 & VAR_3) == 0,
     ("send bufring size is not multiple page"));
 FUNC_0((VAR_28 & VAR_3) == 0,
     ("recv bufring size is not multiple page"));
 FUNC_0((VAR_16->cbr_paddr & VAR_3) == 0,
     ("bufring is not page aligned"));




 FUNC_6(VAR_30, 0, VAR_27 + VAR_28);

 if (FUNC_4(&VAR_15->ch_stflags,
     VAR_10))
  FUNC_7("double-open chan%u", VAR_15->ch_id);

 VAR_15->ch_cb = VAR_19;
 VAR_15->ch_cbarg = VAR_20;

 FUNC_17(VAR_21, VAR_15);

 VAR_15->ch_tq = FUNC_2(VAR_15->ch_vmbus, VAR_12, VAR_15->ch_cpuid);
 if (VAR_15->ch_flags & VAR_8)
  VAR_29 = VAR_13;
 else
  VAR_29 = VAR_14;
 FUNC_1(&VAR_15->ch_task, 0, VAR_29, VAR_15);


 FUNC_25(&VAR_15->ch_txbr, VAR_30, VAR_27);

 FUNC_24(&VAR_15->ch_rxbr, VAR_30 + VAR_27, VAR_28);


 FUNC_16(VAR_15);




 VAR_26 = FUNC_11(VAR_15, VAR_16->cbr_paddr,
     VAR_27 + VAR_28, &VAR_15->ch_bufring_gpadl);
 if (VAR_26) {
  FUNC_14(VAR_15,
      "failed to connect bufring GPADL to chan%u\n", VAR_15->ch_id);
  goto failed;
 }





 FUNC_15(VAR_15);




 VAR_24 = FUNC_21(VAR_21, sizeof(*VAR_23));
 if (VAR_24 == ((void*)0)) {
  FUNC_14(VAR_15,
      "can not get msg hypercall for chopen(chan%u)\n",
      VAR_15->ch_id);
  VAR_26 = VAR_2;
  goto failed;
 }

 VAR_23 = FUNC_18(VAR_24);
 VAR_23->chm_hdr.chm_type = VAR_7;
 VAR_23->chm_chanid = VAR_15->ch_id;
 VAR_23->chm_openid = VAR_15->ch_id;
 VAR_23->chm_gpadl = VAR_15->ch_bufring_gpadl;
 VAR_23->chm_vcpuid = VAR_15->ch_vcpuid;
 VAR_23->chm_txbr_pgcnt = VAR_27 >> VAR_4;
 if (VAR_18 > 0)
  FUNC_5(VAR_23->chm_udata, VAR_17, VAR_18);

 VAR_26 = FUNC_19(VAR_21, VAR_24);
 if (VAR_26) {
  FUNC_14(VAR_15,
      "chopen(chan%u) msg hypercall exec failed: %d\n",
      VAR_15->ch_id, VAR_26);
  FUNC_23(VAR_21, VAR_24);
  goto failed;
 }

 for (;;) {
  VAR_22 = FUNC_22(VAR_21, VAR_24);
  if (VAR_22 != ((void*)0))
   break;
  if (FUNC_13(VAR_15)) {
   int VAR_31;






   FUNC_14(VAR_15,
       "chan%u is revoked, when it is being opened\n",
       VAR_15->ch_id);
   for (VAR_31 = 0; VAR_31 < 100; ++VAR_31) {
    VAR_22 = FUNC_22(VAR_21, VAR_24);
    if (VAR_22 != ((void*)0))
     break;
    FUNC_8("rchopen", 1);
   }

   if (VAR_22 == ((void*)0))
    FUNC_20(VAR_21, VAR_24);
   break;
  }
  FUNC_8("chopen", 1);
 }
 if (VAR_22 != ((void*)0)) {
  VAR_25 = ((const struct vmbus_chanmsg_chopen_resp *)
      VAR_22->msg_data)->chm_status;
 } else {

  VAR_25 = 0xff;
 }

 FUNC_23(VAR_21, VAR_24);

 if (VAR_25 == 0) {
  if (VAR_11)
   FUNC_14(VAR_15, "chan%u opened\n", VAR_15->ch_id);
  return (0);
 }

 FUNC_14(VAR_15, "failed to open chan%u\n", VAR_15->ch_id);
 VAR_26 = VAR_2;

failed:
 FUNC_9(&VAR_15->ch_sysctl_ctx);
 FUNC_10(VAR_15);
 if (VAR_15->ch_bufring_gpadl != 0) {
  int VAR_32;

  VAR_32 = FUNC_12(VAR_15,
      VAR_15->ch_bufring_gpadl);
  if (VAR_32) {




   VAR_26 = VAR_1;
  }
  VAR_15->ch_bufring_gpadl = 0;
 }
 FUNC_3(&VAR_15->ch_stflags, VAR_9);
 return (VAR_26);
}
