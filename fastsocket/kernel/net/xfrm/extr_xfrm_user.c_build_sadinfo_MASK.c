
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xfrmu_sadhinfo {int sadhcnt; int sadhmcnt; } ;
struct xfrmk_sadinfo {int sadcnt; int sadhcnt; int sadhmcnt; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
typedef int sh ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,int ,int,struct xfrmu_sadhinfo*) ;
 int FUNC_1 (struct sk_buff*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct sk_buff*,struct nlmsghdr*) ;
 int * FUNC_3 (struct nlmsghdr*) ;
 int FUNC_4 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_5 (struct sk_buff*,int ,int ,int ,int,int ) ;
 int FUNC_6 (struct xfrmk_sadinfo*) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_4, u32 VAR_5, u32 VAR_6, u32 VAR_7)
{
 struct xfrmk_sadinfo VAR_8;
 struct xfrmu_sadhinfo VAR_9;
 struct nlmsghdr *VAR_10;
 u32 *VAR_11;

 VAR_10 = FUNC_5(VAR_4, VAR_5, VAR_6, VAR_3, sizeof(u32), 0);
 if (VAR_10 == ((void*)0))
  return -VAR_0;

 VAR_11 = FUNC_3(VAR_10);
 *VAR_11 = VAR_7;
 FUNC_6(&VAR_8);

 VAR_9.sadhmcnt = VAR_8.sadhmcnt;
 VAR_9.sadhcnt = VAR_8.sadhcnt;

 FUNC_1(VAR_4, VAR_1, VAR_8.sadcnt);
 FUNC_0(VAR_4, VAR_2, sizeof(VAR_9), &VAR_9);

 return FUNC_4(VAR_4, VAR_10);

nla_put_failure:
 FUNC_2(VAR_4, VAR_10);
 return -VAR_0;
}
