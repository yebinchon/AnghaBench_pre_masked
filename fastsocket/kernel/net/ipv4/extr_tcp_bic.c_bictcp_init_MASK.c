
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct bictcp {scalar_t__ loss_cwnd; } ;
struct TYPE_2__ {scalar_t__ snd_ssthresh; } ;


 int FUNC_0 (struct bictcp*) ;
 struct bictcp* FUNC_1 (struct sock*) ;
 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_2 (struct sock*) ;

__attribute__((used)) static void FUNC_3(struct sock *VAR_1)
{
 struct bictcp *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_2);
 VAR_2->loss_cwnd = 0;

 if (VAR_0)
  FUNC_2(VAR_1)->snd_ssthresh = VAR_0;
}
