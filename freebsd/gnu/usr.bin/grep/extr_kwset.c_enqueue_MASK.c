
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trie {struct trie* next; } ;
struct tree {struct trie* trie; struct tree* rlink; struct tree* llink; } ;



__attribute__((used)) static void
FUNC_0 (struct tree *VAR_0, struct trie **VAR_1)
{
  if (!VAR_0)
    return;
  FUNC_0(VAR_0->llink, VAR_1);
  FUNC_0(VAR_0->rlink, VAR_1);
  (*VAR_1) = (*VAR_1)->next = VAR_0->trie;
}
