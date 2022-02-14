
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct genl_family {int list; int family; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct genl_family *VAR_0)
{
 int VAR_1;
 VAR_1 = FUNC_0(&VAR_0->family);
 FUNC_1(&VAR_0->list);
 return VAR_1;
}
