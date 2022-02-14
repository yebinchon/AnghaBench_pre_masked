
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_3__* node; } ;
typedef TYPE_4__ switch_t ;
struct TYPE_11__ {TYPE_2__* mesh; TYPE_1__* p_lash; } ;
typedef TYPE_5__ sort_ctx_t ;
struct TYPE_12__ {size_t index; TYPE_5__ ctx; } ;
typedef TYPE_6__ comp_t ;
struct TYPE_9__ {int* coord; } ;
struct TYPE_8__ {int dimension; int* dim_order; } ;
struct TYPE_7__ {TYPE_4__** switches; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const comp_t *VAR_2 = VAR_0, *VAR_3 = VAR_1;
 const sort_ctx_t *VAR_4 = &VAR_2->ctx;
 switch_t *VAR_5 = VAR_4->p_lash->switches[VAR_2->index];
 switch_t *VAR_6 = VAR_4->p_lash->switches[VAR_3->index];
 int VAR_7, VAR_8;
 int VAR_9;

 for (VAR_7 = 0; VAR_7 < VAR_4->mesh->dimension; VAR_7++) {
  VAR_8 = VAR_4->mesh->dim_order[VAR_7];
  VAR_9 = VAR_5->node->coord[VAR_8] - VAR_6->node->coord[VAR_8];
  if (VAR_9)
   return VAR_9;
 }

 return 0;
}
