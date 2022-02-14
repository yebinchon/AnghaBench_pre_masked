
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct inet6_ifaddr {int prefix_len; int addr; } ;
struct inet6_dev {int dummy; } ;
struct in6_addr {int dummy; } ;
typedef scalar_t__ clock_t ;
typedef int __u8 ;
typedef unsigned long __u32 ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct inet6_ifaddr*) ;
 int FUNC_2 (struct inet6_ifaddr*) ;
 scalar_t__ VAR_6 ;
 struct net_device* FUNC_3 (struct net*,int) ;
 struct inet6_dev* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct inet6_ifaddr*,int ) ;
 scalar_t__ FUNC_6 (unsigned long) ;
 int FUNC_7 (int *,int ,struct net_device*,scalar_t__,scalar_t__) ;
 unsigned long FUNC_8 (unsigned long,unsigned long) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct inet6_ifaddr*) ;
 struct inet6_ifaddr* FUNC_11 (struct inet6_dev*,struct in6_addr*,unsigned int,int,int ,unsigned long,unsigned long) ;
 int FUNC_12 (struct in6_addr*) ;
 scalar_t__ FUNC_13 (unsigned long) ;

__attribute__((used)) static int FUNC_14(struct net *VAR_7, int VAR_8, struct in6_addr *VAR_9,
     unsigned int VAR_10, __u8 VAR_11, __u32 VAR_12,
     __u32 VAR_13)
{
 struct inet6_ifaddr *VAR_14;
 struct inet6_dev *VAR_15;
 struct net_device *VAR_16;
 int VAR_17;
 u32 VAR_18;
 clock_t VAR_19;
 unsigned long VAR_20;

 FUNC_0();

 if (VAR_10 > 128)
  return -VAR_0;


 if (!VAR_13 || VAR_12 > VAR_13)
  return -VAR_0;

 VAR_16 = FUNC_3(VAR_7, VAR_8);
 if (!VAR_16)
  return -VAR_2;

 if ((VAR_15 = FUNC_4(VAR_16)) == ((void*)0))
  return -VAR_1;

 VAR_17 = FUNC_12(VAR_9);

 VAR_20 = FUNC_8(VAR_13, VAR_3);
 if (FUNC_6(VAR_20)) {
  VAR_19 = FUNC_13(VAR_20 * VAR_3);
  VAR_13 = VAR_20;
  VAR_18 = VAR_6;
 } else {
  VAR_19 = 0;
  VAR_18 = 0;
  VAR_11 |= VAR_5;
 }

 VAR_20 = FUNC_8(VAR_12, VAR_3);
 if (FUNC_6(VAR_20)) {
  if (VAR_20 == 0)
   VAR_11 |= VAR_4;
  VAR_12 = VAR_20;
 }

 VAR_14 = FUNC_11(VAR_15, VAR_9, VAR_10, VAR_17, VAR_11, VAR_13,
       VAR_12);

 if (!FUNC_1(VAR_14)) {
  FUNC_7(&VAR_14->addr, VAR_14->prefix_len, VAR_16,
          VAR_19, VAR_18);





  FUNC_5(VAR_14, 0);
  FUNC_10(VAR_14);
  FUNC_9(0);
  return 0;
 }

 return FUNC_2(VAR_14);
}
