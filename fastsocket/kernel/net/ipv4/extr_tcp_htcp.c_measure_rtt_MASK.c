
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sock {int dummy; } ;
struct inet_connection_sock {scalar_t__ icsk_ca_state; } ;
struct htcp {scalar_t__ minRTT; scalar_t__ maxRTT; } ;


 scalar_t__ VAR_0 ;
 struct inet_connection_sock* FUNC_0 (struct sock*) ;
 struct htcp* FUNC_1 (struct sock*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static inline void FUNC_3(struct sock *VAR_1, u32 VAR_2)
{
 const struct inet_connection_sock *VAR_3 = FUNC_0(VAR_1);
 struct htcp *VAR_4 = FUNC_1(VAR_1);


 if (VAR_4->minRTT > VAR_2 || !VAR_4->minRTT)
  VAR_4->minRTT = VAR_2;


 if (VAR_3->icsk_ca_state == VAR_0) {
  if (VAR_4->maxRTT < VAR_4->minRTT)
   VAR_4->maxRTT = VAR_4->minRTT;
  if (VAR_4->maxRTT < VAR_2
      && VAR_2 <= VAR_4->maxRTT + FUNC_2(20))
   VAR_4->maxRTT = VAR_2;
 }
}
