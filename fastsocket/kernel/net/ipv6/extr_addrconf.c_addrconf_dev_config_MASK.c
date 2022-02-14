
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ type; } ;
struct inet6_dev {int dummy; } ;
struct in6_addr {scalar_t__ s6_addr; int * s6_addr32; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 () ;
 struct inet6_dev* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct inet6_dev*,struct in6_addr*) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (scalar_t__,struct net_device*) ;
 int FUNC_5 (struct in6_addr*,int ,int) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_5)
{
 struct in6_addr VAR_6;
 struct inet6_dev * VAR_7;

 FUNC_0();

 if ((VAR_5->type != VAR_1) &&
     (VAR_5->type != VAR_2) &&
     (VAR_5->type != VAR_3) &&
     (VAR_5->type != VAR_0) &&
     (VAR_5->type != VAR_4)) {

  return;
 }

 VAR_7 = FUNC_1(VAR_5);
 if (VAR_7 == ((void*)0))
  return;

 FUNC_5(&VAR_6, 0, sizeof(struct in6_addr));
 VAR_6.s6_addr32[0] = FUNC_3(0xFE800000);

 if (FUNC_4(VAR_6.s6_addr + 8, VAR_5) == 0)
  FUNC_2(VAR_7, &VAR_6);
}
