
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_3__* edge ;
struct TYPE_8__ {scalar_t__ count; int probability; TYPE_2__* dest; TYPE_1__* src; } ;
struct TYPE_7__ {scalar_t__ index; } ;
struct TYPE_6__ {int frequency; scalar_t__ index; } ;



__attribute__((used)) static bool
FUNC_0 (edge VAR_0, edge VAR_1)
{
  if (VAR_0->count != VAR_1->count)
    return VAR_0->count > VAR_1->count;
  if (VAR_0->src->frequency * VAR_0->probability !=
      VAR_1->src->frequency * VAR_1->probability)
    return (VAR_0->src->frequency * VAR_0->probability
     > VAR_1->src->frequency * VAR_1->probability);


  if (VAR_0->src != VAR_1->src)
    return VAR_0->src->index > VAR_1->src->index;
  return VAR_0->dest->index > VAR_1->dest->index;
}
