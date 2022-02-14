
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int t_key ;
struct trie {int dummy; } ;
struct tnode {int key; int pos; int bits; struct node** child; } ;
struct node {int key; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct tnode* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct node*) ;
 scalar_t__ FUNC_3 (struct tnode*) ;
 int VAR_1 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct trie*,struct tnode*,int,struct node*) ;
 struct node* FUNC_6 (struct trie*,struct tnode*) ;
 scalar_t__ FUNC_7 (int ,int,int) ;
 int FUNC_8 (struct tnode*) ;
 int FUNC_9 (struct tnode*) ;
 int FUNC_10 (struct tnode*) ;
 struct node* FUNC_11 (struct tnode*,int) ;
 struct tnode* FUNC_12 (int,int,int) ;

__attribute__((used)) static struct tnode *FUNC_13(struct trie *VAR_2, struct tnode *VAR_3)
{
 struct tnode *VAR_4 = VAR_3;
 int VAR_5 = FUNC_8(VAR_3);
 int VAR_6;

 FUNC_4("In inflate\n");

 VAR_3 = FUNC_12(VAR_4->key, VAR_4->pos, VAR_4->bits + 1);

 if (!VAR_3)
  return FUNC_1(-VAR_0);
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  struct tnode *VAR_7;

  VAR_7 = (struct tnode *) FUNC_11(VAR_4, VAR_6);
  if (VAR_7 &&
      FUNC_3(VAR_7) &&
      VAR_7->pos == VAR_4->pos + VAR_4->bits &&
      VAR_7->bits > 1) {
   struct tnode *VAR_8, *VAR_9;
   t_key VAR_10 = ~0U << (VAR_1 - 1) >> VAR_7->pos;

   VAR_8 = FUNC_12(VAR_7->key&(~VAR_10), VAR_7->pos + 1,
      VAR_7->bits - 1);
   if (!VAR_8)
    goto nomem;

   VAR_9 = FUNC_12(VAR_7->key|VAR_10, VAR_7->pos + 1,
       VAR_7->bits - 1);

   if (!VAR_9) {
    FUNC_9(VAR_8);
    goto nomem;
   }

   FUNC_5(VAR_2, VAR_3, 2*VAR_6, (struct node *) VAR_8);
   FUNC_5(VAR_2, VAR_3, 2*VAR_6+1, (struct node *) VAR_9);
  }
 }

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  struct tnode *VAR_11;
  struct node *VAR_12 = FUNC_11(VAR_4, VAR_6);
  struct tnode *VAR_13, *VAR_14;
  int VAR_15, VAR_16;


  if (VAR_12 == ((void*)0))
   continue;



  if (FUNC_2(VAR_12) || ((struct tnode *) VAR_12)->pos >
     VAR_3->pos + VAR_3->bits - 1) {
   if (FUNC_7(VAR_12->key,
           VAR_4->pos + VAR_4->bits,
           1) == 0)
    FUNC_5(VAR_2, VAR_3, 2*VAR_6, VAR_12);
   else
    FUNC_5(VAR_2, VAR_3, 2*VAR_6+1, VAR_12);
   continue;
  }


  VAR_11 = (struct tnode *) VAR_12;

  if (VAR_11->bits == 1) {
   FUNC_5(VAR_2, VAR_3, 2*VAR_6, VAR_11->child[0]);
   FUNC_5(VAR_2, VAR_3, 2*VAR_6+1, VAR_11->child[1]);

   FUNC_10(VAR_11);
   continue;
  }
  VAR_13 = (struct tnode *) FUNC_11(VAR_3, 2*VAR_6);
  FUNC_5(VAR_2, VAR_3, 2*VAR_6, ((void*)0));

  FUNC_0(!VAR_13);

  VAR_14 = (struct tnode *) FUNC_11(VAR_3, 2*VAR_6+1);
  FUNC_5(VAR_2, VAR_3, 2*VAR_6+1, ((void*)0));

  FUNC_0(!VAR_14);

  VAR_15 = FUNC_8(VAR_13);
  for (VAR_16 = 0; VAR_16 < VAR_15; VAR_16++) {
   FUNC_5(VAR_2, VAR_13, VAR_16, VAR_11->child[VAR_16]);
   FUNC_5(VAR_2, VAR_14, VAR_16, VAR_11->child[VAR_16 + VAR_15]);
  }
  FUNC_5(VAR_2, VAR_3, 2*VAR_6, FUNC_6(VAR_2, VAR_13));
  FUNC_5(VAR_2, VAR_3, 2*VAR_6+1, FUNC_6(VAR_2, VAR_14));

  FUNC_10(VAR_11);
 }
 FUNC_10(VAR_4);
 return VAR_3;
nomem:
 {
  int VAR_17 = FUNC_8(VAR_3);
  int VAR_18;

  for (VAR_18 = 0; VAR_18 < VAR_17; VAR_18++)
   if (VAR_3->child[VAR_18])
    FUNC_9((struct tnode *)VAR_3->child[VAR_18]);

  FUNC_9(VAR_3);

  return FUNC_1(-VAR_0);
 }
}
