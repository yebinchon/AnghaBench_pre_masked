
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sctp_transport {int pathmtu; int saddr; int ipaddr; int asoc; TYPE_1__* af_specific; } ;
struct flowi {int dummy; } ;
struct dst_entry {int dummy; } ;
struct TYPE_2__ {struct dst_entry* (* get_dst ) (int ,int *,int *,struct flowi*,struct sock*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct dst_entry*) ;
 int FUNC_1 (struct dst_entry*) ;
 struct dst_entry* FUNC_2 (int ,int *,int *,struct flowi*,struct sock*) ;

void FUNC_3(struct sctp_transport *VAR_1, struct sock *VAR_2)
{
 struct dst_entry *VAR_3;
 struct flowi VAR_4;

 VAR_3 = VAR_1->af_specific->get_dst(VAR_1->asoc,
           &VAR_1->ipaddr,
           &VAR_1->saddr,
           &VAR_4, VAR_2);

 if (VAR_3) {
  VAR_1->pathmtu = FUNC_0(VAR_3);
  FUNC_1(VAR_3);
 } else
  VAR_1->pathmtu = VAR_0;
}
