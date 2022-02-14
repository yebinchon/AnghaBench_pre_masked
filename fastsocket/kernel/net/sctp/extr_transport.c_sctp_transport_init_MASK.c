
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sa_family; } ;
union sctp_addr {TYPE_1__ sa; } ;
struct TYPE_5__ {unsigned long data; int function; } ;
struct sctp_transport {int param_flags; int refcnt; int hb_nonce; TYPE_2__ proto_unreach_timer; TYPE_2__ hb_timer; TYPE_2__ T3_rtx_timer; int transports; int send_ready; int transmitted; int pf_retrans; int pathmaxrxt; void* last_time_ecne_reduced; void* last_time_heard; int rto; scalar_t__ sack_generation; int saddr; int af_specific; union sctp_addr ipaddr; } ;
typedef int gfp_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (TYPE_2__*) ;
 void* VAR_3 ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (TYPE_2__*,int ,unsigned long) ;

__attribute__((used)) static struct sctp_transport *FUNC_8(struct sctp_transport *VAR_10,
        const union sctp_addr *VAR_11,
        gfp_t VAR_12)
{

 VAR_10->ipaddr = *VAR_11;
 VAR_10->af_specific = FUNC_6(VAR_11->sa.sa_family);
 FUNC_4(&VAR_10->saddr, 0, sizeof(union sctp_addr));

 VAR_10->sack_generation = 0;







 VAR_10->rto = FUNC_5(VAR_9);

 VAR_10->last_time_heard = VAR_3;
 VAR_10->last_time_ecne_reduced = VAR_3;

 VAR_10->param_flags = VAR_0 |
       VAR_1 |
       VAR_2;


 VAR_10->pathmaxrxt = VAR_7;
 VAR_10->pf_retrans = VAR_8;

 FUNC_0(&VAR_10->transmitted);
 FUNC_0(&VAR_10->send_ready);
 FUNC_0(&VAR_10->transports);

 FUNC_7(&VAR_10->T3_rtx_timer, VAR_6,
   (unsigned long)VAR_10);
 FUNC_7(&VAR_10->hb_timer, VAR_4,
   (unsigned long)VAR_10);
 FUNC_7(&VAR_10->proto_unreach_timer,
      VAR_5, (unsigned long)VAR_10);

 FUNC_3(&VAR_10->proto_unreach_timer);
        VAR_10->proto_unreach_timer.function = VAR_5;
 VAR_10->proto_unreach_timer.data = (unsigned long)VAR_10;


 FUNC_2(&VAR_10->hb_nonce, sizeof(VAR_10->hb_nonce));

 FUNC_1(&VAR_10->refcnt, 1);

 return VAR_10;
}
