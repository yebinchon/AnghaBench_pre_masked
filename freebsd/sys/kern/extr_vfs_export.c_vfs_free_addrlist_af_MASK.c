
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radix_node_head {int rh; int (* rnh_walktree ) (int *,int ,struct radix_node_head*) ;} ;


 int FUNC_0 (struct radix_node_head*) ;
 int FUNC_1 (struct radix_node_head*) ;
 int FUNC_2 (struct radix_node_head*) ;
 int FUNC_3 (void**) ;
 int FUNC_4 (int *,int ,struct radix_node_head*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_5(struct radix_node_head **VAR_1)
{
 struct radix_node_head *VAR_2;

 VAR_2 = *VAR_1;
 FUNC_1(VAR_2);
 (*VAR_2->rnh_walktree)(&VAR_2->rh, VAR_0, VAR_2);
 FUNC_2(VAR_2);
 FUNC_0(VAR_2);
 FUNC_3((void **)VAR_1);
 VAR_1 = ((void*)0);
}
