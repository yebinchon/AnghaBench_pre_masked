
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int t_key ;
struct TYPE_2__ {int backtrack; int null_node_hit; int gets; } ;
struct trie {TYPE_1__ stats; int trie; } ;
struct tnode {int pos; int bits; int key; int * child; } ;
struct node {int dummy; } ;
struct leaf {int dummy; } ;
struct flowi {int fl4_dst; } ;
struct fib_table {scalar_t__ tb_data; } ;
struct fib_result {int dummy; } ;


 scalar_t__ FUNC_0 (struct node*) ;
 int VAR_0 ;
 int FUNC_1 (struct trie*,struct leaf*,int,struct flowi const*,struct fib_result*) ;
 int FUNC_2 (int,int) ;
 struct tnode* FUNC_3 (struct node*) ;
 int FUNC_4 (int ) ;
 struct node* FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int,int,int) ;
 struct node* FUNC_9 (struct tnode*,int) ;

__attribute__((used)) static int FUNC_10(struct fib_table *VAR_1, const struct flowi *VAR_2,
     struct fib_result *VAR_3)
{
 struct trie *VAR_4 = (struct trie *) VAR_1->tb_data;
 int VAR_5;
 struct node *VAR_6;
 struct tnode *VAR_7;
 int VAR_8, VAR_9;
 t_key VAR_10 = FUNC_4(VAR_2->fl4_dst);
 int VAR_11;
 t_key VAR_12 = 0;
 int VAR_13 = VAR_0;
 struct tnode *VAR_14;
 t_key VAR_15, VAR_16, VAR_17;
 int VAR_18;

 FUNC_6();

 VAR_6 = FUNC_5(VAR_4->trie);
 if (!VAR_6)
  goto failed;






 if (FUNC_0(VAR_6)) {
  VAR_5 = FUNC_1(VAR_4, (struct leaf *)VAR_6, VAR_10, VAR_2, VAR_3);
  goto found;
 }

 VAR_7 = (struct tnode *) VAR_6;
 VAR_11 = 0;

 while (VAR_7) {
  VAR_8 = VAR_7->pos;
  VAR_9 = VAR_7->bits;

  if (!VAR_11)
   VAR_12 = FUNC_8(FUNC_2(VAR_10, VAR_13),
         VAR_8, VAR_9);

  VAR_6 = FUNC_9(VAR_7, VAR_12);

  if (VAR_6 == ((void*)0)) {



   goto backtrace;
  }

  if (FUNC_0(VAR_6)) {
   VAR_5 = FUNC_1(VAR_4, (struct leaf *)VAR_6, VAR_10, VAR_2, VAR_3);
   if (VAR_5 > 0)
    goto backtrace;
   goto found;
  }

  VAR_14 = (struct tnode *)VAR_6;
  if (VAR_13 < VAR_8+VAR_9) {
   if (FUNC_8(VAR_14->key, VAR_13,
      VAR_14->pos - VAR_13)
       || !(VAR_14->child[0]))
    goto backtrace;
  }
  VAR_15 = FUNC_2(VAR_14->key, VAR_14->pos);
  VAR_16 = FUNC_2(VAR_10, VAR_14->pos);
  VAR_17 = VAR_16^VAR_15;
  VAR_18 = 0;






  if (VAR_17) {
   while (!(VAR_17 & (1<<(VAR_0-1)))) {
    VAR_18++;
    VAR_17 = VAR_17 << 1;
   }
   VAR_16 = FUNC_8(VAR_14->key, VAR_18, VAR_14->pos-VAR_18);

   if (VAR_16 != 0)
    goto backtrace;

   if (VAR_13 >= VAR_14->pos)
    VAR_13 = VAR_18;
  }

  VAR_7 = (struct tnode *)VAR_6;
  VAR_11 = 0;
  continue;

backtrace:
  VAR_11++;


  while ((VAR_11 <= VAR_7->bits)
         && !(VAR_12 & (1<<(VAR_11-1))))
   VAR_11++;


  if (VAR_13 > VAR_7->pos + VAR_7->bits - VAR_11)
   VAR_13 = VAR_7->pos + VAR_7->bits
    - VAR_11;






  if (VAR_11 <= VAR_7->bits) {
   VAR_12 &= ~(1 << (VAR_11-1));
  } else {
   struct tnode *VAR_19 = FUNC_3((struct node *) VAR_7);
   if (!VAR_19)
    goto failed;


   VAR_12 = FUNC_8(VAR_7->key, VAR_19->pos, VAR_19->bits);
   VAR_7 = VAR_19;
   VAR_11 = 0;




   goto backtrace;
  }
 }
failed:
 VAR_5 = 1;
found:
 FUNC_7();
 return VAR_5;
}
