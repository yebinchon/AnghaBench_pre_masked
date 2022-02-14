
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_err; } ;
struct TYPE_2__ {struct sock* sk; } ;
struct sctp_association {TYPE_1__ base; } ;


 int VAR_0 ;
 int FUNC_0 (struct sock*,int ) ;

__attribute__((used)) static void FUNC_1(struct sctp_association *VAR_1, int VAR_2)
{
 struct sock *VAR_3 = VAR_1->base.sk;

 if (!FUNC_0(VAR_3, VAR_0))
  VAR_3->sk_err = VAR_2;
}
