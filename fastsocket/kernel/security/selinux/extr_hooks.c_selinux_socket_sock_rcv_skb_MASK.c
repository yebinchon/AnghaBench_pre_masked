
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct sock {scalar_t__ sk_family; struct sk_security_struct* sk_security; } ;
struct sk_security_struct {int sid; } ;
struct sk_buff {scalar_t__ protocol; int secmark; int iif; } ;
struct TYPE_3__ {scalar_t__ family; int netif; } ;
struct TYPE_4__ {TYPE_1__ net; } ;
struct common_audit_data {TYPE_2__ u; } ;


 int FUNC_0 (struct common_audit_data*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int ,int ,int ,struct common_audit_data*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ,char*,scalar_t__,int ,struct common_audit_data*) ;
 int FUNC_5 (struct sk_buff*,int,int ) ;
 int FUNC_6 (struct sk_buff*,struct common_audit_data*,char**,int,int *) ;
 int VAR_8 ;
 int FUNC_7 () ;
 int FUNC_8 (struct sk_buff*,scalar_t__,int *) ;
 int FUNC_9 (struct sock*,struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_10 () ;

__attribute__((used)) static int FUNC_11(struct sock *VAR_9, struct sk_buff *VAR_10)
{
 int VAR_11;
 struct sk_security_struct *VAR_12 = VAR_9->sk_security;
 u16 VAR_13 = VAR_9->sk_family;
 u32 VAR_14 = VAR_12->sid;
 struct common_audit_data VAR_15;
 char *VAR_16;
 u8 VAR_17;
 u8 VAR_18;

 if (VAR_13 != VAR_4 && VAR_13 != VAR_5)
  return 0;


 if (VAR_13 == VAR_5 && VAR_10->protocol == FUNC_2(VAR_0))
  VAR_13 = VAR_4;





 if (!VAR_8)
  return FUNC_9(VAR_9, VAR_10, VAR_13);

 VAR_17 = FUNC_7();
 VAR_18 = FUNC_3() || FUNC_10();
 if (!VAR_17 && !VAR_18)
  return 0;

 FUNC_0(&VAR_15, VAR_1);
 VAR_15.u.net.netif = VAR_10->iif;
 VAR_15.u.net.family = VAR_13;
 VAR_11 = FUNC_6(VAR_10, &VAR_15, &VAR_16, 1, ((void*)0));
 if (VAR_11)
  return VAR_11;

 if (VAR_18) {
  u32 VAR_19;

  VAR_11 = FUNC_8(VAR_10, VAR_13, &VAR_19);
  if (VAR_11)
   return VAR_11;
  VAR_11 = FUNC_4(VAR_10->iif, VAR_16, VAR_13,
            VAR_19, &VAR_15);
  if (VAR_11) {
   FUNC_5(VAR_10, VAR_11, 0);
   return VAR_11;
  }
  VAR_11 = FUNC_1(VAR_14, VAR_19, VAR_7,
       VAR_3, &VAR_15);
  if (VAR_11) {
   FUNC_5(VAR_10, VAR_11, 0);
   return VAR_11;
  }
 }

 if (VAR_17) {
  VAR_11 = FUNC_1(VAR_14, VAR_10->secmark, VAR_6,
       VAR_2, &VAR_15);
  if (VAR_11)
   return VAR_11;
 }

 return VAR_11;
}
