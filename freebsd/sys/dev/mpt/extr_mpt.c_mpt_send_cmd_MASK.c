
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct mpt_softc {scalar_t__ verbose; int request_pending_list; int request_dmap; int request_dmat; } ;
struct TYPE_8__ {scalar_t__ req_pbuf; scalar_t__ req_vbuf; int serno; int state; } ;
typedef TYPE_1__ request_t ;
struct TYPE_9__ {int Function; } ;
typedef TYPE_2__ MSG_REQUEST_HEADER ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,TYPE_1__*,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int VAR_5 ;
 int FUNC_3 (struct mpt_softc*,TYPE_1__*) ;
 scalar_t__ FUNC_4 (struct mpt_softc*,TYPE_1__*) ;
 scalar_t__ FUNC_5 (struct mpt_softc*,TYPE_1__*) ;
 int FUNC_6 (struct mpt_softc*,int ,int ) ;

void
FUNC_7(struct mpt_softc *VAR_6, request_t *VAR_7)
{

 if (VAR_6->verbose > VAR_3) {
  FUNC_3(VAR_6, VAR_7);
 }
 FUNC_2(VAR_6->request_dmat, VAR_6->request_dmap,
     VAR_0 | VAR_1);
 VAR_7->state |= VAR_4;
 FUNC_0(FUNC_4(VAR_6, VAR_7) == 0,
     ("req %p:%u func %x on freelist list in mpt_send_cmd",
     VAR_7, VAR_7->serno, ((MSG_REQUEST_HEADER *)VAR_7->req_vbuf)->Function));
 FUNC_0(FUNC_5(VAR_6, VAR_7) == 0,
     ("req %p:%u func %x already on pending list in mpt_send_cmd",
     VAR_7, VAR_7->serno, ((MSG_REQUEST_HEADER *)VAR_7->req_vbuf)->Function));
 FUNC_1(&VAR_6->request_pending_list, VAR_7, VAR_5);
 FUNC_6(VAR_6, VAR_2, (uint32_t) VAR_7->req_pbuf);
}
