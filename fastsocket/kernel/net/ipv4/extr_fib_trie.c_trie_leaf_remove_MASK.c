
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int t_key ;
struct trie {int trie; } ;
struct tnode {int bits; int pos; } ;
struct node {int dummy; } ;
struct leaf {int key; } ;


 int FUNC_0 (struct leaf*) ;
 struct tnode* FUNC_1 (struct node*) ;
 int FUNC_2 (char*,struct leaf*) ;
 int FUNC_3 (struct trie*,struct tnode*,int ,int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (struct trie*,struct tnode*) ;

__attribute__((used)) static void FUNC_7(struct trie *VAR_0, struct leaf *VAR_1)
{
 struct tnode *VAR_2 = FUNC_1((struct node *) VAR_1);

 FUNC_2("entering trie_leaf_remove(%p)\n", VAR_1);

 if (VAR_2) {
  t_key VAR_3 = FUNC_5(VAR_1->key, VAR_2->pos, VAR_2->bits);
  FUNC_3(VAR_0, (struct tnode *)VAR_2, VAR_3, ((void*)0));
  FUNC_6(VAR_0, VAR_2);
 } else
  FUNC_4(VAR_0->trie, ((void*)0));

 FUNC_0(VAR_1);
}
