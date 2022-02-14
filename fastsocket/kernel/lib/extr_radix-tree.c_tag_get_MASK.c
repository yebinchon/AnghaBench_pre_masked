
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radix_tree_node {int * tags; } ;


 int FUNC_0 (int,int ) ;

__attribute__((used)) static inline int FUNC_1(struct radix_tree_node *VAR_0, unsigned int VAR_1,
  int VAR_2)
{
 return FUNC_0(VAR_2, VAR_0->tags[VAR_1]);
}
