
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct request_sock {TYPE_2__* rsk_ops; int retrans; } ;
struct dccp_request_sock {scalar_t__ dreq_iss; int dreq_isr; } ;
struct TYPE_10__ {scalar_t__ dccpd_ack_seq; int dccpd_reset_code; int dccpd_seq; } ;
struct TYPE_9__ {scalar_t__ dccph_type; } ;
struct TYPE_8__ {TYPE_1__* icsk_af_ops; } ;
struct TYPE_7__ {int (* send_reset ) (struct sock*,struct sk_buff*) ;int (* rtx_syn_ack ) (struct sock*,struct request_sock*) ;} ;
struct TYPE_6__ {struct sock* (* syn_recv_sock ) (struct sock*,struct sk_buff*,struct request_sock*,int *) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_5__* FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 TYPE_4__* FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct sock*,struct dccp_request_sock*,struct sk_buff*) ;
 int FUNC_4 (char*,...) ;
 struct dccp_request_sock* FUNC_5 (struct request_sock*) ;
 TYPE_3__* FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*,struct request_sock*,struct sock*) ;
 int FUNC_8 (struct sock*,struct request_sock*,struct request_sock**) ;
 int FUNC_9 (struct sock*,struct request_sock*) ;
 int FUNC_10 (struct sock*,struct request_sock*,struct request_sock**) ;
 int FUNC_11 (struct sock*,struct request_sock*) ;
 struct sock* FUNC_12 (struct sock*,struct sk_buff*,struct request_sock*,int *) ;
 int FUNC_13 (struct sock*,struct sk_buff*) ;

struct sock *FUNC_14(struct sock *VAR_6, struct sk_buff *VAR_7,
       struct request_sock *VAR_8,
       struct request_sock **VAR_9)
{
 struct sock *VAR_10 = ((void*)0);
 struct dccp_request_sock *VAR_11 = FUNC_5(VAR_8);


 if (FUNC_2(VAR_7)->dccph_type == VAR_2) {

  if (FUNC_1(FUNC_0(VAR_7)->dccpd_seq, VAR_11->dreq_isr)) {
   FUNC_4("Retransmitted REQUEST\n");
   VAR_11->dreq_isr = FUNC_0(VAR_7)->dccpd_seq;





   VAR_8->retrans++;
   VAR_8->rsk_ops->rtx_syn_ack(VAR_6, VAR_8);
  }

  return ((void*)0);
 }

 FUNC_0(VAR_7)->dccpd_reset_code = VAR_4;

 if (FUNC_2(VAR_7)->dccph_type != VAR_0 &&
     FUNC_2(VAR_7)->dccph_type != VAR_1)
  goto drop;


 if (FUNC_0(VAR_7)->dccpd_ack_seq != VAR_11->dreq_iss) {
  FUNC_4("Invalid ACK number: ack_seq=%llu, "
         "dreq_iss=%llu\n",
         (unsigned long long)
         FUNC_0(VAR_7)->dccpd_ack_seq,
         (unsigned long long) VAR_11->dreq_iss);
  goto drop;
 }

 if (FUNC_3(VAR_6, VAR_11, VAR_7))
   goto drop;

 VAR_10 = FUNC_6(VAR_6)->icsk_af_ops->syn_recv_sock(VAR_6, VAR_7, VAR_8, ((void*)0));
 if (VAR_10 == ((void*)0))
  goto listen_overflow;

 FUNC_10(VAR_6, VAR_8, VAR_9);
 FUNC_9(VAR_6, VAR_8);
 FUNC_7(VAR_6, VAR_8, VAR_10);
out:
 return VAR_10;
listen_overflow:
 FUNC_4("listen_overflow!\n");
 FUNC_0(VAR_7)->dccpd_reset_code = VAR_5;
drop:
 if (FUNC_2(VAR_7)->dccph_type != VAR_3)
  VAR_8->rsk_ops->send_reset(VAR_6, VAR_7);

 FUNC_8(VAR_6, VAR_8, VAR_9);
 goto out;
}
