
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dsack; } ;
struct tcp_sock {int duplicate_sack; TYPE_1__ rx_opt; } ;
struct sock {int dummy; } ;


 int FUNC_0 (struct sock*,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 struct tcp_sock* FUNC_2 (struct sock*) ;

__attribute__((used)) static void FUNC_3(struct sock *VAR_0, u32 VAR_1, u32 VAR_2)
{
 struct tcp_sock *VAR_3 = FUNC_2(VAR_0);

 if (!VAR_3->rx_opt.dsack)
  FUNC_0(VAR_0, VAR_1, VAR_2);
 else
  FUNC_1(VAR_3->duplicate_sack, VAR_1, VAR_2);
}
