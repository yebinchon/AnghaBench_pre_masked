
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rt6key {int plen; int addr; } ;
struct lookup_args {scalar_t__ offset; int addr; } ;
struct fib6_node {int fn_flags; struct fib6_node* parent; struct fib6_node* subtree; scalar_t__ leaf; struct fib6_node* left; struct fib6_node* right; int fn_bit; } ;
typedef scalar_t__ __be32 ;


 scalar_t__ FUNC_0 (struct fib6_node*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int *,int ,int ) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static struct fib6_node * FUNC_4(struct fib6_node *VAR_2,
     struct lookup_args *VAR_3)
{
 struct fib6_node *VAR_4;
 __be32 VAR_5;

 if (FUNC_3(VAR_3->offset == 0))
  return ((void*)0);





 VAR_4 = VAR_2;

 for (;;) {
  struct fib6_node *VAR_6;

  VAR_5 = FUNC_1(VAR_3->addr, VAR_4->fn_bit);

  VAR_6 = VAR_5 ? VAR_4->right : VAR_4->left;

  if (VAR_6) {
   VAR_4 = VAR_6;
   continue;
  }

  break;
 }

 while(VAR_4) {
  if (FUNC_0(VAR_4) || VAR_4->fn_flags & VAR_1) {
   struct rt6key *VAR_7;

   VAR_7 = (struct rt6key *) ((u8 *) VAR_4->leaf +
       VAR_3->offset);

   if (FUNC_2(&VAR_7->addr, VAR_3->addr, VAR_7->plen)) {




    if (!VAR_4 || VAR_4->fn_flags & VAR_1)
     return VAR_4;
   }
  }

  if (VAR_4->fn_flags & VAR_0)
   break;

  VAR_4 = VAR_4->parent;
 }

 return ((void*)0);
}
