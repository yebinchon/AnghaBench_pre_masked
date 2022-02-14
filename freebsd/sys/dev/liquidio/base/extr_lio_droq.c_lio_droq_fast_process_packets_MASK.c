
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int len; } ;
union octeon_rh {TYPE_1__ r_dh; } ;
typedef int uint8_t ;
typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct octeon_device {int dummy; } ;
struct mbuf {int m_len; } ;
struct lio_droq_info {scalar_t__ length; union octeon_rh rh; } ;
struct TYPE_8__ {int dropped_toomany; int bytes_received; int pkts_received; } ;
struct TYPE_7__ {scalar_t__ drop_on_max; int farg; int (* fptr ) (struct mbuf*,scalar_t__,union octeon_rh*,struct lio_droq*,int ) ;} ;
struct lio_droq {size_t read_idx; scalar_t__ refill_count; scalar_t__ buffer_size; scalar_t__ refill_threshold; TYPE_4__ stats; TYPE_3__ ops; int lro; int pkts_credit_reg; int max_count; TYPE_2__* recv_buf_list; int q_no; } ;
struct TYPE_6__ {struct mbuf* buffer; scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,int,int *,int ) ;
 int FUNC_3 (struct octeon_device*,char*,int ,size_t,scalar_t__) ;
 scalar_t__ FUNC_4 (struct octeon_device*,struct lio_droq*,union octeon_rh*,struct lio_droq_info*) ;
 int FUNC_5 (struct octeon_device*,struct lio_droq*,scalar_t__) ;
 int FUNC_6 (struct octeon_device*,struct lio_droq*) ;
 void* FUNC_7 (size_t,int,int ) ;
 scalar_t__ FUNC_8 (union octeon_rh*) ;
 int FUNC_9 (struct mbuf*) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (struct octeon_device*,int ,int) ;
 int FUNC_12 (struct mbuf*,struct mbuf*) ;
 int FUNC_13 (struct mbuf*,scalar_t__,union octeon_rh*,struct lio_droq*,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 () ;

__attribute__((used)) static uint32_t
FUNC_16(struct octeon_device *VAR_2, struct lio_droq *VAR_3,
         uint32_t VAR_4)
{
 struct lio_droq_info *VAR_5;
 union octeon_rh *VAR_6;
 uint32_t VAR_7, VAR_8, VAR_9 = 0;

 VAR_8 = VAR_4;

 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  struct mbuf *VAR_10 = ((void*)0);
  uint32_t VAR_11 = 0;

  VAR_5 = (struct lio_droq_info *)
      VAR_3->recv_buf_list[VAR_3->read_idx].data;

  FUNC_10((uint64_t *)VAR_5, 2);

  if (!VAR_5->length) {
   FUNC_3(VAR_2,
        "DROQ[%d] idx: %d len:0, pkt_cnt: %d\n",
        VAR_3->q_no, VAR_3->read_idx, VAR_8);
   FUNC_2((uint8_t *)VAR_5, VAR_1, ((void*)0),
    VAR_0);
   VAR_7++;
   FUNC_7(VAR_3->read_idx, 1, VAR_3->max_count);
   VAR_3->refill_count++;
   break;
  }

  VAR_6 = &VAR_5->rh;

  VAR_5->length += 8;
  VAR_6->r_dh.len += (VAR_1 + 7) / 8;

  VAR_9 += (uint32_t)VAR_5->length;
  if (FUNC_8(VAR_6)) {
   uint32_t VAR_12;

   VAR_12 = FUNC_4(VAR_2, VAR_3, VAR_6, VAR_5);
   VAR_3->read_idx = FUNC_7(VAR_3->read_idx, VAR_12,
       VAR_3->max_count);
   VAR_3->refill_count += VAR_12;
  } else {
   if (VAR_5->length <= VAR_3->buffer_size) {
    VAR_11 = (uint32_t)VAR_5->length;
    VAR_10 = VAR_3->recv_buf_list[
             VAR_3->read_idx].buffer;
    VAR_10->m_len = VAR_11;
    VAR_3->recv_buf_list[VAR_3->read_idx].buffer =
     ((void*)0);

    VAR_3->read_idx =
     FUNC_7(VAR_3->read_idx,
             1, VAR_3->max_count);
    VAR_3->refill_count++;
   } else {
    bool VAR_13 = 0;

    VAR_11 = 0;

    while (VAR_11 < VAR_5->length) {
     int VAR_14, VAR_15 = VAR_3->read_idx;
     struct mbuf *VAR_16;

     VAR_14 =
      ((VAR_11 + VAR_3->buffer_size) >
       VAR_5->length) ?
      ((uint32_t)VAR_5->length -
       VAR_11) : VAR_3->buffer_size;

     VAR_16 = ((struct mbuf *)
        VAR_3->recv_buf_list[VAR_15].
        buffer);
     VAR_16->m_len = VAR_14;
     if (FUNC_1(VAR_13)) {
      FUNC_12(VAR_10, VAR_16);
     } else {
      VAR_10 = VAR_16;
      VAR_13 = 1;
     }

     VAR_3->recv_buf_list[VAR_3->read_idx].
      buffer = ((void*)0);

     VAR_11 += VAR_14;
     VAR_3->read_idx =
      FUNC_7(VAR_3->read_idx,
              1,
              VAR_3->max_count);
     VAR_3->refill_count++;
    }
   }

   if (VAR_10 != ((void*)0)) {
    if (VAR_3->ops.fptr != ((void*)0)) {
     VAR_3->ops.fptr(VAR_10, VAR_11, VAR_6,
             VAR_3, VAR_3->ops.farg);
    } else {
     FUNC_9(VAR_10);
    }
   }
  }

  if (VAR_3->refill_count >= VAR_3->refill_threshold) {
   int VAR_17 = FUNC_6(VAR_2, VAR_3);






   FUNC_15();
   FUNC_11(VAR_2, VAR_3->pkts_credit_reg,
     VAR_17);

   FUNC_0();
  }
 }


 VAR_3->stats.pkts_received += VAR_7;
 VAR_3->stats.bytes_received += VAR_9;

 FUNC_14(&VAR_3->lro);

 if ((VAR_3->ops.drop_on_max) && (VAR_4 - VAR_7)) {
  FUNC_5(VAR_2, VAR_3, (VAR_4 - VAR_7));

  VAR_3->stats.dropped_toomany += (VAR_4 - VAR_7);
  return (VAR_4);
 }

 return (VAR_7);
}
