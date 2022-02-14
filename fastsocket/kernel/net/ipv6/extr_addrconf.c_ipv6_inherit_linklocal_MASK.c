
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct inet6_dev {int dummy; } ;
struct in6_addr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct inet6_dev*,struct in6_addr*) ;
 int FUNC_1 (struct net_device*,struct in6_addr*,int ) ;

__attribute__((used)) static inline int
FUNC_2(struct inet6_dev *VAR_1, struct net_device *VAR_2)
{
 struct in6_addr VAR_3;

 if (!FUNC_1(VAR_2, &VAR_3, VAR_0)) {
  FUNC_0(VAR_1, &VAR_3);
  return 0;
 }
 return -1;
}
