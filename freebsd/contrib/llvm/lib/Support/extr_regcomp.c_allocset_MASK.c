
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uch ;
struct parse {int ncsalloc; TYPE_1__* g; } ;
struct TYPE_6__ {int mask; int * multis; scalar_t__ smultis; scalar_t__ hash; struct TYPE_6__* ptr; } ;
typedef TYPE_2__ cset ;
struct TYPE_5__ {TYPE_2__* setbits; TYPE_2__* sets; int csetsize; int ncsets; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (char*,int ,size_t) ;
 scalar_t__ FUNC_4 (char*,size_t) ;

__attribute__((used)) static cset *
FUNC_5(struct parse *VAR_3)
{
 int VAR_4 = VAR_3->g->ncsets++;
 size_t VAR_5;
 size_t VAR_6;
 cset *VAR_7;
 size_t VAR_8 = (size_t)VAR_3->g->csetsize;
 int VAR_9;

 if (VAR_4 >= VAR_3->ncsalloc) {
  void *VAR_10;

  VAR_3->ncsalloc += VAR_0;
  VAR_5 = VAR_3->ncsalloc;
  if (VAR_5 > VAR_2 / sizeof(cset))
   goto nomem;
  FUNC_1(VAR_5 % VAR_0 == 0);
  VAR_6 = VAR_5 / VAR_0 * VAR_8;

  VAR_10 = (cset *)FUNC_4((char *)VAR_3->g->sets, VAR_5 * sizeof(cset));
  if (VAR_10 == ((void*)0))
   goto nomem;
  VAR_3->g->sets = VAR_10;

  VAR_10 = (uch *)FUNC_4((char *)VAR_3->g->setbits, VAR_6);
  if (VAR_10 == ((void*)0))
   goto nomem;
  VAR_3->g->setbits = VAR_10;

  for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++)
   VAR_3->g->sets[VAR_9].ptr = VAR_3->g->setbits + VAR_8*(VAR_9/VAR_0);

  (void) FUNC_3((char *)VAR_3->g->setbits + (VAR_6 - VAR_8), 0, VAR_8);
 }

 if (VAR_3->g->sets == ((void*)0) || VAR_3->g->setbits == ((void*)0))
  goto nomem;

 VAR_7 = &VAR_3->g->sets[VAR_4];
 VAR_7->ptr = VAR_3->g->setbits + VAR_8*((VAR_4)/VAR_0);
 VAR_7->mask = 1 << ((VAR_4) % VAR_0);
 VAR_7->hash = 0;
 VAR_7->smultis = 0;
 VAR_7->multis = ((void*)0);

 return(VAR_7);
nomem:
 FUNC_2(VAR_3->g->sets);
 VAR_3->g->sets = ((void*)0);
 FUNC_2(VAR_3->g->setbits);
 VAR_3->g->setbits = ((void*)0);

 FUNC_0(VAR_1);

 return(((void*)0));
}
