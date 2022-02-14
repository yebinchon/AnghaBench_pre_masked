
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tcp_sock {int snd_cwnd; } ;
struct sock {int dummy; } ;
struct hstcp {size_t ai; } ;
struct TYPE_2__ {int md; } ;


 TYPE_1__* VAR_0 ;
 struct hstcp* FUNC_0 (struct sock*) ;
 int FUNC_1 (int,unsigned int) ;
 struct tcp_sock* FUNC_2 (struct sock*) ;

__attribute__((used)) static u32 FUNC_3(struct sock *VAR_1)
{
 const struct tcp_sock *VAR_2 = FUNC_2(VAR_1);
 const struct hstcp *VAR_3 = FUNC_0(VAR_1);


 return FUNC_1(VAR_2->snd_cwnd - ((VAR_2->snd_cwnd * VAR_0[VAR_3->ai].md) >> 8), 2U);
}
