
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfrm_address_t ;
typedef int u8 ;
struct xfrm_user_report {int sel; int proto; } ;
struct xfrm_selector {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,int ,int,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,struct xfrm_selector*,int) ;
 int FUNC_2 (struct sk_buff*,struct nlmsghdr*) ;
 struct xfrm_user_report* FUNC_3 (struct nlmsghdr*) ;
 int FUNC_4 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_5 (struct sk_buff*,int ,int ,int ,int,int ) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_3, u8 VAR_4,
   struct xfrm_selector *VAR_5, xfrm_address_t *VAR_6)
{
 struct xfrm_user_report *VAR_7;
 struct nlmsghdr *VAR_8;

 VAR_8 = FUNC_5(VAR_3, 0, 0, VAR_2, sizeof(*VAR_7), 0);
 if (VAR_8 == ((void*)0))
  return -VAR_0;

 VAR_7 = FUNC_3(VAR_8);
 VAR_7->proto = VAR_4;
 FUNC_1(&VAR_7->sel, VAR_5, sizeof(VAR_7->sel));

 if (VAR_6)
  FUNC_0(VAR_3, VAR_1, sizeof(*VAR_6), VAR_6);

 return FUNC_4(VAR_3, VAR_8);

nla_put_failure:
 FUNC_2(VAR_3, VAR_8);
 return -VAR_0;
}
