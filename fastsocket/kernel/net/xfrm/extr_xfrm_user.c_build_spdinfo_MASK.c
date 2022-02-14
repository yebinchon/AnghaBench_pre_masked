
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xfrmu_spdinfo {int spdhmcnt; int spdhcnt; int fwdscnt; int outscnt; int inscnt; int fwdcnt; int outcnt; int incnt; } ;
struct xfrmu_spdhinfo {int spdhmcnt; int spdhcnt; int fwdscnt; int outscnt; int inscnt; int fwdcnt; int outcnt; int incnt; } ;
struct xfrmk_spdinfo {int spdhmcnt; int spdhcnt; int fwdscnt; int outscnt; int inscnt; int fwdcnt; int outcnt; int incnt; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
typedef int sph ;
typedef int spc ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,int ,int,struct xfrmu_spdinfo*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct sk_buff*,struct nlmsghdr*) ;
 int * FUNC_2 (struct nlmsghdr*) ;
 int FUNC_3 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_4 (struct sk_buff*,int ,int ,int ,int,int ) ;
 int FUNC_5 (struct xfrmk_spdinfo*) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_4, u32 VAR_5, u32 VAR_6, u32 VAR_7)
{
 struct xfrmk_spdinfo VAR_8;
 struct xfrmu_spdinfo VAR_9;
 struct xfrmu_spdhinfo VAR_10;
 struct nlmsghdr *VAR_11;
 u32 *VAR_12;

 VAR_11 = FUNC_4(VAR_4, VAR_5, VAR_6, VAR_3, sizeof(u32), 0);
 if (VAR_11 == ((void*)0))
  return -VAR_0;

 VAR_12 = FUNC_2(VAR_11);
 *VAR_12 = VAR_7;
 FUNC_5(&VAR_8);
 VAR_9.incnt = VAR_8.incnt;
 VAR_9.outcnt = VAR_8.outcnt;
 VAR_9.fwdcnt = VAR_8.fwdcnt;
 VAR_9.inscnt = VAR_8.inscnt;
 VAR_9.outscnt = VAR_8.outscnt;
 VAR_9.fwdscnt = VAR_8.fwdscnt;
 VAR_10.spdhcnt = VAR_8.spdhcnt;
 VAR_10.spdhmcnt = VAR_8.spdhmcnt;

 FUNC_0(VAR_4, VAR_2, sizeof(VAR_9), &VAR_9);
 FUNC_0(VAR_4, VAR_1, sizeof(VAR_10), &VAR_10);

 return FUNC_3(VAR_4, VAR_11);

nla_put_failure:
 FUNC_1(VAR_4, VAR_11);
 return -VAR_0;
}
