
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sock {TYPE_2__* sk_prot; } ;
struct TYPE_5__ {int primary_addr; } ;
struct sctp_association {TYPE_1__ peer; } ;
struct sctp6_sock {int inet6; } ;
struct ipv6_pinfo {int dummy; } ;
struct TYPE_8__ {int * pinet6; } ;
struct TYPE_7__ {int v4mapped; } ;
struct TYPE_6__ {scalar_t__ (* init ) (struct sock*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ipv6_pinfo* FUNC_0 (struct sock*) ;
 TYPE_4__* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct ipv6_pinfo*,struct ipv6_pinfo*,int) ;
 int FUNC_3 (struct sock*,struct sock*,struct sctp_association*) ;
 TYPE_3__* FUNC_4 (struct sock*) ;
 int FUNC_5 (int *,struct sock*) ;
 struct sock* FUNC_6 (int ,int ,int ,TYPE_2__*) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (int *,struct sock*) ;
 int FUNC_10 (struct sock*) ;
 int FUNC_11 (struct sock*,int ) ;
 scalar_t__ FUNC_12 (struct sock*) ;

__attribute__((used)) static struct sock *FUNC_13(struct sock *VAR_3,
          struct sctp_association *VAR_4)
{
 struct sock *VAR_5;
 struct ipv6_pinfo *VAR_6, *VAR_7 = FUNC_0(VAR_3);
 struct sctp6_sock *VAR_8;

 VAR_5 = FUNC_6(FUNC_10(VAR_3), VAR_1, VAR_0, VAR_3->sk_prot);
 if (!VAR_5)
  goto out;

 FUNC_9(((void*)0), VAR_5);

 FUNC_3(VAR_5, VAR_3, VAR_4);
 FUNC_11(VAR_3, VAR_2);

 VAR_8 = (struct sctp6_sock *)VAR_5;
 FUNC_1(VAR_5)->pinet6 = &VAR_8->inet6;

 FUNC_4(VAR_5)->v4mapped = FUNC_4(VAR_3)->v4mapped;

 VAR_6 = FUNC_0(VAR_5);

 FUNC_2(VAR_6, VAR_7, sizeof(struct ipv6_pinfo));




 FUNC_5(&VAR_4->peer.primary_addr, VAR_5);

 FUNC_8(VAR_5);

 if (VAR_5->sk_prot->init(VAR_5)) {
  FUNC_7(VAR_5);
  VAR_5 = ((void*)0);
 }

out:
 return VAR_5;
}
