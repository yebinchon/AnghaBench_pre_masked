
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_smack {char* smk_in; char* smk_out; char* smk_packet; } ;
struct sock {struct socket_smack* sk_security; } ;
typedef int gfp_t ;


 int VAR_0 ;
 char* FUNC_0 () ;
 struct socket_smack* FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct sock *VAR_1, int VAR_2, gfp_t VAR_3)
{
 char *VAR_4 = FUNC_0();
 struct socket_smack *VAR_5;

 VAR_5 = FUNC_1(sizeof(struct socket_smack), VAR_3);
 if (VAR_5 == ((void*)0))
  return -VAR_0;

 VAR_5->smk_in = VAR_4;
 VAR_5->smk_out = VAR_4;
 VAR_5->smk_packet[0] = '\0';

 VAR_1->sk_security = VAR_5;

 return 0;
}
