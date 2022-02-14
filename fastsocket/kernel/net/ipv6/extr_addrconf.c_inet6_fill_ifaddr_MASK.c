
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct inet6_ifaddr {int flags; scalar_t__ prefered_lft; scalar_t__ valid_lft; long tstamp; int cstamp; int addr; TYPE_2__* idev; int scope; int prefix_len; } ;
struct ifaddrmsg {int dummy; } ;
struct TYPE_4__ {TYPE_1__* dev; } ;
struct TYPE_3__ {int ifindex; } ;


 int VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 long VAR_5 ;
 scalar_t__ FUNC_0 (struct sk_buff*,int ,int,int *) ;
 int FUNC_1 (struct sk_buff*,struct nlmsghdr*) ;
 int FUNC_2 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_3 (struct sk_buff*,scalar_t__,scalar_t__,int,int,unsigned int) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,long,scalar_t__,scalar_t__) ;
 int FUNC_5 (struct nlmsghdr*,int ,int,int ,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_6, struct inet6_ifaddr *VAR_7,
        u32 VAR_8, u32 VAR_9, int VAR_10, unsigned int VAR_11)
{
 struct nlmsghdr *VAR_12;
 u32 VAR_13, VAR_14;

 VAR_12 = FUNC_3(VAR_6, VAR_8, VAR_9, VAR_10, sizeof(struct ifaddrmsg), VAR_11);
 if (VAR_12 == ((void*)0))
  return -VAR_0;

 FUNC_5(VAR_12, VAR_7->prefix_len, VAR_7->flags, FUNC_6(VAR_7->scope),
        VAR_7->idev->dev->ifindex);

 if (!(VAR_7->flags&VAR_3)) {
  VAR_13 = VAR_7->prefered_lft;
  VAR_14 = VAR_7->valid_lft;
  if (VAR_13 != VAR_4) {
   long VAR_15 = (VAR_5 - VAR_7->tstamp)/VAR_1;
   if (VAR_13 > VAR_15)
    VAR_13 -= VAR_15;
   else
    VAR_13 = 0;
   if (VAR_14 != VAR_4)
    VAR_14 -= VAR_15;
  }
 } else {
  VAR_13 = VAR_4;
  VAR_14 = VAR_4;
 }

 if (FUNC_0(VAR_6, VAR_2, 16, &VAR_7->addr) < 0 ||
     FUNC_4(VAR_6, VAR_7->cstamp, VAR_7->tstamp, VAR_13, VAR_14) < 0) {
  FUNC_1(VAR_6, VAR_12);
  return -VAR_0;
 }

 return FUNC_2(VAR_6, VAR_12);
}
