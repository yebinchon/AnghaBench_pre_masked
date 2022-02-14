
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trie {int dummy; } ;
struct tnode {int pos; int bits; scalar_t__* child; int key; } ;
struct node {int key; } ;


 int VAR_0 ;
 struct tnode* FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct trie*,struct tnode*,int,struct node*) ;
 struct node* FUNC_3 (struct trie*,struct tnode*) ;
 int FUNC_4 (struct tnode*) ;
 int FUNC_5 (struct tnode*) ;
 int FUNC_6 (struct tnode*) ;
 struct node* FUNC_7 (struct tnode*,int) ;
 struct tnode* FUNC_8 (int ,int,int) ;

__attribute__((used)) static struct tnode *FUNC_9(struct trie *VAR_1, struct tnode *VAR_2)
{
 struct tnode *VAR_3 = VAR_2;
 struct node *VAR_4, *VAR_5;
 int VAR_6;
 int VAR_7 = FUNC_4(VAR_2);

 FUNC_1("In halve\n");

 VAR_2 = FUNC_8(VAR_3->key, VAR_3->pos, VAR_3->bits - 1);

 if (!VAR_2)
  return FUNC_0(-VAR_0);
 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6 += 2) {
  VAR_4 = FUNC_7(VAR_3, VAR_6);
  VAR_5 = FUNC_7(VAR_3, VAR_6+1);


  if (VAR_4 && VAR_5) {
   struct tnode *VAR_8;

   VAR_8 = FUNC_8(VAR_4->key, VAR_2->pos + VAR_2->bits, 1);

   if (!VAR_8)
    goto nomem;

   FUNC_2(VAR_1, VAR_2, VAR_6/2, (struct node *)VAR_8);
  }

 }

 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6 += 2) {
  struct tnode *VAR_9;

  VAR_4 = FUNC_7(VAR_3, VAR_6);
  VAR_5 = FUNC_7(VAR_3, VAR_6+1);


  if (VAR_4 == ((void*)0)) {
   if (VAR_5 == ((void*)0))
    continue;
   FUNC_2(VAR_1, VAR_2, VAR_6/2, VAR_5);
   continue;
  }

  if (VAR_5 == ((void*)0)) {
   FUNC_2(VAR_1, VAR_2, VAR_6/2, VAR_4);
   continue;
  }


  VAR_9 = (struct tnode *) FUNC_7(VAR_2, VAR_6/2);
  FUNC_2(VAR_1, VAR_2, VAR_6/2, ((void*)0));
  FUNC_2(VAR_1, VAR_9, 0, VAR_4);
  FUNC_2(VAR_1, VAR_9, 1, VAR_5);
  FUNC_2(VAR_1, VAR_2, VAR_6/2, FUNC_3(VAR_1, VAR_9));
 }
 FUNC_6(VAR_3);
 return VAR_2;
nomem:
 {
  int VAR_10 = FUNC_4(VAR_2);
  int VAR_11;

  for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++)
   if (VAR_2->child[VAR_11])
    FUNC_5((struct tnode *)VAR_2->child[VAR_11]);

  FUNC_5(VAR_2);

  return FUNC_0(-VAR_0);
 }
}
