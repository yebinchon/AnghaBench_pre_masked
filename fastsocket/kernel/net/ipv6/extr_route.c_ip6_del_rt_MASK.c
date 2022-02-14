
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt6_info {int rt6i_dev; } ;
struct nl_info {int nl_net; } ;


 int FUNC_0 (struct rt6_info*,struct nl_info*) ;
 int FUNC_1 (int ) ;

int FUNC_2(struct rt6_info *VAR_0)
{
 struct nl_info VAR_1 = {
  .nl_net = FUNC_1(VAR_0->rt6i_dev),
 };
 return FUNC_0(VAR_0, &VAR_1);
}
