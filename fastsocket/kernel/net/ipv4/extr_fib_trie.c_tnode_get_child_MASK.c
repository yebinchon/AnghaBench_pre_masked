
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tnode {int bits; struct node** child; } ;
struct node {int dummy; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline struct node *FUNC_1(struct tnode *VAR_0, unsigned int VAR_1)
{
 FUNC_0(VAR_1 >= 1U << VAR_0->bits);

 return VAR_0->child[VAR_1];
}
