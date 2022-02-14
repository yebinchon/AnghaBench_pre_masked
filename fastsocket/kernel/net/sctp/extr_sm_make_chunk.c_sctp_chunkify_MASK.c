
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct sctp_chunk {int singleton; int refcnt; int frag_list; int transmitted_list; int * msg; int fast_retransmit; scalar_t__ tsn_gap_acked; scalar_t__ tsn_missing_report; scalar_t__ pdiscard; scalar_t__ ecn_ce_done; scalar_t__ end_of_packet; scalar_t__ sent_at; scalar_t__ rtt_in_progress; scalar_t__ has_ssn; scalar_t__ has_tsn; struct sctp_association* asoc; struct sk_buff* skb; int list; } ;
struct sctp_association {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,struct sk_buff*) ;
 int FUNC_3 (int *,int) ;
 int VAR_2 ;
 struct sctp_chunk* FUNC_4 (int ,int ) ;
 int VAR_3 ;

struct sctp_chunk *FUNC_5(struct sk_buff *VAR_4,
       const struct sctp_association *VAR_5,
       struct sock *VAR_6)
{
 struct sctp_chunk *VAR_7;

 VAR_7 = FUNC_4(VAR_3, VAR_0);

 if (!VAR_7)
  goto nodata;

 if (!VAR_6) {
  FUNC_2("chunkifying skb %p w/o an sk\n", VAR_4);
 }

 FUNC_0(&VAR_7->list);
 VAR_7->skb = VAR_4;
 VAR_7->asoc = (struct sctp_association *)VAR_5;
 VAR_7->has_tsn = 0;
 VAR_7->has_ssn = 0;
 VAR_7->rtt_in_progress = 0;
 VAR_7->sent_at = 0;
 VAR_7->singleton = 1;
 VAR_7->end_of_packet = 0;
 VAR_7->ecn_ce_done = 0;
 VAR_7->pdiscard = 0;







 VAR_7->tsn_missing_report = 0;
 VAR_7->tsn_gap_acked = 0;
 VAR_7->fast_retransmit = VAR_1;




 VAR_7->msg = ((void*)0);


 FUNC_0(&VAR_7->transmitted_list);
 FUNC_0(&VAR_7->frag_list);
 FUNC_1(VAR_2);
 FUNC_3(&VAR_7->refcnt, 1);

nodata:
 return VAR_7;
}
