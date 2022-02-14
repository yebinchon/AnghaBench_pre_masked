
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net {int dummy; } ;
struct fib6_node {int dummy; } ;
struct TYPE_2__ {int prune; int func; struct fib6_node* root; } ;
struct fib6_cleaner_t {int (* func ) (struct rt6_info*,void*) ;TYPE_1__ w; struct net* net; void* arg; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(struct net *VAR_1, struct fib6_node *VAR_2,
       int (*VAR_3)(struct rt6_info *, void *VAR_4),
       int VAR_5, void *VAR_6)
{
 struct fib6_cleaner_t VAR_7;

 VAR_7.w.root = VAR_2;
 VAR_7.w.func = VAR_0;
 VAR_7.w.prune = VAR_5;
 VAR_7.func = VAR_3;
 VAR_7.arg = VAR_6;
 VAR_7.net = VAR_1;

 FUNC_0(&VAR_7.w);
}
