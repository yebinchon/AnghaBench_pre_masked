
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
struct mpt_softc {int dummy; } ;
struct TYPE_9__ {int req_pbuf; int index; int state; int serno; TYPE_4__* req_vbuf; } ;
typedef TYPE_1__ request_t ;
typedef int bus_addr_t ;
struct TYPE_12__ {int BufferCount; int SGL; void* MsgContext; int Function; } ;
struct TYPE_11__ {void* Address; void* FlagsLength; } ;
struct TYPE_10__ {int ContextSize; int * TransactionDetails; void** TransactionContext; scalar_t__ Flags; } ;
typedef TYPE_2__* PTR_SGE_TRANSACTION32 ;
typedef TYPE_3__* PTR_SGE_SIMPLE32 ;
typedef TYPE_4__ MSG_LINK_SERVICE_BUFFER_POST_REQUEST ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct mpt_softc*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct mpt_softc*) ;
 int VAR_9 ;
 int VAR_10 ;
 void* FUNC_3 (int) ;
 int FUNC_4 (TYPE_4__*,int ,int ) ;
 int FUNC_5 (struct mpt_softc*,int ,char*,int,int,TYPE_1__*,int ) ;
 int FUNC_6 (struct mpt_softc*,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_7(struct mpt_softc *VAR_11, request_t *VAR_12, int VAR_13)
{
 MSG_LINK_SERVICE_BUFFER_POST_REQUEST *VAR_14;
 PTR_SGE_TRANSACTION32 VAR_15;
 PTR_SGE_SIMPLE32 VAR_16;
 bus_addr_t VAR_17;
 uint32_t VAR_18;

 VAR_17 = VAR_12->req_pbuf;
 VAR_17 += FUNC_2(VAR_11);

 VAR_14 = VAR_12->req_vbuf;
 FUNC_4(VAR_14, 0, VAR_8);
 VAR_14->BufferCount = 1;
 VAR_14->Function = VAR_0;
 VAR_14->MsgContext = FUNC_3(VAR_12->index | VAR_10);
 VAR_15 = (PTR_SGE_TRANSACTION32) &VAR_14->SGL;

 VAR_15->ContextSize = 4;
 VAR_15->Flags = 0;
 VAR_15->TransactionContext[0] = FUNC_3(VAR_13);

 VAR_16 = (PTR_SGE_SIMPLE32) &VAR_15->TransactionDetails[0];
 VAR_18 =
  VAR_3 |
  VAR_6 |
  VAR_4 |
  VAR_2 |
  VAR_1;
 VAR_18 <<= VAR_5;
 VAR_18 |= (FUNC_1(VAR_11) - FUNC_2(VAR_11));
 VAR_16->FlagsLength = FUNC_3(VAR_18);
 VAR_16->Address = FUNC_3((uint32_t) VAR_17);
 FUNC_5(VAR_11, VAR_7,
     "add ELS index %d ioindex %d for %p:%u\n",
     VAR_12->index, VAR_13, VAR_12, VAR_12->serno);
 FUNC_0(((VAR_12->state & VAR_9) != 0),
     ("mpt_fc_post_els: request not locked"));
 FUNC_6(VAR_11, VAR_12);
}
