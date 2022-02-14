
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct trie {int trie; } ;
struct tnode {int pos; int bits; int key; } ;
struct node {int key; } ;
struct leaf {int dummy; } ;


 scalar_t__ FUNC_0 (struct node*) ;
 scalar_t__ FUNC_1 (struct node*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct tnode*) ;
 struct node* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int,int) ;
 scalar_t__ FUNC_6 (int ,int,int,int ) ;
 struct node* FUNC_7 (struct tnode*,int ) ;

__attribute__((used)) static struct leaf *
FUNC_8(struct trie *VAR_1, u32 VAR_2)
{
 int VAR_3;
 struct tnode *VAR_4;
 struct node *VAR_5;

 VAR_3 = 0;
 VAR_5 = FUNC_3(VAR_1->trie);

 while (VAR_5 != ((void*)0) && FUNC_1(VAR_5) == VAR_0) {
  VAR_4 = (struct tnode *) VAR_5;

  FUNC_2(VAR_4);

  if (FUNC_6(VAR_4->key, VAR_3, VAR_4->pos-VAR_3, VAR_2)) {
   VAR_3 = VAR_4->pos + VAR_4->bits;
   VAR_5 = FUNC_7(VAR_4,
      FUNC_5(VAR_2,
          VAR_4->pos,
          VAR_4->bits));
  } else
   break;
 }


 if (VAR_5 != ((void*)0) && FUNC_0(VAR_5) && FUNC_4(VAR_2, VAR_5->key))
  return (struct leaf *)VAR_5;

 return ((void*)0);
}
