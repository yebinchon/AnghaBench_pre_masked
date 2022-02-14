
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct mpt_softc {int scsi_tgt_handler_id; scalar_t__ is_sas; scalar_t__ is_fc; } ;
struct TYPE_10__ {int index; TYPE_2__* req_vbuf; } ;
typedef TYPE_1__ request_t ;
struct TYPE_12__ {int reply_desc; } ;
struct TYPE_11__ {void* ReplyWord; int Function; int AbortType; void* MsgContext; } ;
typedef TYPE_2__* PTR_MSG_TARGET_MODE_ABORT ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_8__* FUNC_0 (struct mpt_softc*,TYPE_1__*) ;
 int VAR_2 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 TYPE_1__* FUNC_3 (struct mpt_softc*,int ) ;
 int FUNC_4 (struct mpt_softc*,TYPE_1__*) ;
 int FUNC_5 (struct mpt_softc*,int,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_6(struct mpt_softc *VAR_3, request_t *VAR_4)
{
 int VAR_5;
 request_t *VAR_6;
 PTR_MSG_TARGET_MODE_ABORT VAR_7;

 VAR_6 = FUNC_3(VAR_3, VAR_0);
 if (VAR_6 == ((void*)0)) {
  return (-1);
 }
 VAR_7 = VAR_6->req_vbuf;
 FUNC_2(VAR_7, 0, sizeof (*VAR_7));

 VAR_7->MsgContext = FUNC_1(VAR_6->index | VAR_3->scsi_tgt_handler_id);
 VAR_7->AbortType = VAR_2;
 VAR_7->Function = VAR_1;
 VAR_7->ReplyWord = FUNC_1(FUNC_0(VAR_3, VAR_4)->reply_desc);
 VAR_5 = 0;
 if (VAR_3->is_fc || VAR_3->is_sas) {
  FUNC_4(VAR_3, VAR_6);
 } else {
  VAR_5 = FUNC_5(VAR_3, sizeof(*VAR_6), VAR_6);
 }
 return (VAR_5);
}
