
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trie {int accepting; scalar_t__ depth; scalar_t__ shift; scalar_t__ fail; scalar_t__ next; struct trie* parent; struct tree* links; } ;
struct tree {unsigned char label; int balance; struct trie* trie; struct tree* rlink; struct tree* llink; } ;
struct kwset {char const* trans; int words; scalar_t__ mind; scalar_t__ maxd; int obstack; struct trie* trie; } ;
typedef scalar_t__ kwset_t ;


 char* FUNC_0 (char*) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int *,int) ;

char *
FUNC_3 (kwset_t VAR_0, char const *VAR_1, size_t VAR_2)
{
  struct kwset *VAR_3;
  register struct trie *VAR_4;
  register unsigned char VAR_5;
  register struct tree *VAR_6;
  register int VAR_7;
  struct tree *VAR_8[12];
  enum { L, R } VAR_9[12];
  struct tree *VAR_10, *VAR_11, *VAR_12, *VAR_13, *VAR_14;

  VAR_3 = (struct kwset *) VAR_0;
  VAR_4 = VAR_3->trie;
  VAR_1 += VAR_2;



  while (VAR_2--)
    {
      VAR_5 = VAR_3->trans ? VAR_3->trans[(unsigned char) *--VAR_1] : *--VAR_1;




      VAR_6 = VAR_4->links;
      VAR_8[0] = (struct tree *) &VAR_4->links;
      VAR_9[0] = L;
      VAR_7 = 1;

      while (VAR_6 && VAR_5 != VAR_6->label)
 {
   VAR_8[VAR_7] = VAR_6;
   if (VAR_5 < VAR_6->label)
     VAR_9[VAR_7++] = L, VAR_6 = VAR_6->llink;
   else
     VAR_9[VAR_7++] = R, VAR_6 = VAR_6->rlink;
 }




      if (!VAR_6)
 {
   VAR_6 = (struct tree *) FUNC_2(&VAR_3->obstack,
            sizeof (struct tree));
   if (!VAR_6)
     return FUNC_0("memory exhausted");
   VAR_6->llink = 0;
   VAR_6->rlink = 0;
   VAR_6->trie = (struct trie *) FUNC_2(&VAR_3->obstack,
           sizeof (struct trie));
   if (!VAR_6->trie)
     return FUNC_0("memory exhausted");
   VAR_6->trie->accepting = 0;
   VAR_6->trie->links = 0;
   VAR_6->trie->parent = VAR_4;
   VAR_6->trie->next = 0;
   VAR_6->trie->fail = 0;
   VAR_6->trie->depth = VAR_4->depth + 1;
   VAR_6->trie->shift = 0;
   VAR_6->label = VAR_5;
   VAR_6->balance = 0;


   if (VAR_9[--VAR_7] == L)
     VAR_8[VAR_7]->llink = VAR_6;
   else
     VAR_8[VAR_7]->rlink = VAR_6;


   while (VAR_7 && !VAR_8[VAR_7]->balance)
     {
       if (VAR_9[VAR_7] == L)
  --VAR_8[VAR_7]->balance;
       else
  ++VAR_8[VAR_7]->balance;
       --VAR_7;
     }


   if (VAR_7 && ((VAR_9[VAR_7] == L && --VAR_8[VAR_7]->balance)
   || (VAR_9[VAR_7] == R && ++VAR_8[VAR_7]->balance)))
     {
       switch (VAR_8[VAR_7]->balance)
  {
  case (char) -2:
    switch (VAR_9[VAR_7 + 1])
      {
      case L:
        VAR_11 = VAR_8[VAR_7], VAR_10 = VAR_11->llink, VAR_13 = VAR_10->rlink;
        VAR_10->rlink = VAR_11, VAR_11->llink = VAR_13;
        VAR_10->balance = VAR_11->balance = 0;
        break;
      case R:
        VAR_11 = VAR_8[VAR_7], VAR_12 = VAR_11->llink, VAR_10 = VAR_12->rlink;
        VAR_13 = VAR_10->rlink, VAR_14 = VAR_10->llink;
        VAR_10->llink = VAR_12, VAR_12->rlink = VAR_14, VAR_10->rlink = VAR_11, VAR_11->llink = VAR_13;
        VAR_12->balance = VAR_10->balance != 1 ? 0 : -1;
        VAR_11->balance = VAR_10->balance != (char) -1 ? 0 : 1;
        VAR_10->balance = 0;
        break;
      default:
        FUNC_1 ();
      }
    break;
  case 2:
    switch (VAR_9[VAR_7 + 1])
      {
      case R:
        VAR_12 = VAR_8[VAR_7], VAR_10 = VAR_12->rlink, VAR_14 = VAR_10->llink;
        VAR_10->llink = VAR_12, VAR_12->rlink = VAR_14;
        VAR_10->balance = VAR_12->balance = 0;
        break;
      case L:
        VAR_12 = VAR_8[VAR_7], VAR_11 = VAR_12->rlink, VAR_10 = VAR_11->llink;
        VAR_14 = VAR_10->llink, VAR_13 = VAR_10->rlink;
        VAR_10->llink = VAR_12, VAR_12->rlink = VAR_14, VAR_10->rlink = VAR_11, VAR_11->llink = VAR_13;
        VAR_12->balance = VAR_10->balance != 1 ? 0 : -1;
        VAR_11->balance = VAR_10->balance != (char) -1 ? 0 : 1;
        VAR_10->balance = 0;
        break;
      default:
        FUNC_1 ();
      }
    break;
  default:
    FUNC_1 ();
  }

       if (VAR_9[VAR_7 - 1] == L)
  VAR_8[VAR_7 - 1]->llink = VAR_10;
       else
  VAR_8[VAR_7 - 1]->rlink = VAR_10;
     }
 }

      VAR_4 = VAR_6->trie;
    }



  if (!VAR_4->accepting)
    VAR_4->accepting = 1 + 2 * VAR_3->words;
  ++VAR_3->words;


  if (VAR_4->depth < VAR_3->mind)
    VAR_3->mind = VAR_4->depth;
  if (VAR_4->depth > VAR_3->maxd)
    VAR_3->maxd = VAR_4->depth;

  return 0;
}
