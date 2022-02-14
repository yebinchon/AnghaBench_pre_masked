
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct sock {struct sk_security_struct* sk_security; } ;
struct sk_security_struct {int sid; } ;
struct sk_buff {int secmark; int iif; } ;
struct TYPE_3__ {int family; int netif; } ;
struct TYPE_4__ {TYPE_1__ net; } ;
struct common_audit_data {TYPE_2__ u; } ;


 int FUNC_0 (struct common_audit_data*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ,int ,struct common_audit_data*) ;
 int FUNC_2 (struct sk_buff*,int,int ) ;
 int FUNC_3 (struct sk_security_struct*,struct sk_buff*,int ,struct common_audit_data*) ;
 int FUNC_4 (struct sk_buff*,struct common_audit_data*,char**,int,int *) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (struct sk_buff*,int ,int *) ;
 int FUNC_7 (int ,struct sk_buff*,struct common_audit_data*) ;

__attribute__((used)) static int FUNC_8(struct sock *VAR_6, struct sk_buff *VAR_7,
           u16 VAR_8)
{
 int VAR_9 = 0;
 struct sk_security_struct *VAR_10 = VAR_6->sk_security;
 u32 VAR_11;
 u32 VAR_12 = VAR_10->sid;
 struct common_audit_data VAR_13;
 char *VAR_14;

 FUNC_0(&VAR_13, VAR_0);
 VAR_13.u.net.netif = VAR_7->iif;
 VAR_13.u.net.family = VAR_8;
 VAR_9 = FUNC_4(VAR_7, &VAR_13, &VAR_14, 1, ((void*)0));
 if (VAR_9)
  return VAR_9;

 if (FUNC_5()) {
  VAR_9 = FUNC_1(VAR_12, VAR_7->secmark, VAR_3,
       VAR_1, &VAR_13);
  if (VAR_9)
   return VAR_9;
 }

 if (VAR_5) {
  VAR_9 = FUNC_6(VAR_7, VAR_8, &VAR_11);
  if (VAR_9)
   return VAR_9;
  VAR_9 = FUNC_1(VAR_12, VAR_11,
       VAR_4, VAR_2, &VAR_13);
  if (VAR_9)
   FUNC_2(VAR_7, VAR_9, 0);
 } else {
  VAR_9 = FUNC_3(VAR_10, VAR_7, VAR_8, &VAR_13);
  if (VAR_9)
   return VAR_9;
  VAR_9 = FUNC_7(VAR_10->sid, VAR_7, &VAR_13);
 }

 return VAR_9;
}
