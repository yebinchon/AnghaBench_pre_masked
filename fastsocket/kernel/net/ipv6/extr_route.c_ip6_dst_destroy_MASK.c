
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt6_info {struct inet6_dev* rt6i_idev; } ;
struct inet6_dev {int dummy; } ;
struct dst_entry {int dummy; } ;


 int FUNC_0 (struct inet6_dev*) ;

__attribute__((used)) static void FUNC_1(struct dst_entry *VAR_0)
{
 struct rt6_info *VAR_1 = (struct rt6_info *)VAR_0;
 struct inet6_dev *VAR_2 = VAR_1->rt6i_idev;

 if (VAR_2 != ((void*)0)) {
  VAR_1->rt6i_idev = ((void*)0);
  FUNC_0(VAR_2);
 }
}
