
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rbtree_type {int dummy; } ;
struct respip_set {struct rbtree_type ip_tree; } ;



struct rbtree_type*
FUNC_0(struct respip_set* VAR_0)
{
 if(!VAR_0)
  return ((void*)0);
 return &VAR_0->ip_tree;
}
