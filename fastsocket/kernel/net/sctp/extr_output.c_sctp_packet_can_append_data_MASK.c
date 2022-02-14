
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sctp_transport {size_t flight_size; size_t cwnd; unsigned int pathmtu; struct sctp_association* asoc; } ;
struct sctp_packet {unsigned int overhead; struct sctp_transport* transport; } ;
struct sctp_outq {size_t outstanding_bytes; unsigned int out_qlen; } ;
struct sctp_chunk {scalar_t__ fast_retransmit; TYPE_4__* msg; TYPE_3__* skb; } ;
struct TYPE_7__ {int sk; } ;
struct TYPE_6__ {size_t rwnd; } ;
struct sctp_association {TYPE_2__ base; TYPE_1__ peer; struct sctp_outq outqueue; } ;
typedef int sctp_xmit_t ;
struct TYPE_10__ {int nodelay; } ;
struct TYPE_9__ {scalar_t__ can_delay; } ;
struct TYPE_8__ {unsigned int len; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_0 (struct sctp_chunk*) ;
 scalar_t__ FUNC_1 (struct sctp_packet*) ;
 TYPE_5__* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct sctp_association*,int ) ;

__attribute__((used)) static sctp_xmit_t FUNC_4(struct sctp_packet *VAR_5,
        struct sctp_chunk *VAR_6)
{
 sctp_xmit_t VAR_7 = VAR_3;
 size_t VAR_8, VAR_9, VAR_10, VAR_11;
 struct sctp_transport *VAR_12 = VAR_5->transport;
 struct sctp_association *VAR_13 = VAR_12->asoc;
 struct sctp_outq *VAR_14 = &VAR_13->outqueue;
 VAR_9 = VAR_13->peer.rwnd;
 VAR_10 = VAR_14->outstanding_bytes;
 VAR_11 = VAR_12->flight_size;

 VAR_8 = FUNC_0(VAR_6);

 if (VAR_8 > VAR_9) {
  if (VAR_10 > 0) {



   VAR_7 = VAR_4;
   goto finish;
  }
 }
 if (VAR_6->fast_retransmit != VAR_1)
  if (VAR_11 >= VAR_12->cwnd) {
   VAR_7 = VAR_4;
   goto finish;
  }






 if (!FUNC_2(VAR_13->base.sk)->nodelay && FUNC_1(VAR_5) &&
     VAR_10 && FUNC_3(VAR_13, VAR_0)) {
  unsigned VAR_15 = VAR_12->pathmtu - VAR_5->overhead;
  unsigned VAR_16 = VAR_6->skb->len + VAR_14->out_qlen;







  if ((VAR_16 < VAR_15) && VAR_6->msg->can_delay) {
   VAR_7 = VAR_2;
   goto finish;
  }
 }

finish:
 return VAR_7;
}
