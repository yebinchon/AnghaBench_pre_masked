
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int flags; } ;
struct inet6_dev {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 struct inet6_dev* FUNC_1 (struct net_device*) ;
 struct inet6_dev* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct inet6_dev*) ;

__attribute__((used)) static struct inet6_dev * FUNC_4(struct net_device *VAR_1)
{
 struct inet6_dev *VAR_2;

 FUNC_0();

 if ((VAR_2 = FUNC_1(VAR_1)) == ((void*)0)) {
  if ((VAR_2 = FUNC_2(VAR_1)) == ((void*)0))
   return ((void*)0);
 }

 if (VAR_1->flags&VAR_0)
  FUNC_3(VAR_2);
 return VAR_2;
}
