
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_err; } ;
struct inet_connection_sock {scalar_t__ icsk_retransmits; } ;
struct dst_entry {int dummy; } ;
struct dccp_sock {int dccps_iss; int dccps_gar; } ;


 int VAR_0 ;
 struct dst_entry* FUNC_0 (struct sock*) ;
 struct dccp_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*,int ) ;
 int FUNC_3 (struct dst_entry*) ;
 struct inet_connection_sock* FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*,int ) ;

__attribute__((used)) static inline void FUNC_6(struct sock *VAR_1)
{
 struct dccp_sock *VAR_2 = FUNC_1(VAR_1);
 struct dst_entry *VAR_3 = FUNC_0(VAR_1);
 struct inet_connection_sock *VAR_4 = FUNC_4(VAR_1);

 VAR_1->sk_err = 0;
 FUNC_5(VAR_1, VAR_0);

 FUNC_2(VAR_1, FUNC_3(VAR_3));


 VAR_2->dccps_gar = VAR_2->dccps_iss;

 VAR_4->icsk_retransmits = 0;
}
