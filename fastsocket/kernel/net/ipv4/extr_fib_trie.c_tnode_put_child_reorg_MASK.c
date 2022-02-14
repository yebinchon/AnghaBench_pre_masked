
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tnode {int bits; struct node** child; int full_children; int empty_children; } ;
struct node {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct node*,struct tnode*) ;
 int FUNC_2 (struct node*,struct node*) ;
 int FUNC_3 (struct tnode*,struct node*) ;

__attribute__((used)) static void FUNC_4(struct tnode *VAR_0, int VAR_1, struct node *VAR_2,
      int VAR_3)
{
 struct node *VAR_4 = VAR_0->child[VAR_1];
 int VAR_5;

 FUNC_0(VAR_1 >= 1<<VAR_0->bits);


 if (VAR_2 == ((void*)0) && VAR_4 != ((void*)0))
  VAR_0->empty_children++;
 else if (VAR_2 != ((void*)0) && VAR_4 == ((void*)0))
  VAR_0->empty_children--;


 if (VAR_3 == -1)
  VAR_3 = FUNC_3(VAR_0, VAR_4);

 VAR_5 = FUNC_3(VAR_0, VAR_2);
 if (VAR_3 && !VAR_5)
  VAR_0->full_children--;
 else if (!VAR_3 && VAR_5)
  VAR_0->full_children++;

 if (VAR_2)
  FUNC_1(VAR_2, VAR_0);

 FUNC_2(VAR_0->child[VAR_1], VAR_2);
}
