
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_hw_addr_list {scalar_t__ count; int list; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct netdev_hw_addr_list *VAR_0)
{
 FUNC_0(&VAR_0->list);
 VAR_0->count = 0;
}
