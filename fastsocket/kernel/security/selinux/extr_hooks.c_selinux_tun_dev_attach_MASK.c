
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sock {struct sk_security_struct* sk_security; } ;
struct sk_security_struct {int sid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ,int *) ;
 int FUNC_1 () ;

__attribute__((used)) static int FUNC_2(struct sock *VAR_3)
{
 struct sk_security_struct *VAR_4 = VAR_3->sk_security;
 u32 VAR_5 = FUNC_1();
 int VAR_6;

 VAR_6 = FUNC_0(VAR_5, VAR_4->sid, VAR_0,
      VAR_1, ((void*)0));
 if (VAR_6)
  return VAR_6;
 VAR_6 = FUNC_0(VAR_5, VAR_5, VAR_0,
      VAR_2, ((void*)0));
 if (VAR_6)
  return VAR_6;

 VAR_4->sid = VAR_5;

 return 0;
}
