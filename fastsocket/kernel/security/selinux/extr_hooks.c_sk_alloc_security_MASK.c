
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {struct sk_security_struct* sk_security; } ;
struct sk_security_struct {void* sid; void* peer_sid; } ;
typedef int gfp_t ;


 int VAR_0 ;
 void* VAR_1 ;
 struct sk_security_struct* FUNC_0 (int,int ) ;
 int FUNC_1 (struct sk_security_struct*) ;

__attribute__((used)) static int FUNC_2(struct sock *VAR_2, int VAR_3, gfp_t VAR_4)
{
 struct sk_security_struct *VAR_5;

 VAR_5 = FUNC_0(sizeof(*VAR_5), VAR_4);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->peer_sid = VAR_1;
 VAR_5->sid = VAR_1;
 VAR_2->sk_security = VAR_5;

 FUNC_1(VAR_5);

 return 0;
}
