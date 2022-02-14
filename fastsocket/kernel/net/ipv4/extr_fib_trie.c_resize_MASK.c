
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int resize_node_skipped; } ;
struct trie {TYPE_1__ stats; } ;
struct tnode {int empty_children; scalar_t__ full_children; int bits; struct node** child; } ;
struct node {int dummy; } ;


 scalar_t__ FUNC_0 (struct tnode*) ;
 int VAR_0 ;
 int FUNC_1 (struct tnode*) ;
 struct tnode* FUNC_2 (struct trie*,struct tnode*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct tnode* FUNC_3 (struct trie*,struct tnode*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct node*) ;
 int FUNC_5 (struct node*,int *) ;
 int FUNC_6 (char*,struct tnode*,int,int) ;
 int FUNC_7 (struct tnode*) ;
 int FUNC_8 (struct tnode*) ;

__attribute__((used)) static struct node *FUNC_9(struct trie *VAR_5, struct tnode *VAR_6)
{
 int VAR_7;
 struct tnode *VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;

 if (!VAR_6)
  return ((void*)0);

 FUNC_6("In tnode_resize %p inflate_threshold=%d threshold=%d\n",
   VAR_6, VAR_3, VAR_1);


 if (VAR_6->empty_children == FUNC_7(VAR_6)) {
  FUNC_8(VAR_6);
  return ((void*)0);
 }

 if (VAR_6->empty_children == FUNC_7(VAR_6) - 1)
  goto one_child;
 FUNC_1(VAR_6);



 if (!FUNC_4((struct node*) VAR_6)) {
  VAR_9 = VAR_4;
  VAR_10 = VAR_2;
 }
 else {
  VAR_9 = VAR_3;
  VAR_10 = VAR_1;
 }

 VAR_11 = VAR_0;
 while ((VAR_6->full_children > 0 && VAR_11-- &&
  50 * (VAR_6->full_children + FUNC_7(VAR_6)
        - VAR_6->empty_children)
  >= VAR_9 * FUNC_7(VAR_6))) {

  VAR_8 = VAR_6;
  VAR_6 = FUNC_3(VAR_5, VAR_6);

  if (FUNC_0(VAR_6)) {
   VAR_6 = VAR_8;



   break;
  }
 }

 FUNC_1(VAR_6);


 if( VAR_11 != VAR_0)
  return (struct node *) VAR_6;






 VAR_11 = VAR_0;
 while (VAR_6->bits > 1 && VAR_11-- &&
        100 * (FUNC_7(VAR_6) - VAR_6->empty_children) <
        VAR_10 * FUNC_7(VAR_6)) {

  VAR_8 = VAR_6;
  VAR_6 = FUNC_2(VAR_5, VAR_6);
  if (FUNC_0(VAR_6)) {
   VAR_6 = VAR_8;



   break;
  }
 }



 if (VAR_6->empty_children == FUNC_7(VAR_6) - 1) {
one_child:
  for (VAR_7 = 0; VAR_7 < FUNC_7(VAR_6); VAR_7++) {
   struct node *VAR_12;

   VAR_12 = VAR_6->child[VAR_7];
   if (!VAR_12)
    continue;



   FUNC_5(VAR_12, ((void*)0));
   FUNC_8(VAR_6);
   return VAR_12;
  }
 }
 return (struct node *) VAR_6;
}
