
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_smack {char* smk_packet; } ;
struct sock {struct socket_smack* sk_security; } ;
struct request_sock {scalar_t__ peer_secid; } ;


 int VAR_0 ;
 char* FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,char*,int ) ;

__attribute__((used)) static void FUNC_2(struct sock *VAR_1,
     const struct request_sock *VAR_2)
{
 struct socket_smack *VAR_3 = VAR_1->sk_security;
 char *VAR_4;

 if (VAR_2->peer_secid != 0) {
  VAR_4 = FUNC_0(VAR_2->peer_secid);
  FUNC_1(VAR_3->smk_packet, VAR_4, VAR_0);
 } else
  VAR_3->smk_packet[0] = '\0';
}
