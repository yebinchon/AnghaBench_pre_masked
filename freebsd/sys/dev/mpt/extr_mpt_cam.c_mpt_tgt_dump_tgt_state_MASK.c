
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct mpt_softc {int dummy; } ;
struct TYPE_7__ {int serno; } ;
typedef TYPE_1__ request_t ;
struct TYPE_8__ {int state; int itag; int tag_id; int nxfers; int req; int ccb; int bytes_xfered; int resid; int reply_desc; } ;
typedef TYPE_2__ mpt_tgt_state_t ;


 TYPE_2__* FUNC_0 (struct mpt_softc*,TYPE_1__*) ;
 int FUNC_1 (struct mpt_softc*,char*,TYPE_1__*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct mpt_softc *VAR_0, request_t *VAR_1)
{
 mpt_tgt_state_t *VAR_2 = FUNC_0(VAR_0, VAR_1);

 FUNC_1(VAR_0, "req %p:%u tgt:rdesc 0x%x resid %u xfrd %u ccb %p treq %p "
     "nx %d tag 0x%08x itag 0x%04x state=%d\n", VAR_1, VAR_1->serno,
     VAR_2->reply_desc, VAR_2->resid, VAR_2->bytes_xfered, VAR_2->ccb,
     VAR_2->req, VAR_2->nxfers, VAR_2->tag_id, VAR_2->itag, VAR_2->state);
}
