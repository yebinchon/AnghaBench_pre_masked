
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gcov_node {scalar_t__ ghost; int dentry; int all; int list; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct gcov_node*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct gcov_node*) ;

__attribute__((used)) static void FUNC_5(struct gcov_node *VAR_0)
{
 FUNC_3(&VAR_0->list);
 FUNC_3(&VAR_0->all);
 FUNC_0(VAR_0->dentry);
 FUNC_4(VAR_0);
 if (VAR_0->ghost)
  FUNC_1(VAR_0->ghost);
 FUNC_2(VAR_0);
}
