
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int t_key ;
struct tnode {int pos; int bits; int empty_children; scalar_t__ full_children; int key; int parent; } ;
struct node {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct tnode*,unsigned int,unsigned long) ;
 struct tnode* FUNC_1 (size_t) ;

__attribute__((used)) static struct tnode *FUNC_2(t_key VAR_1, int VAR_2, int VAR_3)
{
 size_t VAR_4 = sizeof(struct tnode) + (sizeof(struct node *) << VAR_3);
 struct tnode *VAR_5 = FUNC_1(VAR_4);

 if (VAR_5) {
  VAR_5->parent = VAR_0;
  VAR_5->pos = VAR_2;
  VAR_5->bits = VAR_3;
  VAR_5->key = VAR_1;
  VAR_5->full_children = 0;
  VAR_5->empty_children = 1<<VAR_3;
 }

 FUNC_0("AT %p s=%u %lu\n", VAR_5, (unsigned int) sizeof(struct tnode),
   (unsigned long) (sizeof(struct node) << VAR_3));
 return VAR_5;
}
