
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sctp_ulpq {struct sctp_association* asoc; } ;
struct TYPE_9__ {TYPE_2__* data_hdr; } ;
struct sctp_chunk {int transport; TYPE_3__ subh; TYPE_1__* chunk_hdr; } ;
struct TYPE_11__ {TYPE_6__* sk; } ;
struct TYPE_10__ {int tsn_map; } ;
struct sctp_association {TYPE_5__ base; TYPE_4__ peer; } ;
typedef int sctp_data_chunk_t ;
typedef int gfp_t ;
typedef int __u32 ;
typedef scalar_t__ __u16 ;
struct TYPE_12__ {int sk_receive_queue; } ;
struct TYPE_8__ {int tsn; } ;
struct TYPE_7__ {int length; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (struct sctp_ulpq*,struct sctp_chunk*,int ) ;
 scalar_t__ FUNC_4 (struct sctp_ulpq*,scalar_t__) ;
 scalar_t__ FUNC_5 (struct sctp_ulpq*,scalar_t__) ;
 int FUNC_6 (struct sctp_ulpq*,struct sctp_chunk*,int ) ;
 int FUNC_7 (TYPE_6__*) ;
 scalar_t__ FUNC_8 (int *) ;

void FUNC_9(struct sctp_ulpq *VAR_1, struct sctp_chunk *VAR_2,
        gfp_t VAR_3)
{
 struct sctp_association *VAR_4;
 __u16 VAR_5, VAR_6;

 VAR_4 = VAR_1->asoc;

 if (VAR_2) {
  VAR_5 = FUNC_1(VAR_2->chunk_hdr->length);
  VAR_5 -= sizeof(sctp_data_chunk_t);
 } else
  VAR_5 = VAR_0;

 VAR_6 = 0;

 if (FUNC_8(&VAR_4->base.sk->sk_receive_queue)) {
  VAR_6 = FUNC_5(VAR_1, VAR_5);
  if (VAR_6 < VAR_5) {
   VAR_6 += FUNC_4(VAR_1, VAR_5 - VAR_6);
  }
 }

 if (VAR_2 && (VAR_6 >= VAR_5)) {
  __u32 VAR_7;
  VAR_7 = FUNC_0(VAR_2->subh.data_hdr->tsn);
  FUNC_2(&VAR_4->peer.tsn_map, VAR_7, VAR_2->transport);
  FUNC_6(VAR_1, VAR_2, VAR_3);

  FUNC_3(VAR_1, VAR_2, VAR_3);
 }

 FUNC_7(VAR_4->base.sk);
 return;
}
