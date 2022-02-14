
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uch ;
struct parse {int ncsalloc; TYPE_1__* g; } ;
struct TYPE_5__ {int mask; int * multis; scalar_t__ smultis; scalar_t__ hash; int * ptr; } ;
typedef TYPE_2__ cset ;
struct TYPE_4__ {int * setbits; TYPE_2__* sets; int csetsize; int ncsets; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct parse*) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (size_t) ;
 int FUNC_4 (char*,int ,size_t) ;
 scalar_t__ FUNC_5 (char*,size_t) ;

__attribute__((used)) static cset *
FUNC_6(struct parse *VAR_3)
{
 int VAR_4 = VAR_3->g->ncsets++;
 size_t VAR_5;
 size_t VAR_6;
 cset *VAR_7;
 size_t VAR_8 = (size_t)VAR_3->g->csetsize;
 int VAR_9;

 if (VAR_4 >= VAR_3->ncsalloc) {
  VAR_3->ncsalloc += VAR_0;
  VAR_5 = VAR_3->ncsalloc;
  FUNC_2(VAR_5 % VAR_0 == 0);
  VAR_6 = VAR_5 / VAR_0 * VAR_8;
  if (FUNC_0(VAR_3) > VAR_1)
   goto oomem;
  if (VAR_3->g->sets == ((void*)0))
   VAR_3->g->sets = (cset *)FUNC_3(VAR_5 * sizeof(cset));
  else
   VAR_3->g->sets = (cset *)FUNC_5((char *)VAR_3->g->sets,
       VAR_5 * sizeof(cset));
  if (VAR_3->g->setbits == ((void*)0))
   VAR_3->g->setbits = (uch *)FUNC_3(VAR_6);
  else {
   VAR_3->g->setbits = (uch *)FUNC_5((char *)VAR_3->g->setbits,
        VAR_6);

   for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++)
    VAR_3->g->sets[VAR_9].ptr = VAR_3->g->setbits + VAR_8*(VAR_9/VAR_0);
  }
  if (VAR_3->g->sets != ((void*)0) && VAR_3->g->setbits != ((void*)0))
   FUNC_4((char *)VAR_3->g->setbits + (VAR_6 - VAR_8),
        0, VAR_8);
  else {
oomem:
   VAR_4 = 0;
   FUNC_1(VAR_2);

   return ((void*)0);
  }
 }

 VAR_7 = &VAR_3->g->sets[VAR_4];
 VAR_7->ptr = VAR_3->g->setbits + VAR_8*((VAR_4)/VAR_0);
 VAR_7->mask = 1 << ((VAR_4) % VAR_0);
 VAR_7->hash = 0;
 VAR_7->smultis = 0;
 VAR_7->multis = ((void*)0);

 return(VAR_7);
}
