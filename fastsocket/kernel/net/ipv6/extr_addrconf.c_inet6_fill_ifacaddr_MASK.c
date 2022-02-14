
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct ifaddrmsg {int dummy; } ;
struct ifacaddr6 {int aca_tstamp; int aca_cstamp; int aca_addr; TYPE_2__* aca_idev; } ;
struct TYPE_4__ {TYPE_1__* dev; } ;
struct TYPE_3__ {int ifindex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int,int *) ;
 int FUNC_2 (struct sk_buff*,struct nlmsghdr*) ;
 int FUNC_3 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_4 (struct sk_buff*,int ,int ,int,int,unsigned int) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ,int ,int ) ;
 int FUNC_6 (struct nlmsghdr*,int,int ,int ,int) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_7, struct ifacaddr6 *VAR_8,
    u32 VAR_9, u32 VAR_10, int VAR_11, unsigned int VAR_12)
{
 struct nlmsghdr *VAR_13;
 u8 VAR_14 = VAR_6;
 int VAR_15 = VAR_8->aca_idev->dev->ifindex;

 if (FUNC_0(&VAR_8->aca_addr) & VAR_3)
  VAR_14 = VAR_5;

 VAR_13 = FUNC_4(VAR_7, VAR_9, VAR_10, VAR_11, sizeof(struct ifaddrmsg), VAR_12);
 if (VAR_13 == ((void*)0))
  return -VAR_0;

 FUNC_6(VAR_13, 128, VAR_2, VAR_14, VAR_15);
 if (FUNC_1(VAR_7, VAR_1, 16, &VAR_8->aca_addr) < 0 ||
     FUNC_5(VAR_7, VAR_8->aca_cstamp, VAR_8->aca_tstamp,
     VAR_4, VAR_4) < 0) {
  FUNC_2(VAR_7, VAR_13);
  return -VAR_0;
 }

 return FUNC_3(VAR_7, VAR_13);
}
