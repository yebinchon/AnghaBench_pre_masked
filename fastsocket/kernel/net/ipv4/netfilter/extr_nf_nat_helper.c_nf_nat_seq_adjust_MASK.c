
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcphdr {void* seq; void* ack_seq; int check; } ;
struct sk_buff {scalar_t__ data; } ;
struct nf_nat_seq {scalar_t__ offset_before; scalar_t__ offset_after; int correction_pos; } ;
struct nf_conn_nat {struct nf_nat_seq* seq; } ;
struct nf_conn {int dummy; } ;
typedef scalar_t__ s16 ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
typedef void* __be32 ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 void* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,struct sk_buff*,void*,void*,int ) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,struct tcphdr*,struct nf_conn*,int) ;
 struct nf_conn_nat* FUNC_6 (struct nf_conn*) ;
 scalar_t__ FUNC_7 (void*) ;
 int FUNC_8 (char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_9 (struct sk_buff*,int) ;

int
FUNC_10(struct sk_buff *VAR_0,
    struct nf_conn *VAR_1,
    enum ip_conntrack_info VAR_2)
{
 struct tcphdr *VAR_3;
 int VAR_4;
 __be32 VAR_5, VAR_6;
 s16 VAR_7, VAR_8;
 struct nf_conn_nat *VAR_9 = FUNC_6(VAR_1);
 struct nf_nat_seq *VAR_10, *VAR_11;

 VAR_4 = FUNC_0(VAR_2);

 VAR_10 = &VAR_9->seq[VAR_4];
 VAR_11 = &VAR_9->seq[!VAR_4];

 if (!FUNC_9(VAR_0, FUNC_4(VAR_0) + sizeof(*VAR_3)))
  return 0;

 VAR_3 = (void *)VAR_0->data + FUNC_4(VAR_0);
 if (FUNC_1(FUNC_7(VAR_3->seq), VAR_10->correction_pos))
  VAR_7 = VAR_10->offset_after;
 else
  VAR_7 = VAR_10->offset_before;

 if (FUNC_1(FUNC_7(VAR_3->ack_seq) - VAR_11->offset_before,
    VAR_11->correction_pos))
  VAR_8 = VAR_11->offset_after;
 else
  VAR_8 = VAR_11->offset_before;

 VAR_5 = FUNC_2(FUNC_7(VAR_3->seq) + VAR_7);
 VAR_6 = FUNC_2(FUNC_7(VAR_3->ack_seq) - VAR_8);

 FUNC_3(&VAR_3->check, VAR_0, VAR_3->seq, VAR_5, 0);
 FUNC_3(&VAR_3->check, VAR_0, VAR_3->ack_seq, VAR_6, 0);

 FUNC_8("Adjusting sequence number from %u->%u, ack from %u->%u\n",
   FUNC_7(VAR_3->seq), FUNC_7(VAR_5), FUNC_7(VAR_3->ack_seq),
   FUNC_7(VAR_6));

 VAR_3->seq = VAR_5;
 VAR_3->ack_seq = VAR_6;

 return FUNC_5(VAR_0, VAR_3, VAR_1, VAR_2);
}
