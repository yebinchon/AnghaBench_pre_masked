
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int rcv_wscale; } ;
struct tcp_sock {int rcv_wnd; scalar_t__ pred_flags; TYPE_1__ rx_opt; int rcv_nxt; int rcv_wup; } ;
struct sock {int dummy; } ;


 int FUNC_0 (int,int) ;
 unsigned int VAR_0 ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (int,unsigned int) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (struct tcp_sock*) ;
 struct tcp_sock* FUNC_4 (struct sock*) ;

__attribute__((used)) static u16 FUNC_5(struct sock *VAR_2)
{
 struct tcp_sock *VAR_3 = FUNC_4(VAR_2);
 u32 VAR_4 = FUNC_3(VAR_3);
 u32 VAR_5 = FUNC_1(VAR_2);


 if (VAR_5 < VAR_4) {







  VAR_5 = FUNC_0(VAR_4, 1 << VAR_3->rx_opt.rcv_wscale);
 }
 VAR_3->rcv_wnd = VAR_5;
 VAR_3->rcv_wup = VAR_3->rcv_nxt;




 if (!VAR_3->rx_opt.rcv_wscale && VAR_1)
  VAR_5 = FUNC_2(VAR_5, VAR_0);
 else
  VAR_5 = FUNC_2(VAR_5, (65535U << VAR_3->rx_opt.rcv_wscale));


 VAR_5 >>= VAR_3->rx_opt.rcv_wscale;


 if (VAR_5 == 0)
  VAR_3->pred_flags = 0;

 return VAR_5;
}
