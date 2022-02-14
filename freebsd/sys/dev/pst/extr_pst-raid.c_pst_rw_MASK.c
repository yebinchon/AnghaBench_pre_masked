
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef long long u_int64_t ;
typedef void* u_int32_t ;
struct pst_request {int timeout; scalar_t__ mfa; TYPE_5__* psc; TYPE_2__* bp; } ;
struct i2o_bsa_rw_block_message {int version_offset; int message_flags; int message_size; int control_flags; int fetch_ahead; int time_multiplier; long long lba; int bytecount; void* transaction_context; void* initiator_context; int function; int initiator_address; int target_address; } ;
struct i2o_basic_message {int dummy; } ;
struct TYPE_10__ {TYPE_4__* iop; TYPE_1__* lct; } ;
struct TYPE_9__ {TYPE_3__* reg; scalar_t__ ibase; } ;
struct TYPE_8__ {scalar_t__ iqueue; } ;
struct TYPE_7__ {int bio_cmd; int bio_bcount; int bio_data; scalar_t__ bio_pblkno; } ;
struct TYPE_6__ {int local_tid; } ;




 long long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct i2o_bsa_rw_block_message*,int) ;
 int FUNC_1 (int *,int,int ,struct pst_request*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct i2o_basic_message*,int ,int ,int) ;
 int FUNC_3 (char*,int) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;

int
FUNC_4(struct pst_request *VAR_9)
{
    struct i2o_bsa_rw_block_message *VAR_10;
    int VAR_11;

    VAR_10 = (struct i2o_bsa_rw_block_message *)
   (VAR_9->psc->iop->ibase + VAR_9->mfa);
    FUNC_0(VAR_10, sizeof(struct i2o_bsa_rw_block_message));
    VAR_10->version_offset = 0x81;
    VAR_10->message_flags = 0x0;
    VAR_10->message_size = sizeof(struct i2o_bsa_rw_block_message) >> 2;
    VAR_10->target_address = VAR_9->psc->lct->local_tid;
    VAR_10->initiator_address = VAR_4;
    switch (VAR_9->bp->bio_cmd) {
    case 129:
 VAR_10->function = VAR_1;
 VAR_10->control_flags = 0x0;
 VAR_10->fetch_ahead = 0x0;
 VAR_11 = 0;
 break;
    case 128:
 VAR_10->function = VAR_2;
 VAR_10->control_flags = 0x0;
 VAR_10->fetch_ahead = 0x0;
 VAR_11 = VAR_3;
 break;
    default:
 FUNC_3("pst: unknown command type 0x%02x\n", VAR_9->bp->bio_cmd);
 return -1;
    }
    VAR_10->initiator_context = (u_int32_t)VAR_7;
    VAR_10->transaction_context = (u_int32_t)VAR_9;
    VAR_10->time_multiplier = 1;
    VAR_10->bytecount = VAR_9->bp->bio_bcount;
    VAR_10->lba = ((u_int64_t)VAR_9->bp->bio_pblkno) * (VAR_0 * 1LL);

    if (!FUNC_2((struct i2o_basic_message *)VAR_10, VAR_9->bp->bio_data,
   VAR_9->bp->bio_bcount, VAR_11))
 return -1;

    VAR_9->psc->iop->reg->iqueue = VAR_9->mfa;

    if (!VAR_5)
 FUNC_1(&VAR_9->timeout, 10 * VAR_6, VAR_8, VAR_9);
    return 0;
}
