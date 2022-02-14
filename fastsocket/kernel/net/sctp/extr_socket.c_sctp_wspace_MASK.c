
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_3__* sk; } ;
struct sctp_association {int sndbuf_used; TYPE_1__ base; TYPE_2__* ep; } ;
struct TYPE_7__ {int sk_sndbuf; int sk_userlocks; } ;
struct TYPE_6__ {scalar_t__ sndbuf_policy; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static inline int FUNC_2(struct sctp_association *VAR_1)
{
 int VAR_2;

 if (VAR_1->ep->sndbuf_policy)
  VAR_2 = VAR_1->sndbuf_used;
 else
  VAR_2 = FUNC_1(VAR_1->base.sk);

 if (VAR_2 >= VAR_1->base.sk->sk_sndbuf) {
  if (VAR_1->base.sk->sk_userlocks & VAR_0)
   VAR_2 = 0;
  else {
   VAR_2 = FUNC_0(VAR_1->base.sk);
   if (VAR_2 < 0)
    VAR_2 = 0;
  }
 } else {
  VAR_2 = VAR_1->base.sk->sk_sndbuf - VAR_2;
 }
 return VAR_2;
}
