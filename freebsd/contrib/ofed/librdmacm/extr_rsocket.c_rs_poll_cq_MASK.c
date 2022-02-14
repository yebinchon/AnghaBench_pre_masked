
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef int uint16_t ;
struct rsocket {int state; size_t rmsg_tail; int sbuf_bytes_avail; int err; int sqe_avail; int ctrl_max_seqno; int rq_size; TYPE_2__* rmsg; int sseq_comp; scalar_t__ rbuf_size; scalar_t__ rbuf; TYPE_1__* cm_id; } ;
struct rs_iomap {int dummy; } ;
struct ibv_wc {scalar_t__ status; int wc_flags; int wr_id; int imm_data; } ;
struct TYPE_4__ {int op; int data; } ;
struct TYPE_3__ {int recv_cq; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 size_t FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (int ,int,struct ibv_wc*) ;
 int VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (struct rsocket*) ;
 int VAR_9 ;
 size_t FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_8(struct rsocket *VAR_11)
{
 struct ibv_wc VAR_12;
 uint32_t VAR_13;
 int VAR_14, VAR_15 = 0;

 while ((VAR_14 = FUNC_1(VAR_11->cm_id->recv_cq, 1, &VAR_12)) > 0) {
  if (FUNC_7(VAR_12.wr_id)) {
   if (VAR_12.status != VAR_1)
    continue;
   VAR_15++;

   if (VAR_12.wc_flags & VAR_2) {
    VAR_13 = FUNC_0(VAR_12.imm_data);
   } else {
    VAR_13 = ((uint32_t *) (VAR_11->rbuf + VAR_11->rbuf_size))
     [FUNC_5(VAR_12.wr_id)];

   }
   switch (FUNC_3(VAR_13)) {
   case 129:
    VAR_11->sseq_comp = (uint16_t) FUNC_2(VAR_13);
    break;
   case 130:

    break;
   case 131:
    if (FUNC_2(VAR_13) == VAR_3) {
     VAR_11->state = VAR_7;
     return 0;
    } else if (FUNC_2(VAR_13) == VAR_4) {
     if (VAR_11->state & VAR_10) {
      VAR_11->state &= ~VAR_9;
     } else {
      VAR_11->state = VAR_7;
      return 0;
     }
    }
    break;
   case 128:

    break;
   default:
    VAR_11->rmsg[VAR_11->rmsg_tail].op = FUNC_3(VAR_13);
    VAR_11->rmsg[VAR_11->rmsg_tail].data = FUNC_2(VAR_13);
    if (++VAR_11->rmsg_tail == VAR_11->rq_size + 1)
     VAR_11->rmsg_tail = 0;
    break;
   }
  } else {
   switch (FUNC_3(FUNC_5(VAR_12.wr_id))) {
   case 129:
    VAR_11->ctrl_max_seqno++;
    break;
   case 131:
    VAR_11->ctrl_max_seqno++;
    if (FUNC_2(FUNC_5(VAR_12.wr_id)) == VAR_3)
     VAR_11->state = VAR_7;
    break;
   case 130:
    VAR_11->sqe_avail++;
    if (!FUNC_6(VAR_12.wr_id))
     VAR_11->sbuf_bytes_avail += sizeof(struct rs_iomap);
    break;
   default:
    VAR_11->sqe_avail++;
    VAR_11->sbuf_bytes_avail += FUNC_2(FUNC_5(VAR_12.wr_id));
    break;
   }
   if (VAR_12.status != VAR_1 && (VAR_11->state & VAR_6)) {
    VAR_11->state = VAR_8;
    VAR_11->err = VAR_0;
   }
  }
 }

 if (VAR_11->state & VAR_6) {
  while (!VAR_14 && VAR_15--)
   VAR_14 = FUNC_4(VAR_11);

  if (VAR_14) {
   VAR_11->state = VAR_8;
   VAR_11->err = VAR_5;
  }
 }
 return VAR_14;
}
