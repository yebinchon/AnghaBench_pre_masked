
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rt6key {int addr; } ;
struct in6_addr {int dummy; } ;
struct fib6_node {int fn_bit; struct fib6_node* left; struct fib6_node* right; scalar_t__ leaf; } ;


 scalar_t__ FUNC_0 (struct in6_addr*,int) ;
 int FUNC_1 (int *,struct in6_addr*,int) ;

__attribute__((used)) static struct fib6_node * FUNC_2(struct fib6_node *VAR_0,
     struct in6_addr *VAR_1,
     int VAR_2, int VAR_3)
{
 struct fib6_node *VAR_4;

 for (VAR_4 = VAR_0; VAR_4 ; ) {
  struct rt6key *VAR_5 = (struct rt6key *)((u8 *)VAR_4->leaf + VAR_3);




  if (VAR_2 < VAR_4->fn_bit ||
      !FUNC_1(&VAR_5->addr, VAR_1, VAR_4->fn_bit))
   return ((void*)0);

  if (VAR_2 == VAR_4->fn_bit)
   return VAR_4;




  if (FUNC_0(VAR_1, VAR_4->fn_bit))
   VAR_4 = VAR_4->right;
  else
   VAR_4 = VAR_4->left;
 }
 return ((void*)0);
}
