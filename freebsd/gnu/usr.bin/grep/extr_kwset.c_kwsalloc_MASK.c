
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trie {scalar_t__ shift; scalar_t__ depth; scalar_t__ fail; scalar_t__ next; scalar_t__ parent; scalar_t__ links; scalar_t__ accepting; } ;
struct kwset {int maxd; char const* trans; scalar_t__ target; int mind; struct trie* trie; int obstack; scalar_t__ words; } ;
typedef int kwset_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;

kwset_t
FUNC_4 (char const *VAR_1)
{
  struct kwset *VAR_2;

  VAR_2 = (struct kwset *) FUNC_1(sizeof (struct kwset));
  if (!VAR_2)
    return 0;

  FUNC_3(&VAR_2->obstack);
  VAR_2->words = 0;
  VAR_2->trie
    = (struct trie *) FUNC_2(&VAR_2->obstack, sizeof (struct trie));
  if (!VAR_2->trie)
    {
      FUNC_0((kwset_t) VAR_2);
      return 0;
    }
  VAR_2->trie->accepting = 0;
  VAR_2->trie->links = 0;
  VAR_2->trie->parent = 0;
  VAR_2->trie->next = 0;
  VAR_2->trie->fail = 0;
  VAR_2->trie->depth = 0;
  VAR_2->trie->shift = 0;
  VAR_2->mind = VAR_0;
  VAR_2->maxd = -1;
  VAR_2->target = 0;
  VAR_2->trans = VAR_1;

  return (kwset_t) VAR_2;
}
