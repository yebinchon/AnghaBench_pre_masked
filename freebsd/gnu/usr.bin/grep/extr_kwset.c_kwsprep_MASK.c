
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct trie {int shift; int maxshift; scalar_t__ depth; TYPE_2__* links; TYPE_1__* parent; struct trie* next; scalar_t__ accepting; struct trie* fail; } ;
struct kwset {int mind; int words; char* trans; scalar_t__* target; int mind2; unsigned char* delta; struct trie** next; struct trie* trie; int obstack; } ;
typedef scalar_t__ kwset_t ;
struct TYPE_9__ {scalar_t__ label; struct trie* trie; } ;
struct TYPE_8__ {scalar_t__ maxshift; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,struct trie**) ;
 int FUNC_1 (TYPE_2__*,TYPE_2__*) ;
 scalar_t__* FUNC_2 (int *,unsigned char) ;
 int FUNC_3 (TYPE_2__*,scalar_t__,unsigned char*) ;
 int FUNC_4 (TYPE_2__*,struct trie*,struct trie*) ;
 int FUNC_5 (TYPE_2__*,struct trie**) ;

char *
FUNC_6 (kwset_t VAR_1)
{
  register struct kwset *VAR_2;
  register int VAR_3;
  register struct trie *VAR_4, *VAR_5;
  register char const *VAR_6;
  unsigned char VAR_7[VAR_0];
  struct trie *VAR_8, *VAR_9[VAR_0];

  VAR_2 = (struct kwset *) VAR_1;




  if (VAR_2->mind < 256)
    for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3)
      VAR_7[VAR_3] = VAR_2->mind;
  else
    for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3)
      VAR_7[VAR_3] = 255;



  if (VAR_2->words == 1 && VAR_2->trans == 0)
    {

      VAR_2->target = FUNC_2(&VAR_2->obstack, VAR_2->mind);
      for (VAR_3 = VAR_2->mind - 1, VAR_4 = VAR_2->trie; VAR_3 >= 0; --VAR_3)
 {
   VAR_2->target[VAR_3] = VAR_4->links->label;
   VAR_4 = VAR_4->links->trie;
 }

      for (VAR_3 = 0; VAR_3 < VAR_2->mind; ++VAR_3)
 VAR_7[(unsigned char) VAR_2->target[VAR_3]] = VAR_2->mind - (VAR_3 + 1);
      VAR_2->mind2 = VAR_2->mind;


      for (VAR_3 = 0; VAR_3 < VAR_2->mind - 1; ++VAR_3)
 if (VAR_2->target[VAR_3] == VAR_2->target[VAR_2->mind - 1])
   VAR_2->mind2 = VAR_2->mind - (VAR_3 + 1);
    }
  else
    {


      for (VAR_4 = VAR_8 = VAR_2->trie; VAR_4; VAR_4 = VAR_4->next)
 {

   FUNC_0(VAR_4->links, &VAR_8);

   VAR_4->shift = VAR_2->mind;
   VAR_4->maxshift = VAR_2->mind;


   FUNC_3(VAR_4->links, VAR_4->depth, VAR_7);


   FUNC_4(VAR_4->links, VAR_4->fail, VAR_2->trie);



   for (VAR_5 = VAR_4->fail; VAR_5; VAR_5 = VAR_5->fail)
     {



       if (!FUNC_1(VAR_5->links, VAR_4->links))
  if (VAR_4->depth - VAR_5->depth < VAR_5->shift)
    VAR_5->shift = VAR_4->depth - VAR_5->depth;




       if (VAR_4->accepting && VAR_5->maxshift > VAR_4->depth - VAR_5->depth)
  VAR_5->maxshift = VAR_4->depth - VAR_5->depth;
     }
 }



      for (VAR_4 = VAR_2->trie->next; VAR_4; VAR_4 = VAR_4->next)
 {
   if (VAR_4->maxshift > VAR_4->parent->maxshift)
     VAR_4->maxshift = VAR_4->parent->maxshift;
   if (VAR_4->shift > VAR_4->maxshift)
     VAR_4->shift = VAR_4->maxshift;
 }



      for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3)
 VAR_9[VAR_3] = 0;
      FUNC_5(VAR_2->trie->links, VAR_9);

      if ((VAR_6 = VAR_2->trans) != 0)
 for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3)
   VAR_2->next[VAR_3] = VAR_9[(unsigned char) VAR_6[VAR_3]];
      else
 for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3)
   VAR_2->next[VAR_3] = VAR_9[VAR_3];
    }


  if ((VAR_6 = VAR_2->trans) != 0)
    for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3)
      VAR_2->delta[VAR_3] = VAR_7[(unsigned char) VAR_6[VAR_3]];
  else
    for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3)
      VAR_2->delta[VAR_3] = VAR_7[VAR_3];

  return 0;
}
