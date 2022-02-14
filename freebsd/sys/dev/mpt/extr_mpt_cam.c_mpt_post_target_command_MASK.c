
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct mpt_softc {int scsi_tgt_handler_id; } ;
struct TYPE_11__ {int index; TYPE_3__* req_vbuf; scalar_t__ req_pbuf; } ;
typedef TYPE_2__ request_t ;
typedef scalar_t__ bus_addr_t ;
typedef int U32 ;
struct TYPE_14__ {int state; } ;
struct TYPE_10__ {void* PhysicalAddress32; } ;
struct TYPE_13__ {TYPE_1__ u; int IoIndex; } ;
struct TYPE_12__ {int BufferCount; TYPE_4__* Buffer; void* MsgContext; int BufferLength; int Function; } ;
typedef TYPE_3__* PTR_MSG_TARGET_CMD_BUFFER_POST_REQUEST ;
typedef TYPE_4__* PTR_CMD_BUFFER_DESCRIPTOR ;


 int FUNC_0 (scalar_t__,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (struct mpt_softc*) ;
 TYPE_8__* FUNC_2 (struct mpt_softc*,TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (TYPE_3__*,int ,scalar_t__) ;
 int FUNC_6 (struct mpt_softc*) ;
 int FUNC_7 (struct mpt_softc*,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_8(struct mpt_softc *VAR_4, request_t *VAR_5, int VAR_6)
{
 PTR_MSG_TARGET_CMD_BUFFER_POST_REQUEST VAR_7;
 PTR_CMD_BUFFER_DESCRIPTOR VAR_8;
 bus_addr_t VAR_9;

 VAR_9 = VAR_5->req_pbuf;
 VAR_9 += FUNC_1(VAR_4);
 FUNC_5(VAR_5->req_vbuf, 0, VAR_1);
 FUNC_2(VAR_4, VAR_5)->state = VAR_2;

 VAR_7 = VAR_5->req_vbuf;
 VAR_7->BufferCount = 1;
 VAR_7->Function = VAR_0;
 VAR_7->BufferLength = FUNC_0(VAR_1 - FUNC_1(VAR_4), VAR_3);
 VAR_7->MsgContext = FUNC_4(VAR_5->index | VAR_4->scsi_tgt_handler_id);

 VAR_8 = &VAR_7->Buffer[0];
 VAR_8->IoIndex = FUNC_3(VAR_6);
 VAR_8->u.PhysicalAddress32 = FUNC_4((U32) VAR_9);

 FUNC_6(VAR_4);
 FUNC_7(VAR_4, VAR_5);
}
