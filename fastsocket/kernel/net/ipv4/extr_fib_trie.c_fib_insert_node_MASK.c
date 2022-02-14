
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int t_key ;
struct trie {struct tnode* trie; } ;
struct tnode {int pos; int bits; int key; } ;
struct node {int pos; int bits; int key; } ;
struct list_head {int dummy; } ;
struct leaf_info {struct list_head falh; } ;
struct leaf {int list; int key; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct tnode*) ;
 scalar_t__ FUNC_2 (struct tnode*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (struct tnode*) ;
 int FUNC_4 (struct leaf*) ;
 int FUNC_5 (struct leaf_info*) ;
 int FUNC_6 (int *,struct leaf_info*) ;
 struct leaf_info* FUNC_7 (int) ;
 struct leaf* FUNC_8 () ;
 struct tnode* FUNC_9 (struct tnode*) ;
 int FUNC_10 (struct tnode*,struct tnode*) ;
 int FUNC_11 (char*,struct tnode*,int,int,int ,int) ;
 int FUNC_12 (struct trie*,struct tnode*,int,struct tnode*) ;
 int FUNC_13 (struct tnode*,struct tnode*) ;
 scalar_t__ FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,int,int) ;
 int FUNC_16 (int ,int,int ) ;
 scalar_t__ FUNC_17 (int ,int,int,int ) ;
 struct tnode* FUNC_18 (struct tnode*,int) ;
 struct tnode* FUNC_19 (int ,int,int) ;
 int FUNC_20 (struct trie*,struct tnode*) ;

__attribute__((used)) static struct list_head *FUNC_21(struct trie *VAR_1, u32 VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;
 struct tnode *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);
 struct node *VAR_8;
 struct leaf *VAR_9;
 int VAR_10;
 struct list_head *VAR_11 = ((void*)0);
 struct leaf_info *VAR_12;
 t_key VAR_13;

 VAR_4 = 0;
 VAR_8 = VAR_1->trie;
 while (VAR_8 != ((void*)0) && FUNC_2(VAR_8) == VAR_0) {
  VAR_7 = (struct tnode *) VAR_8;

  FUNC_3(VAR_7);

  if (FUNC_17(VAR_7->key, VAR_4, VAR_7->pos-VAR_4, VAR_2)) {
   VAR_6 = VAR_7;
   VAR_4 = VAR_7->pos + VAR_7->bits;
   VAR_8 = FUNC_18(VAR_7,
         FUNC_15(VAR_2,
             VAR_7->pos,
             VAR_7->bits));

   FUNC_0(VAR_8 && FUNC_9(VAR_8) != VAR_7);
  } else
   break;
 }







 FUNC_0(VAR_6 && FUNC_1(VAR_6));



 if (VAR_8 != ((void*)0) && FUNC_1(VAR_8) && FUNC_14(VAR_2, VAR_8->key)) {
  VAR_9 = (struct leaf *) VAR_8;
  VAR_12 = FUNC_7(VAR_3);

  if (!VAR_12)
   return ((void*)0);

  VAR_11 = &VAR_12->falh;
  FUNC_6(&VAR_9->list, VAR_12);
  goto done;
 }
 VAR_9 = FUNC_8();

 if (!VAR_9)
  return ((void*)0);

 VAR_9->key = VAR_2;
 VAR_12 = FUNC_7(VAR_3);

 if (!VAR_12) {
  FUNC_4(VAR_9);
  return ((void*)0);
 }

 VAR_11 = &VAR_12->falh;
 FUNC_6(&VAR_9->list, VAR_12);

 if (VAR_1->trie && VAR_8 == ((void*)0)) {


  FUNC_10((struct node *)VAR_9, VAR_6);

  VAR_13 = FUNC_15(VAR_2, VAR_6->pos, VAR_6->bits);
  FUNC_12(VAR_1, (struct tnode *)VAR_6, VAR_13, (struct node *)VAR_9);
 } else {






  if (VAR_6)
   VAR_4 = VAR_6->pos+VAR_6->bits;
  else
   VAR_4 = 0;

  if (VAR_8) {
   VAR_5 = FUNC_16(VAR_2, VAR_4, VAR_8->key);
   VAR_7 = FUNC_19(VAR_8->key, VAR_5, 1);
  } else {
   VAR_5 = 0;
   VAR_7 = FUNC_19(VAR_2, VAR_5, 1);
  }

  if (!VAR_7) {
   FUNC_5(VAR_12);
   FUNC_4(VAR_9);
   return ((void*)0);
  }

  FUNC_10((struct node *)VAR_7, VAR_6);

  VAR_10 = FUNC_15(VAR_2, VAR_5, 1);
  FUNC_12(VAR_1, VAR_7, VAR_10, (struct node *)VAR_9);
  FUNC_12(VAR_1, VAR_7, 1-VAR_10, VAR_8);

  if (VAR_6) {
   VAR_13 = FUNC_15(VAR_2, VAR_6->pos, VAR_6->bits);
   FUNC_12(VAR_1, (struct tnode *)VAR_6, VAR_13,
      (struct node *)VAR_7);
  } else {
   FUNC_13(VAR_1->trie, (struct node *)VAR_7);
   VAR_6 = VAR_7;
  }
 }

 if (VAR_6 && VAR_6->pos + VAR_6->bits > 32)
  FUNC_11("fib_trie"
      " tp=%p pos=%d, bits=%d, key=%0x plen=%d\n",
      VAR_6, VAR_6->pos, VAR_6->bits, VAR_2, VAR_3);



 FUNC_20(VAR_1, VAR_6);
done:
 return VAR_11;
}
