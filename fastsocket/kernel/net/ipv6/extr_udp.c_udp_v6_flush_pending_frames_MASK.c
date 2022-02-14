
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udp_sock {scalar_t__ pending; scalar_t__ len; } ;
struct sock {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 struct udp_sock* FUNC_2 (struct sock*) ;

__attribute__((used)) static void FUNC_3(struct sock *VAR_1)
{
 struct udp_sock *VAR_2 = FUNC_2(VAR_1);

 if (VAR_2->pending == VAR_0)
  FUNC_1(VAR_1);
 else if (VAR_2->pending) {
  VAR_2->len = 0;
  VAR_2->pending = 0;
  FUNC_0(VAR_1);
 }
}
