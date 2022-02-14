
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sctp_transport {scalar_t__ pathmtu; int pmtu_pending; int param_flags; } ;
struct sctp_association {int pmtu_pending; int outqueue; } ;
typedef scalar_t__ __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sctp_association*) ;
 int FUNC_1 (int *,struct sctp_transport*,int ) ;
 int FUNC_2 (struct sctp_transport*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct sock*) ;

void FUNC_4(struct sock *VAR_2, struct sctp_association *VAR_3,
      struct sctp_transport *VAR_4, __u32 VAR_5)
{
 if (!VAR_4 || (VAR_4->pathmtu <= VAR_5))
  return;

 if (FUNC_3(VAR_2)) {
  VAR_3->pmtu_pending = 1;
  VAR_4->pmtu_pending = 1;
  return;
 }

 if (VAR_4->param_flags & VAR_1) {

  FUNC_2(VAR_4, VAR_5);


  FUNC_0(VAR_3);
 }







 FUNC_1(&VAR_3->outqueue, VAR_4, VAR_0);
}
