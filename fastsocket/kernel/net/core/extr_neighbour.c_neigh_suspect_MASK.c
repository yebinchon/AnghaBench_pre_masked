
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct neighbour {TYPE_1__* ops; struct hh_cache* hh; int output; } ;
struct hh_cache {int hh_output; struct hh_cache* hh_next; } ;
struct TYPE_2__ {int output; } ;


 int FUNC_0 (char*,struct neighbour*) ;

__attribute__((used)) static void FUNC_1(struct neighbour *VAR_0)
{
 struct hh_cache *VAR_1;

 FUNC_0("neigh %p is suspected.\n", VAR_0);

 VAR_0->output = VAR_0->ops->output;

 for (VAR_1 = VAR_0->hh; VAR_1; VAR_1 = VAR_1->hh_next)
  VAR_1->hh_output = VAR_0->ops->output;
}
