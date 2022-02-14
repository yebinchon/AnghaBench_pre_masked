
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tnode {int dummy; } ;
struct node {unsigned long parent; } ;


 unsigned long FUNC_0 (struct node*) ;
 int FUNC_1 () ;

__attribute__((used)) static inline void FUNC_2(struct node *VAR_0, struct tnode *VAR_1)
{
 FUNC_1();
 VAR_0->parent = (unsigned long)VAR_1 | FUNC_0(VAR_0);
}
