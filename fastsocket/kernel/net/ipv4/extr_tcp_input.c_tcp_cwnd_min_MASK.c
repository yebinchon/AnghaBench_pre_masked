
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct tcp_congestion_ops {int (* min_cwnd ) (struct sock const*) ;} ;
struct sock {int dummy; } ;
struct TYPE_4__ {struct tcp_congestion_ops* icsk_ca_ops; } ;
struct TYPE_3__ {int snd_ssthresh; } ;


 TYPE_2__* FUNC_0 (struct sock const*) ;
 int FUNC_1 (struct sock const*) ;
 TYPE_1__* FUNC_2 (struct sock const*) ;

__attribute__((used)) static inline u32 FUNC_3(const struct sock *VAR_0)
{
 const struct tcp_congestion_ops *VAR_1 = FUNC_0(VAR_0)->icsk_ca_ops;

 return VAR_1->min_cwnd ? VAR_1->min_cwnd(VAR_0) : FUNC_2(VAR_0)->snd_ssthresh;
}
