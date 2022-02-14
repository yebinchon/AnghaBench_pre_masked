
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct parse {TYPE_1__* g; } ;
typedef int cset ;
struct TYPE_2__ {scalar_t__ ncsets; int * sets; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int) ;
 int * FUNC_2 (int *,scalar_t__,int) ;

__attribute__((used)) static cset *
FUNC_3(struct parse *VAR_1)
{
 cset *VAR_2, *VAR_3;

 VAR_3 = FUNC_2(VAR_1->g->sets, VAR_1->g->ncsets + 1, sizeof(*VAR_3));
 if (VAR_3 == ((void*)0)) {
  FUNC_0(VAR_0);
  return (((void*)0));
 }
 VAR_1->g->sets = VAR_3;
 VAR_2 = &VAR_1->g->sets[VAR_1->g->ncsets++];
 FUNC_1(VAR_2, 0, sizeof(*VAR_2));

 return(VAR_2);
}
