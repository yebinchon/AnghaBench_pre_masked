
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radix_node {int dummy; } ;
struct radix_head {int dummy; } ;


 int FUNC_0 (struct radix_node*) ;
 scalar_t__ FUNC_1 (struct radix_node*,int *,struct radix_head* const) ;

__attribute__((used)) static int
FUNC_2(struct radix_node *VAR_0, void *VAR_1)
{
 struct radix_head * const VAR_2 = VAR_1;
 struct radix_node *VAR_3;

 VAR_3 = (struct radix_node *)FUNC_1(VAR_0 + 2, ((void*)0), VAR_2);
 if (VAR_3 != ((void*)0))
  FUNC_0(VAR_3);
 return (0);
}
