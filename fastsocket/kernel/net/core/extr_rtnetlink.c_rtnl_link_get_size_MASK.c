
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtnl_link_ops {scalar_t__ (* get_xstats_size ) (struct net_device const*) ;scalar_t__ (* get_size ) (struct net_device const*) ;int kind; } ;
struct nlattr {int dummy; } ;
struct net_device {struct rtnl_link_ops* rtnl_link_ops; } ;


 size_t FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct net_device const*) ;
 scalar_t__ FUNC_3 (struct net_device const*) ;

__attribute__((used)) static size_t FUNC_4(const struct net_device *VAR_0)
{
 const struct rtnl_link_ops *VAR_1 = VAR_0->rtnl_link_ops;
 size_t VAR_2;

 if (!VAR_1)
  return 0;

 VAR_2 = FUNC_0(sizeof(struct nlattr)) +
        FUNC_0(FUNC_1(VAR_1->kind) + 1);

 if (VAR_1->get_size)

  VAR_2 += FUNC_0(sizeof(struct nlattr)) +
   VAR_1->get_size(VAR_0);

 if (VAR_1->get_xstats_size)
  VAR_2 += VAR_1->get_xstats_size(VAR_0);

 return VAR_2;
}
