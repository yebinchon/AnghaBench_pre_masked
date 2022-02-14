
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtnl_link_ops {int list; scalar_t__ dellink; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ VAR_1 ;

int FUNC_1(struct rtnl_link_ops *VAR_2)
{
 if (!VAR_2->dellink)
  VAR_2->dellink = VAR_1;

 FUNC_0(&VAR_2->list, &VAR_0);
 return 0;
}
