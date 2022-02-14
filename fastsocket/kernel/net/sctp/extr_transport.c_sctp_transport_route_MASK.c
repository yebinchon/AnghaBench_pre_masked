
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef union sctp_addr {int dummy; } sctp_addr ;
struct sctp_transport {int param_flags; int pathmtu; int saddr; struct dst_entry* dst; union sctp_addr ipaddr; struct sctp_af* af_specific; struct sctp_association* asoc; } ;
struct sctp_sock {TYPE_3__* pf; } ;
struct TYPE_8__ {int sk; } ;
struct TYPE_5__ {struct sctp_transport* active_path; int primary_path; } ;
struct sctp_association {TYPE_4__ base; TYPE_1__ peer; } ;
struct sctp_af {int (* get_saddr ) (struct sctp_sock*,struct sctp_transport*,union sctp_addr*,struct flowi*) ;struct dst_entry* (* get_dst ) (struct sctp_association*,union sctp_addr*,union sctp_addr*,struct flowi*,int ) ;} ;
struct flowi {int dummy; } ;
struct dst_entry {int dummy; } ;
struct TYPE_7__ {TYPE_2__* af; } ;
struct TYPE_6__ {int (* to_sk_saddr ) (int *,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dst_entry*) ;
 int FUNC_1 (int *,union sctp_addr*,int) ;
 int FUNC_2 (struct sctp_sock*) ;
 struct dst_entry* FUNC_3 (struct sctp_association*,union sctp_addr*,union sctp_addr*,struct flowi*,int ) ;
 int FUNC_4 (struct sctp_sock*,struct sctp_transport*,union sctp_addr*,struct flowi*) ;
 int FUNC_5 (int *,int ) ;

void FUNC_6(struct sctp_transport *VAR_2,
     union sctp_addr *VAR_3, struct sctp_sock *VAR_4)
{
 struct sctp_association *VAR_5 = VAR_2->asoc;
 struct sctp_af *VAR_6 = VAR_2->af_specific;
 union sctp_addr *VAR_7 = &VAR_2->ipaddr;
 struct dst_entry *VAR_8;
 struct flowi VAR_9;

 VAR_8 = VAR_6->get_dst(VAR_5, VAR_7, VAR_3, &VAR_9, FUNC_2(VAR_4));
 VAR_2->dst = VAR_8;

 if (VAR_3)
  FUNC_1(&VAR_2->saddr, VAR_3, sizeof(union sctp_addr));
 else
  VAR_6->get_saddr(VAR_4, VAR_2, VAR_7, &VAR_9);

 if ((VAR_2->param_flags & VAR_1) && VAR_2->pathmtu) {
  return;
 }
 if (VAR_8) {
  VAR_2->pathmtu = FUNC_0(VAR_8);




  if (VAR_5 && (!VAR_5->peer.primary_path ||
    (VAR_2 == VAR_5->peer.active_path)))
   VAR_4->pf->af->to_sk_saddr(&VAR_2->saddr,
       VAR_5->base.sk);
 } else
  VAR_2->pathmtu = VAR_0;
}
