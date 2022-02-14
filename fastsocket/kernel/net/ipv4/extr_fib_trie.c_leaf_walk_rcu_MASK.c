
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int t_key ;
struct tnode {int bits; int * child; int pos; } ;
struct node {int key; } ;
struct leaf {int dummy; } ;


 scalar_t__ FUNC_0 (struct node*) ;
 struct tnode* FUNC_1 (struct node*) ;
 int FUNC_2 (int ) ;
 unsigned int FUNC_3 (int ,int ,int) ;
 struct node* FUNC_4 (struct tnode*,int ) ;

__attribute__((used)) static struct leaf *FUNC_5(struct tnode *VAR_0, struct node *VAR_1)
{
 do {
  t_key VAR_2;

  if (VAR_1)
   VAR_2 = FUNC_3(VAR_1->key, VAR_0->pos, VAR_0->bits) + 1;
  else
   VAR_2 = 0;

  while (VAR_2 < 1u << VAR_0->bits) {
   VAR_1 = FUNC_4(VAR_0, VAR_2++);
   if (!VAR_1)
    continue;

   if (FUNC_0(VAR_1)) {
    FUNC_2(VAR_0->child[VAR_2]);
    return (struct leaf *) VAR_1;
   }


   VAR_0 = (struct tnode *) VAR_1;
   VAR_2 = 0;
  }


  VAR_1 = (struct node *) VAR_0;
 } while ( (VAR_0 = FUNC_1(VAR_1)) != ((void*)0));

 return ((void*)0);
}
