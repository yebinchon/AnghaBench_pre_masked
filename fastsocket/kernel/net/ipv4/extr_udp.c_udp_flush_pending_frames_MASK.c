
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udp_sock {scalar_t__ pending; scalar_t__ len; } ;
struct sock {int dummy; } ;


 int FUNC_0 (struct sock*) ;
 struct udp_sock* FUNC_1 (struct sock*) ;

void FUNC_2(struct sock *VAR_0)
{
 struct udp_sock *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1->pending) {
  VAR_1->len = 0;
  VAR_1->pending = 0;
  FUNC_0(VAR_0);
 }
}
