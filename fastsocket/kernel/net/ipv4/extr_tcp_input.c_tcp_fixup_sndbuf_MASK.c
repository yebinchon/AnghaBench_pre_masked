
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int sk_sndbuf; } ;
struct sk_buff {int dummy; } ;
struct TYPE_3__ {int mss_clamp; } ;
struct TYPE_4__ {TYPE_1__ rx_opt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int * VAR_2 ;
 TYPE_2__* FUNC_1 (struct sock*) ;

__attribute__((used)) static void FUNC_2(struct sock *VAR_3)
{
 int VAR_4 = FUNC_1(VAR_3)->rx_opt.mss_clamp + VAR_0 + 16 +
       sizeof(struct sk_buff);

 VAR_4 *= VAR_1;
 if (VAR_3->sk_sndbuf < VAR_4)
  VAR_3->sk_sndbuf = FUNC_0(VAR_4, VAR_2[2]);
}
