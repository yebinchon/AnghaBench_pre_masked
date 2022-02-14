
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tnode {int dummy; } ;
struct node {int parent; } ;


 int VAR_0 ;

__attribute__((used)) static inline struct tnode *FUNC_0(struct node *VAR_1)
{
 return (struct tnode *)(VAR_1->parent & ~VAR_0);
}
