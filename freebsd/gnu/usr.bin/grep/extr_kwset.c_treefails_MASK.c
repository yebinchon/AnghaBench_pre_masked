
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trie {struct trie* fail; struct tree* links; } ;
struct tree {scalar_t__ label; struct trie* trie; struct tree* rlink; struct tree* llink; } ;



__attribute__((used)) static void
FUNC_0 (register struct tree const *VAR_0, struct trie const *VAR_1,
    struct trie *VAR_2)
{
  register struct tree *VAR_3;

  if (!VAR_0)
    return;

  FUNC_0(VAR_0->llink, VAR_1, VAR_2);
  FUNC_0(VAR_0->rlink, VAR_1, VAR_2);



  while (VAR_1)
    {
      VAR_3 = VAR_1->links;
      while (VAR_3 && VAR_0->label != VAR_3->label)
 if (VAR_0->label < VAR_3->label)
   VAR_3 = VAR_3->llink;
 else
   VAR_3 = VAR_3->rlink;
      if (VAR_3)
 {
   VAR_0->trie->fail = VAR_3->trie;
   return;
 }
      VAR_1 = VAR_1->fail;
    }

  VAR_0->trie->fail = VAR_2;
}
