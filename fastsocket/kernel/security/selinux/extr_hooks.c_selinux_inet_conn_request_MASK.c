
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
typedef scalar_t__ u16 ;
struct sock {scalar_t__ sk_family; struct sk_security_struct* sk_security; } ;
struct sk_security_struct {int sid; } ;
struct sk_buff {scalar_t__ protocol; } ;
struct request_sock {void* peer_secid; void* secid; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,void*,void**) ;
 int FUNC_2 (struct request_sock*,scalar_t__) ;
 int FUNC_3 (struct sk_buff*,scalar_t__,void**) ;

__attribute__((used)) static int FUNC_4(struct sock *VAR_3, struct sk_buff *VAR_4,
         struct request_sock *VAR_5)
{
 struct sk_security_struct *VAR_6 = VAR_3->sk_security;
 int VAR_7;
 u16 VAR_8 = VAR_3->sk_family;
 u32 VAR_9;
 u32 VAR_10;


 if (VAR_8 == VAR_2 && VAR_4->protocol == FUNC_0(VAR_0))
  VAR_8 = VAR_1;

 VAR_7 = FUNC_3(VAR_4, VAR_8, &VAR_10);
 if (VAR_7)
  return VAR_7;
 VAR_7 = FUNC_1(VAR_6->sid, VAR_10, &VAR_9);
 if (VAR_7)
  return VAR_7;
 VAR_5->secid = VAR_9;
 VAR_5->peer_secid = VAR_10;

 return FUNC_2(VAR_5, VAR_8);
}
