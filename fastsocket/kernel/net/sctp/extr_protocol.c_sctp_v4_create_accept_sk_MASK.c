
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sock {TYPE_5__* sk_prot; } ;
struct TYPE_6__ {int s_addr; } ;
struct TYPE_7__ {TYPE_1__ sin_addr; } ;
struct TYPE_8__ {TYPE_2__ v4; } ;
struct TYPE_9__ {TYPE_3__ primary_addr; } ;
struct sctp_association {TYPE_4__ peer; } ;
struct inet_sock {int daddr; } ;
struct TYPE_10__ {scalar_t__ (* init ) (struct sock*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct inet_sock* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*,struct sock*,struct sctp_association*) ;
 struct sock* FUNC_2 (int ,int ,int ,TYPE_5__*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (int *,struct sock*) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*,int ) ;
 scalar_t__ FUNC_8 (struct sock*) ;

__attribute__((used)) static struct sock *FUNC_9(struct sock *VAR_3,
          struct sctp_association *VAR_4)
{
 struct sock *VAR_5 = FUNC_2(FUNC_6(VAR_3), VAR_1, VAR_0,
   VAR_3->sk_prot);
 struct inet_sock *VAR_6;

 if (!VAR_5)
  goto out;

 FUNC_5(((void*)0), VAR_5);

 FUNC_1(VAR_5, VAR_3, VAR_4);
 FUNC_7(VAR_5, VAR_2);

 VAR_6 = FUNC_0(VAR_5);

 VAR_6->daddr = VAR_4->peer.primary_addr.v4.sin_addr.s_addr;

 FUNC_4(VAR_5);

 if (VAR_5->sk_prot->init(VAR_5)) {
  FUNC_3(VAR_5);
  VAR_5 = ((void*)0);
 }

out:
 return VAR_5;
}
