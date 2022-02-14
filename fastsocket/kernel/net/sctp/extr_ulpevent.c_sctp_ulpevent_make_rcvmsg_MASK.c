
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct sk_buff {size_t data; int len; } ;
struct sctp_ulpevent {int msg_flags; int iif; int tsn; int cumtsn; int flags; int ppid; void* ssn; void* stream; } ;
struct TYPE_13__ {TYPE_4__* data_hdr; } ;
struct sctp_chunk {size_t chunk_end; TYPE_6__* chunk_hdr; TYPE_5__ subh; int transport; TYPE_7__* skb; } ;
struct TYPE_11__ {int tsn_map; } ;
struct TYPE_10__ {TYPE_8__* sk; } ;
struct sctp_association {TYPE_3__ peer; TYPE_2__ base; int rmem_alloc; TYPE_1__* ep; } ;
typedef int gfp_t ;
struct TYPE_16__ {int sk_rcvbuf; int sk_userlocks; int sk_rmem_alloc; } ;
struct TYPE_15__ {int truesize; } ;
struct TYPE_14__ {int flags; int length; } ;
struct TYPE_12__ {int tsn; int ppid; int ssn; int stream; } ;
struct TYPE_9__ {scalar_t__ rcvbuf_policy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (size_t) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (struct sctp_chunk*) ;
 struct sctp_ulpevent* FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (struct sctp_ulpevent*,int ,int) ;
 int FUNC_10 (struct sctp_ulpevent*,struct sctp_association*) ;
 int FUNC_11 (TYPE_8__*,int ) ;
 struct sk_buff* FUNC_12 (TYPE_7__*,int ) ;
 int FUNC_13 (struct sk_buff*,size_t) ;

struct sctp_ulpevent *FUNC_14(struct sctp_association *VAR_3,
      struct sctp_chunk *VAR_4,
      gfp_t VAR_5)
{
 struct sctp_ulpevent *VAR_6 = ((void*)0);
 struct sk_buff *VAR_7;
 size_t VAR_8, VAR_9;
 int VAR_10;






 if (VAR_3->ep->rcvbuf_policy)
  VAR_10 = FUNC_1(&VAR_3->rmem_alloc);
 else
  VAR_10 = FUNC_1(&VAR_3->base.sk->sk_rmem_alloc);

 if (VAR_10 >= VAR_3->base.sk->sk_rcvbuf) {

  if ((VAR_3->base.sk->sk_userlocks & VAR_2) ||
      (!FUNC_11(VAR_3->base.sk, VAR_4->skb->truesize)))
   goto fail;
 }


 VAR_7 = FUNC_12(VAR_4->skb, VAR_5);
 if (!VAR_7)
  goto fail;




 if (FUNC_8(&VAR_3->peer.tsn_map,
        FUNC_3(VAR_4->subh.data_hdr->tsn),
        VAR_4->transport))
  goto fail_mark;
 VAR_9 = FUNC_4(VAR_4->chunk_hdr->length);
 VAR_8 = FUNC_0(VAR_9) - VAR_9;


 FUNC_13(VAR_7, VAR_4->chunk_end - VAR_8 - VAR_7->data);


 VAR_6 = FUNC_6(VAR_7);





 FUNC_9(VAR_6, 0, VAR_7->len + sizeof(struct sk_buff));

 FUNC_10(VAR_6, VAR_3);

 VAR_6->stream = FUNC_4(VAR_4->subh.data_hdr->stream);
 VAR_6->ssn = FUNC_4(VAR_4->subh.data_hdr->ssn);
 VAR_6->ppid = VAR_4->subh.data_hdr->ppid;
 if (VAR_4->chunk_hdr->flags & VAR_0) {
  VAR_6->flags |= VAR_1;
  VAR_6->cumtsn = FUNC_7(&VAR_3->peer.tsn_map);
 }
 VAR_6->tsn = FUNC_3(VAR_4->subh.data_hdr->tsn);
 VAR_6->msg_flags |= VAR_4->chunk_hdr->flags;
 VAR_6->iif = FUNC_5(VAR_4);

 return VAR_6;

fail_mark:
 FUNC_2(VAR_7);
fail:
 return ((void*)0);
}
