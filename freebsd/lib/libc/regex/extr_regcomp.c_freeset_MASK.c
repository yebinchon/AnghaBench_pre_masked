
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct parse {TYPE_1__* g; } ;
struct TYPE_6__ {int types; int ranges; int wides; } ;
typedef TYPE_2__ cset ;
struct TYPE_5__ {size_t ncsets; TYPE_2__* sets; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct parse *VAR_0, cset *VAR_1)
{
 cset *VAR_2 = &VAR_0->g->sets[VAR_0->g->ncsets];

 FUNC_0(VAR_1->wides);
 FUNC_0(VAR_1->ranges);
 FUNC_0(VAR_1->types);
 FUNC_1(VAR_1, 0, sizeof(*VAR_1));
 if (VAR_1 == VAR_2-1)
  VAR_0->g->ncsets--;
}
