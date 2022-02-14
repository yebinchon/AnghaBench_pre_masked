
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sockaddr_ax25 {int dummy; } ;
struct sockaddr {int dummy; } ;
struct sock {scalar_t__ sk_state; } ;
struct nr_sock {int source_addr; int dest_addr; int user_addr; } ;
struct TYPE_2__ {int sax25_ndigis; int sax25_call; void* sax25_family; } ;
struct full_sockaddr_ax25 {TYPE_1__ fsa_ax25; int * fsa_digipeater; } ;


 void* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (int *,int ,int) ;
 struct nr_sock* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;

__attribute__((used)) static int FUNC_4(struct socket *VAR_3, struct sockaddr *VAR_4,
 int *VAR_5, int VAR_6)
{
 struct full_sockaddr_ax25 *VAR_7 = (struct full_sockaddr_ax25 *)VAR_4;
 struct sock *VAR_8 = VAR_3->sk;
 struct nr_sock *VAR_9 = FUNC_2(VAR_8);

 FUNC_0(VAR_8);
 if (VAR_6 != 0) {
  if (VAR_8->sk_state != VAR_2) {
   FUNC_3(VAR_8);
   return -VAR_1;
  }
  VAR_7->fsa_ax25.sax25_family = VAR_0;
  VAR_7->fsa_ax25.sax25_ndigis = 1;
  VAR_7->fsa_ax25.sax25_call = VAR_9->user_addr;
  FUNC_1(VAR_7->fsa_digipeater, 0, sizeof(VAR_7->fsa_digipeater));
  VAR_7->fsa_digipeater[0] = VAR_9->dest_addr;
  *VAR_5 = sizeof(struct full_sockaddr_ax25);
 } else {
  VAR_7->fsa_ax25.sax25_family = VAR_0;
  VAR_7->fsa_ax25.sax25_ndigis = 0;
  VAR_7->fsa_ax25.sax25_call = VAR_9->source_addr;
  *VAR_5 = sizeof(struct sockaddr_ax25);
 }
 FUNC_3(VAR_8);

 return 0;
}
