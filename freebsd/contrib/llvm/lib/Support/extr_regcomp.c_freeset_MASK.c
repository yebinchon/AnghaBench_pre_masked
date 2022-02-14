
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct parse {TYPE_1__* g; } ;
typedef int cset ;
struct TYPE_2__ {size_t ncsets; int csetsize; int * sets; } ;


 int FUNC_0 (int *,size_t) ;

__attribute__((used)) static void
FUNC_1(struct parse *VAR_0, cset *VAR_1)
{
 size_t VAR_2;
 cset *VAR_3 = &VAR_0->g->sets[VAR_0->g->ncsets];
 size_t VAR_4 = (size_t)VAR_0->g->csetsize;

 for (VAR_2 = 0; VAR_2 < VAR_4; VAR_2++)
  FUNC_0(VAR_1, VAR_2);
 if (VAR_1 == VAR_3-1)
  VAR_0->g->ncsets--;
}
