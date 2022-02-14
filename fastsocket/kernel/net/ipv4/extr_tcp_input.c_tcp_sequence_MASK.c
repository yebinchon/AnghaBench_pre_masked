
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcp_sock {scalar_t__ rcv_nxt; int rcv_wup; } ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (struct tcp_sock*) ;

__attribute__((used)) static inline int FUNC_3(struct tcp_sock *VAR_0, u32 VAR_1, u32 VAR_2)
{
 return !FUNC_1(VAR_2, VAR_0->rcv_wup) &&
  !FUNC_0(VAR_1, VAR_0->rcv_nxt + FUNC_2(VAR_0));
}
