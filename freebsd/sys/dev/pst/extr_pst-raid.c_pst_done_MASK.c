
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int32_t ;
struct pst_softc {TYPE_2__* iop; } ;
struct pst_request {TYPE_3__* bp; int timeout; struct pst_softc* psc; } ;
struct iop_softc {int dummy; } ;
struct i2o_single_reply {scalar_t__ status; scalar_t__ donecount; scalar_t__ transaction_context; } ;
struct TYPE_6__ {scalar_t__ bio_bcount; scalar_t__ bio_resid; } ;
struct TYPE_5__ {int outstanding; TYPE_1__* reg; } ;
struct TYPE_4__ {int oqueue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pst_request*,int ) ;
 int FUNC_3 (struct pst_softc*) ;

__attribute__((used)) static void
FUNC_4(struct iop_softc *VAR_2, u_int32_t VAR_3, struct i2o_single_reply *VAR_4)
{
    struct pst_request *VAR_5 =
 (struct pst_request *)VAR_4->transaction_context;
    struct pst_softc *VAR_6 = VAR_5->psc;

    FUNC_1(&VAR_5->timeout);
    VAR_5->bp->bio_resid = VAR_5->bp->bio_bcount - VAR_4->donecount;
    FUNC_0(VAR_5->bp, ((void*)0), VAR_4->status ? VAR_0 : 0);
    FUNC_2(VAR_5, VAR_1);
    VAR_6->iop->reg->oqueue = VAR_3;
    VAR_6->iop->outstanding--;
    FUNC_3(VAR_6);
}
