
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uch ;
struct parse {TYPE_1__* g; } ;
struct TYPE_7__ {scalar_t__ hash; } ;
typedef TYPE_2__ cset ;
struct TYPE_6__ {size_t ncsets; TYPE_2__* sets; int csetsize; } ;


 int FUNC_0 (TYPE_2__*,size_t) ;
 int FUNC_1 (struct parse*,TYPE_2__*) ;

__attribute__((used)) static int
FUNC_2(struct parse *VAR_0, cset *VAR_1)
{
 uch VAR_2 = VAR_1->hash;
 size_t VAR_3;
 cset *VAR_4 = &VAR_0->g->sets[VAR_0->g->ncsets];
 cset *VAR_5;
 size_t VAR_6 = (size_t)VAR_0->g->csetsize;


 for (VAR_5 = &VAR_0->g->sets[0]; VAR_5 < VAR_4; VAR_5++)
  if (VAR_5->hash == VAR_2 && VAR_5 != VAR_1) {

   for (VAR_3 = 0; VAR_3 < VAR_6; VAR_3++)
    if (!!FUNC_0(VAR_5, VAR_3) != !!FUNC_0(VAR_1, VAR_3))
     break;
   if (VAR_3 == VAR_6)
    break;
  }

 if (VAR_5 < VAR_4) {
  FUNC_1(VAR_0, VAR_1);
  VAR_1 = VAR_5;
 }

 return((int)(VAR_1 - VAR_0->g->sets));
}
