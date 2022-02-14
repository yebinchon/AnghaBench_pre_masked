
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int t_key ;
struct trie {int trie; } ;
struct tnode {int bits; int pos; int key; } ;
struct node {int dummy; } ;


 scalar_t__ FUNC_0 (struct tnode*) ;
 struct tnode* FUNC_1 (struct node*) ;
 int FUNC_2 (int ,struct node*) ;
 scalar_t__ FUNC_3 (struct trie*,struct tnode*) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (struct tnode*,int ) ;
 int FUNC_7 (struct tnode*,int ) ;
 int FUNC_8 (struct tnode*,int ,struct node*,int) ;

__attribute__((used)) static void FUNC_9(struct trie *VAR_0, struct tnode *VAR_1)
{
 int VAR_2;
 t_key VAR_3, VAR_4;
 struct tnode *VAR_5;

 VAR_4 = VAR_1->key;

 while (VAR_1 != ((void*)0) && (VAR_5 = FUNC_1((struct node *)VAR_1)) != ((void*)0)) {
  VAR_3 = FUNC_4(VAR_4, VAR_5->pos, VAR_5->bits);
  VAR_2 = FUNC_6(VAR_5, FUNC_7(VAR_5, VAR_3));
  VAR_1 = (struct tnode *) FUNC_3(VAR_0, (struct tnode *)VAR_1);

  FUNC_8((struct tnode *)VAR_5, VAR_3,
          (struct node *)VAR_1, VAR_2);

  VAR_5 = FUNC_1((struct node *) VAR_1);
  if (!VAR_5)
   FUNC_2(VAR_0->trie, (struct node *)VAR_1);

  FUNC_5();
  if (!VAR_5)
   break;
  VAR_1 = VAR_5;
 }


 if (FUNC_0(VAR_1))
  VAR_1 = (struct tnode *)FUNC_3(VAR_0, (struct tnode *)VAR_1);

 FUNC_2(VAR_0->trie, (struct node *)VAR_1);
 FUNC_5();

 return;
}
