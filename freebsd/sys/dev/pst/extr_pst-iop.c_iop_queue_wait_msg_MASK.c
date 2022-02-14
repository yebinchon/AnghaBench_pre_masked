
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
struct iop_softc {int obase; int phys_obase; int mtx; TYPE_2__* reg; } ;
struct iop_request {int mfa; TYPE_1__* reply; } ;
struct i2o_single_reply {int status; } ;
struct i2o_basic_message {int transaction_context; int initiator_context; } ;
struct TYPE_4__ {int oqueue_intr_mask; int iqueue; int oqueue; } ;
struct TYPE_3__ {int status; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct iop_softc*,int) ;
 scalar_t__ FUNC_2 (struct iop_request*,int *,int ,char*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*) ;

int
FUNC_6(struct iop_softc *VAR_3, int VAR_4, struct i2o_basic_message *VAR_5)
{
    struct i2o_single_reply *VAR_6;
    struct iop_request VAR_7;
    u_int32_t VAR_8;
    int VAR_9, VAR_10 = 10000;

    FUNC_3(&VAR_3->mtx);
    if (!(VAR_3->reg->oqueue_intr_mask & 0x08)) {
        VAR_5->transaction_context = (u_int32_t)&VAR_7;
        VAR_5->initiator_context = (u_int32_t)VAR_2;
        VAR_3->reg->iqueue = VAR_4;
        if (FUNC_2(&VAR_7, &VAR_3->mtx, VAR_0, "pstwt", 10 * VAR_1)) {
     FUNC_5("pstiop: timeout waiting for message response\n");
     FUNC_1(VAR_3, VAR_4);
     FUNC_4(&VAR_3->mtx);
     return -1;
 }
        VAR_9 = VAR_7.reply->status;
        VAR_3->reg->oqueue = VAR_7.mfa;
    }
    else {
 VAR_3->reg->iqueue = VAR_4;
 while (--VAR_10 && ((VAR_8 = VAR_3->reg->oqueue) == 0xffffffff))
     FUNC_0(1000);
 if (!VAR_10) {
     FUNC_5("pstiop: timeout waiting for message response\n");
     FUNC_1(VAR_3, VAR_4);
     FUNC_4(&VAR_3->mtx);
     return -1;
 }
 VAR_6 = (struct i2o_single_reply *)(VAR_3->obase+(VAR_8-VAR_3->phys_obase));
 VAR_9 = VAR_6->status;
 VAR_3->reg->oqueue = VAR_8;
    }
    FUNC_4(&VAR_3->mtx);
    return VAR_9;
}
