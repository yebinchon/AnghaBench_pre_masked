
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tnode {int bits; struct tnode* tnode_free; } ;
struct node {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct tnode*) ;
 struct tnode* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(struct tnode *VAR_2)
{
 FUNC_0(FUNC_1(VAR_2));
 VAR_2->tnode_free = VAR_0;
 VAR_0 = VAR_2;
 VAR_1 += sizeof(struct tnode) +
      (sizeof(struct node *) << VAR_2->bits);
}
