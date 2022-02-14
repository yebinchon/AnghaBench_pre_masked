
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ cacc_saw_newack; scalar_t__ next_tsn_at_change; scalar_t__ cycling_changeover; scalar_t__ changeover_active; } ;
struct sctp_transport {TYPE_3__ cacc; scalar_t__ hb_sent; scalar_t__ rto_pending; scalar_t__ error_count; scalar_t__ flight_size; scalar_t__ partial_bytes_acked; scalar_t__ rttvar; scalar_t__ srtt; scalar_t__ rtt; int rto; int ssthresh; scalar_t__ burst_limited; int cwnd; struct sctp_association* asoc; } ;
struct TYPE_4__ {int a_rwnd; } ;
struct TYPE_5__ {TYPE_1__ i; } ;
struct sctp_association {int pathmtu; int rto_initial; TYPE_2__ peer; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct sctp_association*,struct sctp_transport*) ;

void FUNC_3(struct sctp_transport *VAR_1)
{
 struct sctp_association *VAR_2 = VAR_1->asoc;






 VAR_1->cwnd = FUNC_1(4*VAR_2->pathmtu, FUNC_0(VAR_0, 2*VAR_2->pathmtu, 4380));
 VAR_1->burst_limited = 0;
 VAR_1->ssthresh = VAR_2->peer.i.a_rwnd;
 VAR_1->rto = VAR_2->rto_initial;
 FUNC_2(VAR_2, VAR_1);
 VAR_1->rtt = 0;
 VAR_1->srtt = 0;
 VAR_1->rttvar = 0;




 VAR_1->partial_bytes_acked = 0;
 VAR_1->flight_size = 0;
 VAR_1->error_count = 0;
 VAR_1->rto_pending = 0;
 VAR_1->hb_sent = 0;


 VAR_1->cacc.changeover_active = 0;
 VAR_1->cacc.cycling_changeover = 0;
 VAR_1->cacc.next_tsn_at_change = 0;
 VAR_1->cacc.cacc_saw_newack = 0;
}
